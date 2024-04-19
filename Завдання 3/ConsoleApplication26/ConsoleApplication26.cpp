#include <iostream>

using namespace std;

int getLength(string str) {
    int length = 0;
    for (char c : str) {
        length++;
    }
    return length;
}

int main() {
    string str = "Hello KHPI!";
    int length = getLength(str);
    cout << "Length of row" << str << "' : " << length << endl;
    return 0;
}
