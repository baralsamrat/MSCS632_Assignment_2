// Intentional errors: using 'o' instead of 0 and a missing semicolon in the array declaration
#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = o;  // 'o' is not defined
    for (int i = o; i < size; i++) {  // again, 'o' is used instead of 0
        total += arr[i];
    }
    return total;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5}  // Missing semicolon at the end of the declaration
    int size = sizeof(numbers) / sizeof(numbers[o]);  // 'o' instead of 0
    int result = calculateSum(numbers, size);
    cout << "Sum in C++: " << result << endl;
    return o;  // 'o' again used instead of 0
}
