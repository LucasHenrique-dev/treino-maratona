#include <bits/stdc++.h>

using namespace std;

int casas[100009];

int busca(int inicio, int fim, int alvo){
    while (true) {
        if (inicio == fim) {
            if (alvo == casas[inicio]) return inicio;
            return -1;
        }

        int meio = (inicio+fim)/2;

        if (casas[meio] > alvo) {
            fim = meio;
        } else if (casas[meio] < alvo) {
            inicio = meio+1;
        } else return meio;
    }
}

int soma_casas() {

    int n, soma, indice;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> casas[i];
    }

    cin >> soma;

    for (int i = 0; i < n; ++i) {
        indice = busca(0, n, soma-casas[i]);
        if (indice != -1) {
            cout << casas[i] << " " << casas[indice] << endl;
            break;
        }
    }

    return 0;
}