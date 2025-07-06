#include <iostream>
using namespace std;

// Function to greet a user
void greetUser() {
    cout << "Hello, welcome to CSC 226!" << endl;
}

// Function to add two numbers and return the result
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    greetUser(); // Call greet function

    int result = addNumbers(5, 10); // Call add function and store result
    cout << "The sum is: " << result << endl;

    return 0;
}

