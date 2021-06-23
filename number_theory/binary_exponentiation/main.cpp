///calculate an using only O(logn) multiplications (instead of O(n) multiplications required by the naive approach).

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
    ll a, b, m;
    cin >> a >> b >> m;
    cout << ppow(a, b, m) << endl;
    return 0;
}
