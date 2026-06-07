#include <iostream>
using namespace std;

int main() {

    int a = 42;            // stack
    int* b = new int(42);  // heap

    cout << "Stack: " << a
         << "    Heap: " << *b << endl;

    *b = 99;

    cout << "Stack: " << a
         << "    Heap: " << *b << endl;

    delete b;

    cout << "Heap liberado." << endl;

    return 0;
}