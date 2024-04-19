#include <iostream>

using namespace std;
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    int result = factorial(num);

    cout << "Factorial: " << num << " Sum: " << result << endl;

    return 0;
}