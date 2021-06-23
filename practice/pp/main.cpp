#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll t, i, j, n;
    cin >> t;
    for (i = 0; i < t; i++) {
        ll l, r, lb;
        cin >> l >> r;
        ll la = l % 10;
        if (l < 10 && r < 10) {
            cout << r - l << endl;
            continue;
        } else {
            if (l % 10 == 0) {
                ll kk = ((r / 10) - (l / 10));
                sum = (kk * 2) + (r - l - kk);
            }
        }
        cout << sum << endl;
    }
    return 0;
}