#include <bits/stdc++.h>
using namespace std;

int main() {
    // V_f^2 = V_i^2 + 2*ad
    // V_f = 0
    // -> V_i^2 + 2*ad = 0
    // -> d = V_i^2 / (2a)

    double vi;
    cin >> vi;
    cout << fixed << setprecision(16) << vi * vi / 2 / 9.8;
}