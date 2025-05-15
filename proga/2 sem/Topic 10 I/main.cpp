#include <fstream>
#include <cmath>
#include <float.h>

using namespace std;

ifstream in("points.txt");
ofstream out("output.txt");

struct point{
    double x,y;
    void input();
    void output();
};

void point::input(){
    in >> x >> y;
}
void point::output(){
    out << "x = " << x << ' ' << "y = " << y << '\n';
}

double distance(point p1, point p2){
    return sqrt(pow(abs(p1.x - p2.x),2) + pow(abs(p1.y - p2.y),2));
}

bool isTriangle(point p1, point p2, point p3){
    if((p1.x == p2.x && p1.x == p3.x) || (p1.y == p2.y && p1.y == p3.y) || distance(p1,p2) == 0 || distance(p1,p3) == 0 || distance(p2,p3) == 0){
        return false;
    }
    return true;
}

int main(){
    int n = 0;
    point *points = new point [20];
    while(in.peek() != EOF){
        points[n++].input();
    }

    in.close();
    if (n < 3){
        out << "Количество точек меньше трех";
        return 0;
    }
    double perimeter = DBL_MAX;
    double l1,l2,l3;
    point p1,p2,p3;
    for(int i = 0; i < n-2; i++){
        for(int j = (i+1); j < n-1; j++){
            for(int k = (j+1); k < n; k++){
                if (isTriangle(points[i],points[j],points[k])){
                    l1 = distance(points[i],points[j]);
                    l2 = distance(points[i],points[k]);
                    l3 = distance(points[j],points[k]);
                    if (perimeter > (l1 + l2 + l3)){
                        p1 = points[i];
                        p2 = points[j];
                        p3 = points[k];
                        perimeter = l1 + l2 + l3;
                    }
                }
            }
        }
    }
    if (perimeter == DBL_MAX){
        out << "треугольники из этих точек не существуют";
        return 0;
    }
    out << perimeter << "\n";
    p1.output();
    p2.output();
    p3.output();
    in.close();
    out.close();
    return 0;
}