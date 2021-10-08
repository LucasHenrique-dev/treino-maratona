#include <bits/stdc++.h>

using namespace std;

//int arr[100009]; 2° METODO


int fun_closest_number(int arr[], int n, int target) {
    if (n <= 1) return arr[0];
    if (n <= 2) {
        int dif_1 = abs(target-arr[0]), dif_2 = abs(target-arr[1]);
        if (dif_1 == dif_2) return max(arr[0], arr[1]);
        else if (dif_1 < dif_2) return arr[0];
        return arr[1];
    }

    int meio = n/2;

    sort(&arr[0], &arr[n]);

    cout << "Target: " << target << " num: " << arr[meio] << endl;

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (arr[meio] > target) {
        fun_closest_number(arr, meio + 1, target);
    } else if (arr[meio] < target) {
        reverse(&arr[0], &arr[n]);
        fun_closest_number(arr, meio + 1, target);
    } else return arr[meio];
}

// 2° METODO
//int result(int indice, int target) {
//    if (indice >= 1) {
//        if (abs(arr[indice - 1] - target) < abs(arr[indice] - target)) return arr[indice - 1];
//        else return arr[indice];
//    }
//    if (abs(arr[indice] - target) < abs(arr[indice + 1] - target)) {
//        return arr[indice];
//    } else return arr[indice + 1];
//}
//
//int find(int inicio, int fim, int alvo) {
//    if (inicio < 0) return 0;
//    if(inicio == fim) return inicio;
//    int indice = (inicio+fim)/2;
//
//    if (arr[indice] > alvo) {
//        find(inicio, indice, alvo);
//    } else if (arr[indice] < alvo) {
//        find(indice+1, fim, alvo);
//    } else return indice;
//}

int closest_number() {

    int n, target;
    int arr[100009];

    cin >> n >> target;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << fun_closest_number(arr, n, target);

//    2° METODO
//    if (n == 1) cout << arr[0];
//    else cout << result(find(0, n, target), target) << endl;

    return 0;
}
