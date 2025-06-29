#include <bits/stdc++.h>
using namespace std;

// ------------------ Typedefs and Macros ----------------------
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

// ----------------------- I/O Optimizations ---------------------
#define FAST_IO              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define endl '\n'

// ------------------------ Common Utilities --------------------
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define clamp(x, low, high) max(low, min(x, high))
#define umap unordered_map<int, int>
#define uset unordered_set<int>
#define umapll unordered_map<ll, ll>
#define usetll unordered_set<ll>


// ------------------------ Loop Macros --------------------------
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

// ---------------------- Bitwise Operations ---------------------
#define set_bit(x, b) (x |= (1LL << b))
#define clear_bit(x, b) (x &= ~(1LL << b))
#define toggle_bit(x, b) (x ^= (1LL << b))
#define check_bit(x, b) ((x >> b) & 1)

// ------------------------- Constants ---------------------------
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);

// ------------------------- Solution Code ------------------------
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    // If x != 1, we can always use 1's to make n
    if (x != 1) {
        cout << "YES\n";
        cout << n << '\n';
        for (int i = 0; i < n; ++i) cout << 1 << " ";
        cout << '\n';
        return;
    }

    // x == 1, so we can't use 1
    // We need to use numbers from 2 to k
    if (k == 1) {
        // No numbers available
        cout << "NO\n";
        return;
    }

    // Try to use as many 2's as possible
    if (n % 2 == 0) {
        cout << "YES\n";
        cout << n / 2 << '\n';
        for (int i = 0; i < n / 2; ++i) cout << 2 << " ";
        cout << '\n';
        return;
    } else {
        // n is odd
        if (k >= 3) {
            // Use one 3, rest 2's
            cout << "YES\n";
            cout << (n - 3) / 2 + 1 << '\n';
            cout << 3 << " ";
            for (int i = 0; i < (n - 3) / 2; ++i) cout << 2 << " ";
            cout << '\n';
            return;
        } else {
            // Only 2's available, can't make odd n
            cout << "NO\n";
            return;
        }
    }
}

int main()
{
    FAST_IO;

    // Uncomment for multiple test cases
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// ------------------------ End of Code ------------------------
// time complexity: O(n)
// space complexity: O(1)
// problem name: "Forbidden Integer"
// problem link: https://codeforces.com/problemset/problem/1845/A

// ------------------------shubham-kumr--------------------------