#include <bits/stdc++.h>

using namespace std;

long long fk_armazenado[1009];
bool fk_calculado[1009];

long long calcular_fk(int n, int a[], int f[], int k, int m) {
    if (fk_calculado[k]) return fk_armazenado[k];

    fk_calculado[k] = true;

    if (k <= n) {
        fk_armazenado[k] = f[k];
    } else {
        fk_armazenado[k] = 0;
        for (int i = 1; i <= n; ++i) {
            fk_armazenado[k] += (a[i] * calcular_fk(n, a, f, k-i, m)) % m;
        }
    }

    return fk_armazenado[k] % m;
}

int febre_recursao() {

    int n, k, m;
    long long fk;
    int a[1009], f[1009];
    
    cin >> n >> k >> m;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) {
        cin >> f[i];
    }

    fk = calcular_fk(n, a, f, k, m);

    cout << fk;

    return 0;
}
