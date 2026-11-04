#include <iostream>
#include <string>
using namespace std;


inline int add(int a, int b) {
    return a + b;
}


class Student {
    string name;
    int age;
    static int count;

public:
    Student(string name, int age) {
        this->name = name;
        this->age = age;
        count++;
    }

    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }

    static void displayCount() {
        cout << "Total objects: " << count << endl;
    }
};

int Student::count = 0;


class Account {
    int balance;

public:
    Account(int balance) {
        this->balance = balance;
    }

    friend class AccountViewer;
};

class AccountViewer {
public:
    void showBalance(Account a) {
        cout << "Balance: " << a.balance << endl;
    }
};

int main() {
    cout << "Inline Function" << endl;
    cout << "Sum: " << add(5, 3) << endl;

    cout << "\nThis Pointer" << endl;
    Student s1("Rahul", 20);
    s1.display();

    cout << "\nStatic Member Function" << endl;
    Student s2("Amit", 21);
    Student::displayCount();

    cout << "\nFriend Class" << endl;
    Account a(5000);
    AccountViewer viewer;
    viewer.showBalance(a);

    return 0;
}