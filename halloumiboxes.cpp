#include <bits/stdc++.h>
using namespace std;

// ------------------ Typedefs and Macros ----------------------
// typedef long long ll;
// typedef unsigned long long ull;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef vector<pii> vii;
// typedef vector<pll> vll;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;

// ----------------------- I/O Optimizations ---------------------
// #define FAST_IO              \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);              \
//     cout.tie(0)
// #define endl '\n'

// ------------------------ Common Utilities --------------------
// #define pb push_back
// #define eb emplace_back
// #define mp make_pair
// #define fi first
// #define se second
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define sz(x) (int)x.size()
// #define max(a, b) ((a) > (b) ? (a) : (b))
// #define min(a, b) ((a) < (b) ? (a) : (b))
// #define clamp(x, low, high) max(low, min(x, high))

// ------------------------ Loop Macros --------------------------
// #define FOR(i, a, b) for (int i = (a); i < (b); ++i)
// #define F0R(i, a) FOR(i, 0, a)
// #define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
// #define R0F(i, a) ROF(i, 0, a)
// #define rep(a) F0R(_, a)
// #define each(a, x) for (auto &a : x)

// ---------------------- Bitwise Operations ---------------------
// #define set_bit(x, b) (x |= (1LL << b))
// #define clear_bit(x, b) (x &= ~(1LL << b))
// #define toggle_bit(x, b) (x ^= (1LL << b))
// #define check_bit(x, b) ((x >> b) & 1)

// ------------------------- Constants ---------------------------
// const int MOD = 1e9 + 7;
// const int INF = 0x3f3f3f3f;
// const ll LINF = 0x3f3f3f3f3f3f3f3f;
// const double EPS = 1e-9;
// const double PI = acos(-1);

// ------------------------- Solution Code ------------------------
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
// Time complexity: O(n log n)
// Space complexity: O(n)


//-------------------------- Questions --------------------------
// Theofanis is busy after his last contest, as now, he has to deliver many halloumis all over the world. He stored them inside n boxes and each of which has some number ai written on it.
// He wants to sort them in non-decreasing order based on their number, however, his machine works in a strange way. It can only reverse any subarray†
// of boxes with length at most k.
// Find if it's possible to sort the boxes using any number of reverses.
// Reversing a subarray means choosing two indices i and j (where 1≤i≤j≤n) and changing the array a1,a2,…,an to a1,a2,…,ai−1,aj,aj−1,…,ai,aj+1,…,an−1,an. The length of the subarray is then j−i+1.