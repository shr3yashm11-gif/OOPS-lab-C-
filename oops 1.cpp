include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks;

public:
    Student()
    {
        cout << "Constructor called." << endl;
    }

    void getData()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }

    ~Student()
    {
        cout << "\nDestructor called." << endl;
    }
};

int main()
{
    Student s1;

    s1.getData();
    s1.displayData();

    return 0;
}