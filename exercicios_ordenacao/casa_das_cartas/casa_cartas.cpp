#include <iostream>
#include <algorithm>

using namespace std;

int deputados;

bool calcular_propina(int i, int j) {

    if (i % deputados > j % deputados) return true;
    return (i % deputados == j % deputados) && (i > j);

}

int casa_cartas() {

    int n;
    int propostas[100009];

//    int divisao, resto;

    cin >> n >> deputados;

    for (int i = 0; i < n; i++) {
        cin >> propostas[i];
    }

//    for (int i = 0; i < n; ++i) {
//
//        divisao = propostas[i] / deputados;
//        resto = propostas[i] % deputados;
//
//        cout << propostas[i] << ": " << divisao << " " << resto << endl;
//    }

    sort(&propostas[0], &propostas[n], calcular_propina);

    for (int i = 0; i < n; i++) {
        cout << propostas[i] << " ";
    }

    return 0;
}