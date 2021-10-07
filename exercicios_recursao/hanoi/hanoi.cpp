#include <bits/stdc++.h>

using namespace std;

int hanoi() {

    int n, i = 1;

    while (true) {

        cin >> n;

        if (n == 0) break;

        long long int result = pow(2, n) - 1;

        cout << "Teste " << i++ << endl << result << endl;
    }

    return 0;
}