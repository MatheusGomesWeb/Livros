#include <string>

using namespace std;

class Validacao
{
    public:
        Validacao(string);
        void setCourseName(string);
        string getCourseName();
        void displayMessage();

    private:
        string courseName;
};