#include <iostream>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    int age;
    string course;
};

const int MAX_STUDENTS = 100;
Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "Student list is full." << endl;
        return;
    }
    
    Student newStudent;
    cout << "Enter Student ID: ";
    cin >> newStudent.id;
    cout << "Enter Student Name: ";
    cin.ignore(); // Ignore the leftover newline character
    getline(cin, newStudent.name);
    cout << "Enter Student Age: ";
    cin >> newStudent.age;
    cout << "Enter Student Course: ";
    cin.ignore(); // Ignore the leftover newline character
    getline(cin, newStudent.course);
    
    students[studentCount++] = newStudent;
    cout << "Student added successfully!" << endl;
}

void displayStudents() {
    if (studentCount == 0) {
        cout << "No students to display." << endl;
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        cout << "ID: " << students[i].id << ", Name: " << students[i].name
             << ", Age: " << students[i].age << ", Course: " << students[i].course << endl;
    }
}

void modifyStudent() {
    int id;
    cout << "Enter Student ID to modify: ";
    cin >> id;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            cout << "Enter new name: ";
            cin.ignore(); // Ignore the leftover newline character
            getline(cin, students[i].name);
            cout << "Enter new age: ";
            cin >> students[i].age;
            cout << "Enter new course: ";
            cin.ignore(); // Ignore the leftover newline character
            getline(cin, students[i].course);

            cout << "Student details updated successfully!" << endl;
            return;
        }
    }

    cout << "Student ID not found." << endl;
}

void deleteStudent() {
    int id;
    cout << "Enter Student ID to delete: ";
    cin >> id;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            cout << "Student deleted successfully!" << endl;
            return;
        }
    }

    cout << "Student ID not found." << endl;
}

void displayMenu() {
    cout << "\nStudent Management System" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Display Students" << endl;
    cout << "3. Modify Student" << endl;
    cout << "4. Delete Student" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                modifyStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
