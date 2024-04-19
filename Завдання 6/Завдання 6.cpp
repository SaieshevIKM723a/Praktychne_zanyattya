#include <iostream>
#include <string>

using namespace std;

string reverseString(string str) {
    int length = str.length();
    for (int i = 0; i < length / 2; i++) {
        swap(str[i], str[length - i - 1]);
    }
    return str;
}

int main() {
    string orig = "Hello, world!";
    string reversedstr = reverseString(orig);

    cout << "Original row: " << orig << endl;
    cout << "Reversed row: " << reversedstr << endl;

    return 0;
}
