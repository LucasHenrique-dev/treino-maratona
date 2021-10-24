#include <bits/stdc++.h>

using namespace std;

const int MAX_PEDACO = 100000;
int pedacos[4009];

int cortar(int tamanho, int a, int b, int c) {

    if (pedacos[tamanho] != -1) return pedacos[tamanho];

    pedacos[tamanho] = -MAX_PEDACO;
    if (tamanho >= c) pedacos[tamanho] = max(pedacos[tamanho], 1 + cortar(tamanho-c, a, b, c));
    if (tamanho >= b) pedacos[tamanho] = max(pedacos[tamanho], 1 + cortar(tamanho-b, a, b, c));
    if (tamanho >= a) pedacos[tamanho] = max(pedacos[tamanho], 1 + cortar(tamanho-a, a, b, c));

    return pedacos[tamanho];
}

int cut_ribbon() {

    int n, a ,b, c;

    cin >> n >> a >> b >> c;

    // Preenche todas as posicoes do vetor dp com -1
    memset(pedacos, -1, sizeof(pedacos));
    pedacos[0] = 0;

    cout << cortar(n, a, b, c);

    return 0;
}