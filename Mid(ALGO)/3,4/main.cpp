#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll a, b;
    while (cin >> a >> b) {
        if (__gcd(a, b) == 1)
            printf("%10lld%10lld    Good Choice\n", a, b);
        else
            printf("%10lld%10lld    Bad Choice\n", a, b);
        //puts("");
        cout << endl;
    }
    return 0;
}