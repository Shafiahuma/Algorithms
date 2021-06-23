///GCD and LCM

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ll a, b, t, i;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> a >> b;
        cout << gcd(a, b) <<" ";
        cout << lcm(a, b) << endl;
    }
    return 0;
}
