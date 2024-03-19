/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int main()
{
    char ans;
    do {
        string expression;
        cout << "Welcome to the calculator" << "\n" << "Please enter your arithmetic expression: ";
        getline(cin, expression);

        istringstream iss(expression);
        double result = 0;
        char op;
        iss >> result;

        if (iss.fail()) {
            cout << "Error: Invalid expression." << endl;
            return 1;
        }

        while (iss >> op) {
            double operand;
            if (op == '^') {
                int exponent;
                if (!(iss >> exponent)) {
                    cout << "Error: Invalid expression." << endl;
                    return 1;
                }
                result = pow(result, exponent);
            } else if (op == '#') {
                result = sqrt(result);
            } else if (op == '@') {
                result = round(result);
            } else if (op == '~') {
                result = abs(result);
            } else {
                if (!(iss >> operand)) {
                    cout << "Error: Invalid expression." << endl;
                    return 1;
                }

                if (op == '+') {
                    result += operand;
                } else if (op == '-') {
                    result -= operand;
                } else if (op == '*') {
                    result *= operand;
                } else if (op == '/') {
                    if (operand == 0) {
                        cout << "Error: Division by zero is not allowed." << endl;
                        return 1;
                    }
                    result /= operand;
                } else {
                    cout << "Error: Invalid operator entered." << endl;
                    return 1;
                }
            }
        }

        cout << "Result: " << result << endl;
        cout << "Do you want to continue (Y/N): ";
        cin >> ans;
        cin.ignore(); 
    } while (ans == 'Y' || ans == 'y');

    return 0;
}
