#include <iostream>

using namespace std;

class Counter {
public:
    int count;

    Counter() : count(0) {}
    Counter(int c) : count(c) {}
    Counter& operator++() {
        ++count;
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this;
        ++count;
        return temp;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial count: " << c1.count << endl;

    ++c1;
    cout << "After prefix ++: " << c1.count << endl;

    c1++;
    cout << "After postfix ++: " << c1.count << endl;

    return 0;
}

