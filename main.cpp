#include <iostream>
#include <string>

using namespace std;

bool isIdentifier(const string& str) {
    if (str.empty() || (!isalpha(str[0]) && str[0] != '_'))
        return false;

    for (char ch : str.substr(1)) {
        if (!isalnum(ch) && ch != '_')
            return false;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter identifier: ";
    cin >> input;

    if (isIdentifier(input))
        cout << "Valid Identifier\n";
    else
        cout << "Not a valid Identifier\n";

    return 0;
}
