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

int main() {
    ll n;
    cin >> n;
    if (isPrime(n))
        cout << n << " is prime" << endl;
    else
        cout << n << " not prime" << endl;
    return 0;
}
