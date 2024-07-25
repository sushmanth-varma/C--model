#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a consonant." << endl;
    } else {
        cout << ch << " is not an alphabetic character." << endl;
    }

    return 0;
}

