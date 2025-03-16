#include <iostream>
#include <sys/resource.h>
#include <unistd.h>
#include <vector>
#include <string>

using namespace std;

void printMemoryUsage(const string &note) {
    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    // ru_maxrss is in kilobytes on Linux
    cout << "[" << note << "] Memory usage: " << usage.ru_maxrss / 1024.0 << " MB" << endl;
}

int main() {
    printMemoryUsage("Start");
    
    // Allocate a vector with 1,000,000 integers
    vector<int> v;
    for (int i = 0; i < 1000000; i++) {
        v.push_back(i);
    }
    printMemoryUsage("After allocation");
    
    // Clear the vector to free memory
    v.clear();
    printMemoryUsage("After deletion");
    
    return 0;
}


// Output
// [Start] Memory usage: 2.03906 MB
// [After allocation] Memory usage: 7.59375 MB
// [After deletion] Memory usage: 7.59375 MB
