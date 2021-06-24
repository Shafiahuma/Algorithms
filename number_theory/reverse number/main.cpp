#include <bits/stdc++.h>

#define ll long long int
using namespace std;

ll rvrs(ll n) {
    ll nn = 0, rem, base = 10;
    while (n) {
        rem = n % 10;
        nn = (nn * base) + rem;
        n /= 10;
    }
    return nn;
}

int main() {
    ll a;
    cin >> a;
    cout << rvrs(a) << endl;
    return 0;
}
