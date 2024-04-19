﻿#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " - Prime number" << endl;
    }
    else {
        cout << num << " - Not a prime number" << endl;
    }

    return 0;
}
