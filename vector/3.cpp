#include <iostream>
#include <vector>
#include <algorithm> //for reverse()
using namespace std;

int main() {
    vector<int> numbers;
    int n, t;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    // Taking input
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> t;
        numbers.push_back(t);
    }

    // reverse(numbers.begin(), numbers.end());  // STL function to reverse the vector

    // Printing in reverse order
    cout << "Numbers in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    return 0;
}
