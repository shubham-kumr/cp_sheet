#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;

    vector<long long> copy_arr(arr.begin(), arr.end());
    sort(copy_arr.begin(), copy_arr.end());

    if (copy_arr == vector<long long>(arr.begin(), arr.end()) || k > 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

// ------------------------ End of Code ------------------------
// time complexity: O(n log n)
// space complexity: O(n)
// problem name: "Halloumi Boxes"
// problem link: https://codeforces.com/problemset/problem/1903/A

// ------------------------shubham-kumr--------------------------
