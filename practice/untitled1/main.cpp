#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll t, i, j;
    cin >> t;
    for (i = 0; i < t; i++) {
        ll n, m;
        cin >> n >> m;
        ll k = max(n, m);
        cout << k * k << endl;
    }
}