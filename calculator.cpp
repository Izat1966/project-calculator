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
    string expression;
    cout << "Welcome to the calculator" << "\n" << "Please enter your arithmetic expression: ";
    getline(cin, expression);

    istringstream iss(expression);
    int result = 0;
    string op;
    iss >> result;

    while (iss >> op) {
        int operand;
        iss >> operand;

        if (op == "+") {
            result += operand;
        } else if (op == "-") {
            result -= operand;
        } else if (op == "*") {
            result *= operand;
        } else if (op == "/") {
            if (operand == 0) {
                cout << "Error: Division by zero is not allowed.";
                return 1;
            }
            result /= operand;
        }else if (op == "pow") {
            result
        }    
            else {
            cout << "Error: Invalid operator entered.";
            return 1;
        }
    }
    string ans;
    cout << "Result: " << result << endl;
    cout << "Do you want to continue or no (Y/N): ";
    cin >> ans;
    if (ans=='Y' || 'y') {
        
    }

    return 0;
}
