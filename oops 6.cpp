
#include <iostream>
using namespace std;

// 1. Single Inheritance
class Person {
public:
    void showPerson() {
        cout << "Person details displayed." << endl;
    }
};

class Student : public Person {
public:
    void showStudent() {
        cout << "Student details displayed." << endl;
    }
};

// 2. Multilevel Inheritance
class Result : public Student {
public:
    void showResult() {
        cout << "Student result displayed." << endl;
    }
};

// 3. Multiple Inheritance
class Academic {
public:
    void academicInfo() {
        cout << "Academic information displayed." << endl;
    }
};

class Sports {
public:
    void sportsInfo() {
        cout << "Sports information displayed." << endl;
    }
};

class CollegeStudent : public Academic, public Sports {
};

// 4. Hierarchical Inheritance
class Vehicle {
public:
    void showVehicle() {
        cout << "Vehicle information displayed." << endl;
    }
};

class Car : public Vehicle {
};

class Bike : public Vehicle {
};

// 5. Hybrid Inheritance
class University {
public:
    void universityInfo() {
        cout << "University information displayed." << endl;
    }
};

class Engineering : public University {
};

class Management {
public:
    void managementInfo() {
        cout << "Management information displayed." << endl;
    }
};

class TechStudent : public Engineering, public Management {
};

int main() {

    cout << "1. SINGLE INHERITANCE" << endl;
    Student s;
    s.showPerson();
    s.showStudent();

    cout << "\n2. MULTILEVEL INHERITANCE" << endl;
    Result r;
    r.showPerson();
    r.showStudent();
    r.showResult();

    cout << "\n3. MULTIPLE INHERITANCE" << endl;
    CollegeStudent cs;
    cs.academicInfo();
    cs.sportsInfo();

    cout << "\n4. HIERARCHICAL INHERITANCE" << endl;
    Car c;
    Bike b;
    c.showVehicle();
    b.showVehicle();

    cout << "\n5. HYBRID INHERITANCE" << endl;
    TechStudent ts;
    ts.universityInfo();
    ts.managementInfo();

    return 0;
}
