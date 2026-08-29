#include <iostream>
#include <cstring>
using namespace std;

class Student{
    private: 
        int rollNumber;
        char *name;
    public:
        Student()
        {
            rollNumber = 0;
            name = new char[1];
            name[0] = '\0';  
        }
        Student(int roll, const char *n)
        {
            rollNumber = roll;
            name = new char[strlen(n) + 1];
            strcpy(name, n);
        }
        Student(const Student &obj)
        {
            rollNumber = obj.rollNumber;
            name = new char[strlen(obj.name) + 1];
            strcpy(name, obj.name);
        }

        void display()
        {
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Name: " << name << endl;
        }

        ~Student()
        {   
            cout << "Destructor is called: " << endl;
            delete [] name;
        }
};

int main()
{
    
    Student s1(25, "Pameela");
    cout << "Object 1 result is: " << endl;
    s1.display();
    Student s2(s1);
    cout << "Object 2 result is: " << endl;
    s2.display();


}