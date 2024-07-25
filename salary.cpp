#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
    char gender;

public:
    void setPersonData(const string& n, int a, char g) {
        name = n;
        age = a;
        gender = g;
    }

    void getPersonData() const {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string className;

public:
    void setStudentData(const string& n, int a, char g, int r, const string& c) {
        setPersonData(n, a, g);
        rollNumber = r;
        className = c;
    }

    void getStudentData() const {
        getPersonData();
        cout << "Roll Number: " << rollNumber << ", Class: " << className << endl;
    }
};

class Teacher : public Person {
private:
    string subject;
    double salary;

public:
    void setTeacherData(const string& n, int a, char g, const string& s, double sal) {
        setPersonData(n, a, g);
        subject = s;
        salary = sal;
    }

    void getTeacherData() const {
        getPersonData();
        cout << "Subject: " << subject << ", Salary: " << salary << endl;
    }
};

int main() {
    Student s;
    s.setStudentData("John Doe", 20, 'M', 123, "CS101");
    s.getStudentData();

    Teacher t;
    t.setTeacherData("Jane Smith", 35, 'F', "Math", 50000.0);
    t.getTeacherData();

    return 0;
}

