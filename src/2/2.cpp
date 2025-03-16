// C++: Demonstrating static typing and lambda closures
#include <iostream>
#include <functional>
using namespace std;

int main() {
    int x = 10;
    // C++ lambda capturing 'x' by value and marked mutable to allow modification.
    auto inner = [x](int add) mutable -> int {
        x += add;
        return x;
    };
    cout << "C++ lambda call 1: " << inner(1) << endl;  // 11
    cout << "C++ lambda call 2: " << inner(1) << endl;  // 12 (x is updated within the lambda)
    return 0;
}


// Output
// C++ lambda call 1: 11
// C++ lambda call 2: 12
