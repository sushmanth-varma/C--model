#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;

    int temp;
    do {
        temp = a % b;
        a = b;
        b = temp;
    } while (b != 0);

    cout << "The greatest common divisor is " << a << endl;

    return 0;
}

