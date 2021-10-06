#include <iostream>
#include <algorithm>

using namespace std;

int heist() {

    int n, falta = 0;
    int keyboards[1009];

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> keyboards[i];
    }

    sort(&keyboards[0], &keyboards[n]);

    for (int i = 1; i < n; ++i) {
        if (keyboards[i] != keyboards[i-1]+1) {
            falta += keyboards[i] - keyboards[i-1] - 1;
        }
    }

    cout << falta;

    return 0;
}