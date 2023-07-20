#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, sum=0;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        sum += 3 * n;
    }
    cout << sum;
}