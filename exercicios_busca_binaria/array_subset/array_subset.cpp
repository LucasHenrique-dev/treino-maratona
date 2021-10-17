#include <bits/stdc++.h>

using namespace std;

bool find(const int arr[], int inicio, int fim, int alvo) {
    while (true) {
        if (inicio == fim) {
            if (arr[inicio] == alvo) return true;
            return false;
        }

        int meio = (inicio + fim) / 2;

        if (arr[meio] > alvo) {
            fim = meio;
        } else if (arr[meio] < alvo) {
            inicio = meio + 1;
        } else return true;
    }
}

string isSubset(int a1[], int a2[], int n, int m) {
    for (int i = 0; i < m; ++i) {
        if (!find(a1, 0, n, a2[i])) return "No";
    }

    return "Yes";
}

int array_subset() {

    int n, m;
    int a1[100009], a2[100009];

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        cin >> a1[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> a2[i];
    }

    sort(&a1[0], &a1[n]);
    sort(&a2[0], &a2[m]);

    cout << isSubset(a1, a2, n, m);

    return 0;
}
