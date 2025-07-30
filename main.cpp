#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter a line: ";
    getline(cin, input);

    if (input.starts_with("//")) {
        cout << "Single line comment\n";
    }
    else if (input.starts_with("/*")) {
        if (input.size() >= 4 && input.ends_with("*/")) {
            cout << "Multi-line comment\n";
        } else {
            cout << "Possibly part of a multi-line comment\n";
        }
    }
    else {
        cout << "Not a comment\n";
    }

    return 0;
}
