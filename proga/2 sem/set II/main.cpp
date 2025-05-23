#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cctype>   

using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

set<char> getPunctuation(const std::string& str) {
    set<char> punctuation;
    for (char ch : str) {
        if (ispunct(ch)) {
            punctuation.insert(ch);
        }
    }
    return punctuation;
}

int main() {
    vector<string> lines;
    string line;

    while (getline(in, line)) {
        lines.push_back(line);
    }
    in.close();

    set<char> last = getPunctuation(lines.back());

    if (lines.size() < 2) {
        out << "Недостаточно строк для сравнения (нужно хотя бы 2 строки)." << endl;
        out.close();
        return 0;
    }

    for (size_t i = 0; i < lines.size() - 1; ++i) {
        set<char> current = getPunctuation(lines[i]);
        set<char> s;
        out << "Знаки препинания в строке " << i + 1 << ": ";
        if (current.empty()){
            out << "отсутствуют" << std::endl;
        } else {
                set_difference(current.begin(), current.end(),
                               last.begin(), last.end(),inserter(s, s.begin()));
            for (char p : s) {
                out << p << " ";
            }
            out << std::endl;
        }
    }
    out.close();
    return 0;
}
