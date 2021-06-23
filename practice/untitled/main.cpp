#include<bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll t, i, j, l;
    cin >> t;
    ll a, b, c, d, k;
    for (i = 0; i < t; i++) {
        cin >> a >> b >> c >> d >> k;
        l = abs(a - c) + abs(b - d);
        if (l == k)
            cout << "YES" << endl;
        else if (l > k)
            cout << "NO" << endl;
        else if ((k - l) % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}