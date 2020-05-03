// This program demonstrate an exception being thrown and caught
#include <iostream>
#include <string>

using namespace std;

// Function prototype
double divide (int, int);

int main(int argc, char* argv[])
{
    int num1, num2;
    double quotient;

    // Get two numbers
    cout << "Enter two number: ";
    cin >> num1 >> num2;

    // Divide num1 by num2 and catch any potential exceptions
    try
    {
        quotient = divide(num1, num2);
        cout << "The quotient is " << quotient << endl;
    }
    catch(string exceptionString)
    {
        cout << exceptionString;
    }
    
    cout << "End of the program.\n";
        return EXIT_SUCCESS;
}

double divide(int numerator, int denominator)
{
    if (denominator == 0)
    {
        string exceptionString = "ERROR: Cannot divide by zero.\n";
        throw exceptionString;
    }

    return static_cast<double>(numerator) / denominator;
}