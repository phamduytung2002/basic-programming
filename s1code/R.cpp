#include <bits/stdc++.h>
using namespace std;

int main() {
    double t1, t2, t3, r1, r2, r3;
    cin >> t1 >> t2 >> t3 >> r1 >> r2 >> r3;
    double l1 = log(r1), l2 = log(r2), l3 = log(r3);
    double y1 = 1 / t1, y2 = 1 / t2, y3 = 1 / t3;
    double gamma2 = (y2 - y1) / (l2 - l1), gamma3 = (y3 - y1) / (l3 - l1);
    double c = (gamma3 - gamma2) / (l3 - l2) / (l1 + l2 + l3);
    double b = gamma2 - c * (l1 * l1 + l1 * l2 + l2 * l2);
    double a = y1 - l1 * (b + l1 * l1 * c);
    cout << fixed << setprecision(13) << a;
}