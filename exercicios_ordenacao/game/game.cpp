#include <iostream>
#include <algorithm>

using namespace std;

int game() {

    int n;
    int nums[1009];

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    sort(&nums[0], &nums[n]);
    reverse(&nums[0], &nums[n]);

    cout << nums[n/2];

    return 0;
}