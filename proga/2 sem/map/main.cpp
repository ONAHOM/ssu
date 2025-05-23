#include <fstream>
#include <vector>
#include <string>   // Не используется напрямую для чисел, но часто включается
#include <map>      // Для использования std::map
#include <sstream>  // Для преобразования строки в число и проверки
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    vector<int> numbers;
    string token;
    map<int, int> firstOccurrenceMap; 
    int currentIndex = 0;

    while (in >> token) {
        stringstream ss(token);
        int num;
        if (ss >> num && ss.eof()) {
            numbers.push_back(num);
            if (firstOccurrenceMap.find(num) == firstOccurrenceMap.end()) {
                firstOccurrenceMap[num] = currentIndex;
            }
            currentIndex++;
        } else {
            currentIndex++;
        }
    }
    in.close();
    for (size_t i = 0; i < numbers.size(); ++i) {
        int currentNum = numbers[i];
        int oppositeNum = -currentNum;

        out << "Число: " << currentNum << endl;

        int firstOccurrenceSelf = firstOccurrenceMap[currentNum];

        out << "  Первое вхождение " << currentNum << ": позиция " << firstOccurrenceSelf << endl;

        map<int, int>::iterator itOpposite = firstOccurrenceMap.find(oppositeNum);

        if (itOpposite != firstOccurrenceMap.end() && oppositeNum != 0) {
            out << "  Первое вхождение " << oppositeNum << ": позиция " << itOpposite->second << endl;
        } else {
            out << "  Первое вхождение " << oppositeNum << ": не найдено" << endl;
        }
        out << "---------------------------------------------------" << endl;
    }

    out.close(); // Закрываем выходной файл
    return 0; // Успешное завершение программы
}
