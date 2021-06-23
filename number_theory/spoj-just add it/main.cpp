#include <bits/stdc++.h>

#define ll long long int
using namespace std;

ll ppow(ll a, ll b, ll m) {
    a = a % m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)//b is odd
            res = res * a % m;
        a = a * a % m;
        b >>= 1;//b divided by 2
    }
    return res;
}

int main() {
    ll n, k;
    while (cin >> n >> k) {
        ll sum = 0;
        if (n == 0 && k == 0)
            break;
        sum = ((2 * (ppow(n - 1, k, 10000007))) % 10000007 + (2 * (ppow(n - 1, n - 1, 10000007))) % 10000007 +
               ppow(n, k, 10000007) + ppow(n, n, 10000007)) % 10000007;
        cout << sum << endl;
    }
    return 0;
}