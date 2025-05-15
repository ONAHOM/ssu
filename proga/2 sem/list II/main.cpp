#include <fstream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    list<int> my_list;
    int x;
    int new_element = 999;
    while(in.peek() != EOF){
        in >> x;
        my_list.push_back(x);
    }
    int index = 1;
    for (auto it = my_list.begin(); it != my_list.end(); ++it, ++index) {
        if (*it % index == 0) {

            it = my_list.insert(next(it), new_element);
        }
    }

    for (int x : my_list) {
        out << x << " ";
    }

    return 0;
}
