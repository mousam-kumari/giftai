#include <iostream>
using namespace std;

int main() {
    // Declare and initialize the array
    int arr[] = {2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Initialize the result variable to 1 (multiplicative identity)
    int result = 1;

    // Loop through the array and multiply each element
    for (int i = 0; i < n; i++) {
        result *= arr[i];
    }

    // Print the result
    cout << "The product of all elements in the array is: " << result << endl;

    return 0;
}
