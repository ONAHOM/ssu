#include <string>

using namespace std;

class StackException {
    private:
        string str;
    public:
        StackException(string message): str(message) {}
        const char* what() const {
            return str.c_str();
        }
};