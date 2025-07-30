#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter an expression: ";
    cin >> input;

    cout << "Operators found:\n";
    for (char ch : input) {
        if (ch == '+' || ch == '-' || ch == '*' ||
            ch == '/' || ch == '%' || ch == '=') {
            cout << "Operator: " << ch << endl;
        }
    }

    return 0;
}

