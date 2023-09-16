#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
void snt(ll n) {
    ll power = 0, k = 0, u;
    for (int i = 2; i <= sqrt(n); i++) {
        power = 0;
        if (n % i == 0) {

            while (n % i == 0) {
                ++power;
                n /= i;
            }
            if (k < power) {
                k = power;
                u = i;
            }
        }
    }if (k == 0) {
        u = n;
        k = 1;
    }
    cout << u << " " << k;
}

int main() {
    ll n;
    cin >> n;
    snt(n);
    return 0;
}
