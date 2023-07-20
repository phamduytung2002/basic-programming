#include <bits/stdc++.h>
using namespace std;

int main() {
    int d;
    cin >> d;
    int ans = 0;
    for (int i = 0; i < d; ++i) {
        int a, b;
        cin >> a >> b;
        ans += (a - b) * (a - b);
    }
    cout << fixed << setprecision(16) << sqrt(ans);
    // need to set precision to 16 decimal places
}