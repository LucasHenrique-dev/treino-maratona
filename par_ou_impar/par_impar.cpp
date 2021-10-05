#include <iostream>

using namespace std;

int par_impar() {

    for (int i = 1;; i++) {

        int partidas;
        char p1[11], p2[11];

        cin >> partidas;

        if (partidas == 0) break;

        cin >> p1, cin >> p2;

        cout << "Teste " << i << endl;
        for (int j = 0; j < partidas; ++j) {
            int jogada1, jogada2;

            cin >> jogada1;
            cin >> jogada2;

            if ((jogada1+jogada2) % 2 == 0)
                cout << p1 << endl;
            else
                cout << p2 << endl;

        }

        cout << endl;
    }

    return 0;
}