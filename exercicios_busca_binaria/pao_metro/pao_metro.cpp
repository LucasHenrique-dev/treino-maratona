#include <bits/stdc++.h>

using namespace std;

int n, tamanhos[10009];

bool inverter(int i, int j) {
    return i > j;
}

int verificar_divisao(int pedaco) {
    int divisoes = 0;
    for (int i = 0; i < n; ++i) {
        divisoes += tamanhos[i] / pedaco;
    }
    return divisoes;
}

int buscar_pedaco(int inicio, int fim, int result) {
    while (true) {
        int meio = (inicio + fim) / 2;

        int particoes = verificar_divisao(meio);

        if (particoes < n) fim = meio;
        else {
            result = meio;
            inicio = meio + 1;
        }

        if (inicio == fim) return result;
    }
}

int pao_metro() {

    int k, soma = 0, menor_pedaco, maior_pedaco;

    cin >> n >> k;

    for (int i = 0; i < k; ++i) {
        cin >> tamanhos[i];
        soma += tamanhos[i];
    }

    sort(&tamanhos[0], &tamanhos[k], inverter);

    maior_pedaco = soma / n;

    menor_pedaco = tamanhos[k-1];

    if (menor_pedaco > maior_pedaco) menor_pedaco = maior_pedaco - (menor_pedaco - maior_pedaco) / 2;

    cout << buscar_pedaco(menor_pedaco, maior_pedaco, menor_pedaco);

    return 0;
}