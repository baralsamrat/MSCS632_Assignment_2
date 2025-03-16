#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = 0;  
    for (int i = 0; i < size; i++) {  
        total += arr[i];
    }
    return total;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};  // Missing semicolon at the end of the declaration
    int size = sizeof(numbers) / sizeof(numbers[0]);  
    int result = calculateSum(numbers, size);
    cout << "Sum in C++: " << result << endl;
    return 0;  
}

# Output
# Sum in C++: 15
