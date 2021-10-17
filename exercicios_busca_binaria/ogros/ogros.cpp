#include <bits/stdc++.h>

using namespace std;

int faixas[10009];

int classificar(int indice, int max, int alvo) {
    if (indice == max && alvo >= faixas[indice]) return indice + 1;
    else if (indice == 0 && alvo < faixas[indice]) return 0;
    else {
        if (alvo > faixas[indice-1] && alvo < faixas[indice]) return indice;
        else if (alvo >= faixas[indice]) return indice + 1;
        else return indice - 1;
    }
}

int busca_ogra(int inicio, int fim, int alvo) {

    while (true) {
        if (inicio == fim) return inicio;

        int meio = (inicio + fim) / 2;

        if (faixas[meio] > alvo) {
            fim = meio;
        } else if (faixas[meio] < alvo) {
            inicio = meio + 1;
        } else return meio;
    }

}

int ogros() {

    int n, m;
    int pontuacoes[10009], forcas[10009];

    cin >> n >> m;

    for (int i = 0; i < n-1; ++i) {
        cin >> faixas[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> pontuacoes[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> forcas[i];
    }

    for (int i = 0; i < m; ++i) {
        int indice = busca_ogra(0, n-2, forcas[i]);
        int indice_classificado = classificar(indice, n-2, forcas[i]);
        cout << pontuacoes[indice_classificado] << " ";
    }

    return 0;
}