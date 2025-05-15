#include <string>

using namespace std;

class QueueException {
    private:
        string str;
    public:
        QueueException(string message): str(message) {}
        const char* what() const { 
            return str.c_str(); 
        }
};