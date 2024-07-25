#include <iostream>
#include <climits> // For INT_MAX and INT_MIN

using namespace std;

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Minimum element is " << min << endl;
    cout << "Maximum element is " << max << endl;

    return 0;
}

