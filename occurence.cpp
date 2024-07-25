#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 3, 7, 8, 7, 5, 6, 7, 2, 7}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int value, count = 0;
    cout << "Enter the value to find its occurrences: ";
    cin >> value;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == value) {
            ++count;
        }
    }
    cout << "The value " << value << " occurs " << count << " times in the array." << endl;
    return 0;
}


