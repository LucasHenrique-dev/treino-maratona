#include <bits/stdc++.h>

using namespace std;

int fun_adding_digits(int n) {
    if (n <= 9) return n;
    return fun_adding_digits(n / 10 + n % 10);
}

int adding_digits() {

    int n;

    cin >> n;

    cout << fun_adding_digits(n) << endl;

    return 0;
}