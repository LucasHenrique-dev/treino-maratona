#include <bits/stdc++.h>

using namespace std;

const int MAX_VALOR = 100000;
int mem_vals[50009];

int achar_moedas(int valor, int moedas[], int n) {
    if (mem_vals[valor] != -1) return mem_vals[valor];

    mem_vals[valor] = MAX_VALOR;

    for (int i = 0; i < n; ++i) {
        if (valor <= 0) break;
        if (valor >= moedas[i])
            mem_vals[valor] = min(mem_vals[valor], 1 + achar_moedas(valor - moedas[i], moedas, n));
    }

    return mem_vals[valor];
}

int moedas() {

    int m, n, valor;
    int moedas[109];

    while (true) {

        cin >> m;

        if (m == 0) break;

        memset(mem_vals, -1, sizeof(mem_vals));
        mem_vals[0] = 0;

        cin >> n;

        for (int i = 0; i < n; ++i) {
            cin >> moedas[i];
        }

        valor = achar_moedas(m, moedas, n);

        if (valor != MAX_VALOR) cout << valor << "\n";
        else cout << "Impossivel" << "\n";
    }

    return 0;
}