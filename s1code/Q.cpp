#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double ans = b + sqrt(a * a - b * b);
    if (ans == int(ans))
        cout << fixed << setprecision(1) << ans;
    else
        cout << fixed << setprecision(15) << ans;
    // problem with precision, need to use python
}