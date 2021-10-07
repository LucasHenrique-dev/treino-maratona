#include <bits/stdc++.h>

using namespace std;

int fun_3n_1(int n) {
    if (n <= 1) return 0;
    if (n % 2 == 0) n /= 2;
    else n = 3*n + 1;
    return fun_3n_1(n)+1;
}

int p3n_1() {

    int n;

    cin >> n;

    cout << fun_3n_1(n);
}