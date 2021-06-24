#include <bits/stdc++.h>

#define ll long long int
using namespace std;

bool isPrime(ll x) {
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

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
    ll n, nn;
    while (cin >> n) {
        if (isPrime(n)) {
            nn = rvrs(n);
            //cout << nn << endl;
            if (isPrime(nn) && nn != n)
                cout << n << " is emirp." << endl;
            else
                cout << n << " is prime." << endl;
        } else
            cout << n << " is not prime." << endl;
    }
    return 0;
}
