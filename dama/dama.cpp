#include <iostream>

using namespace std;

int dama() {

    int x1=0, y1=0, x2=0, y2=0;
    int movimentos = 0;
    int dif_x, dif_y;

    do {
        cin >> x1, cin >> y1, cin >> x2, cin >> y2;

        if (x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0) break;

        while (true) {
            dif_x = abs(x2 - x1), dif_y = abs(y2 - y1);

            if (dif_x == 0 && dif_y == 0) break;
            if (dif_x == dif_y) {
                if (x1 > x2) x1 -= dif_x;
                else x1 += dif_x;
                if (y1 > y2) y1 -= dif_y;
                else y1 += dif_y;
            } else if (dif_x != 0) {
                if (x1 > x2) x1 -= dif_x;
                else x1 += dif_x;
            } else {
                if (y1 > y2) y1 -= dif_y;
                else y1 += dif_y;
            }
            movimentos++;
        }

        cout << movimentos << endl;
        movimentos = 0;

    } while (true);

    return 0;
}