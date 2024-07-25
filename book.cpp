#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book(const string& t, const string& a) : title(t), author(a) {
        cout << "Book \"" << title << "\" by " << author << " created." << endl;
    }

    ~Book() {
        cout << "Book \"" << title << "\" by " << author << " destroyed." << endl;
    }
};

int main() {
    Book b("1984", "George Orwell");

    return 0;
}

