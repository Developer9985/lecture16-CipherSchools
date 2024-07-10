#include <iostream>

// Function prototypes
int sum(int a, int b, int c);
int subtract(int a, int b, int c);
int multiply(int a, int b, int c);
void swap(int &a, int &b);

using namespace std;

// Function to calculate the sum of three numbers
int sum(int a, int b, int c) {
    return a + b + c;
}

// Function to calculate the difference of three numbers
int subtract(int a, int b, int c) {
    return a - b - c;
}

// Function to calculate the product of three numbers
int multiply(int a, int b, int c) {
    return a * b * c;
}

// Function to swap two numbers
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10, num2 = 5, num3 = 2;

    // Calling the sum function
    int sumResult = sum(num1, num2, num3);
    cout << "Sum: " << sumResult << endl;

    // Calling the subtract function
    int subtractResult = subtract(num1, num2, num3);
    cout << "Difference: " << subtractResult << endl;

    // Calling the multiply function
    int multiplyResult = multiply(num1, num2, num3);
    cout << "Product: " << multiplyResult << endl;

    // Showing the values before swap
    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Calling the swap function
    swap(num1, num2);

    // Showing the values after swap
    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
