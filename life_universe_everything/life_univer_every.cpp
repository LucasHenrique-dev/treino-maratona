#include <iostream>

using namespace std;

int life_univer_every() {

    int num = 0;

    while(num != 42) {
        cin >> num;
        if(num == 42) break;

        cout << num << endl;
    }

    return 0;
}