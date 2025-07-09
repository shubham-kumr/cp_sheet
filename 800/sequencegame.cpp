#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x) x.begin(), x.end()

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int &x : b) cin >> x;
    vector<int> a;
    a.push_back(b[0]);
    for (int i = 1; i < n; ++i) {
        if (b[i] < b[i-1]) a.push_back(b[i]);
        a.push_back(b[i]);
    }
    cout << a.size() << '\n';
    for (int x : a) cout << x << ' ';
    cout << '\n';
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
