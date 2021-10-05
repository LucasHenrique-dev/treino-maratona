#include <iostream>

using namespace std;

int overflow() {

    int limite, num1, num2;
    char op;

    cin >> limite;

    cin >> num1, cin >> op, cin >> num2;

    switch (op) {
        case '+':
            if (num1+num2 > limite) cout << "OVERFLOW";
            else cout << "OK";
            break;
        case '*':
            if (num1*num2 > limite) cout << "OVERFLOW";
            else cout << "OK";
            break;
        default:
            cout << "OVERFLOW";
    }

    return 0;
}
