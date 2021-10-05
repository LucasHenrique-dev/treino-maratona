#include <iostream>
#include <map>

using namespace std;

int botas() {

    int botas, tam, pares = 0;
    char pe;

    while (cin >> botas) {

        map<int, int> pes;
        map<int, int> :: iterator indice;

        for (int i = 0; i < botas; ++i) {

            cin >> tam, cin >> pe;

            indice = pes.find(tam);
            if (indice != pes.end()) {
                if (pe == 'D') {
                    if (pes[tam] < 0) pares++;
                    pes[tam]++;
                } else {
                    if (pes[tam] > 0) pares++;
                    pes[tam]--;
                }
            } else {
                if (pe == 'D') pes[tam] = 1;
                else pes[tam] = -1;
            }
        }

        cout << pares << endl;
        pares = 0;
    }

    return 0;
}