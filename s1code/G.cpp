#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m, s, ans = 0;
    string t;
    cin >> h >> m >> s >> t;
    ans = h * 3600 + m * 60 + s;
    if (t == "PM")
        ans += 12 * 3600;
    cout << ans;
}