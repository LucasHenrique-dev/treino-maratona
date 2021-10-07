#include<bits/stdc++.h>

using namespace std;

int fun_f91(int n) {
    if (n >= 101) return n - 10;

    return fun_f91(fun_f91(n + 11));
}

int f91() {

    int n;

    while (true){

        cin >> n;
        if (n == 0) break;

        cout << "f91("<< n << ") = " << fun_f91(n) << endl;
    }

    return 0;
}