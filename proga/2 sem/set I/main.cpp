#include <fstream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;


set<char> findMissingDigits(string numberStr) {
    set<char> presentDigits;
    for (char c : numberStr) {
        presentDigits.insert(c);
    }

    set<char> allDigits = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    set<char> missingDigits;

    set_difference(allDigits.begin(), allDigits.end(),
                        presentDigits.begin(), presentDigits.end(),
                        inserter(missingDigits, missingDigits.begin()));

    return missingDigits;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string currentNumberStr;
    while (in >> currentNumberStr) {
        out << "Число: " << currentNumberStr << endl;
        set<char> missing = findMissingDigits(currentNumberStr);
        if (missing.empty()) {
            out << "  Все цифры (0-9) присутствуют." << endl;
        } else {
            out << "  Отсутствующие цифры: ";
            for (char digit : missing) {
                out << digit << " ";
            }
            out << endl;
        }
        out << "---------------------" << endl;
    }

    in.close();
    out.close();
    return 0;
}
