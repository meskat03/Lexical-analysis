#include <iostream>
#include <string>

using namespace std;

bool isNumeric(const string& str) {
    for (char ch : str) {
        if (!isdigit(ch))
            return false;
    }
    return !str.empty();
}

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    if (isNumeric(input))
        cout << "Numeric constant\n";
    else
        cout << "Not numeric\n";

    return 0;
}
