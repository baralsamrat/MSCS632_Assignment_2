// C++: Manual memory management with new and delete
#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate an array of 5 integers
    int* numbers = new int[5];
    for (int i = 0; i < 5; i++) {
        numbers[i] = i;
    }
    cout << "Numbers allocated in C++." << endl;
    // Manually free the allocated memory to prevent memory leaks
    delete[] numbers;
    return 0;
}
