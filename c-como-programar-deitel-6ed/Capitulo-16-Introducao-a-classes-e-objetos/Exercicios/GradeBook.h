#include <string>

using namespace std;

class GradeBook
{
    public:
        GradeBook(string courseName, string teacherName);

        void displayMessage();        
        void setTeacherName(string name);

        string getTeacherName();
        string getCourseName();

    private:
        string teacherName;
        string courseName;        
};