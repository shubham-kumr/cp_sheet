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
    int n;
    cin >> n;
    vi arr(n);
    each(x, arr) cin >> x;

    int total = accumulate(all(arr), 0);

    // If all elements are the same, it's impossible
    if (arr[0] == arr[n - 1]) {
        cout << "NO" << endl;
        return;
    }

    // Try descending order
    sort(rall(arr));
    int prefix = 0;
    bool ugly = false;
    F0R(i, n) {
        if (arr[i] == prefix) {
            ugly = true;
            break;
        }
        prefix += arr[i];
    }
    if (!ugly) {
        cout << "YES" << endl;
        each(x, arr) cout << x << " ";
        cout << endl;
        return;
    }

    // Try ascending order
    sort(all(arr));
    prefix = 0;
    ugly = false;
    F0R(i, n) {
        if (arr[i] == prefix) {
            ugly = true;
            break;
        }
        prefix += arr[i];
    }
    if (!ugly) {
        cout << "YES" << endl;
        each(x, arr) cout << x << " ";
        cout << endl;
        return;
    }

    // Otherwise, try to construct a beautiful array by moving the largest element to the front
    sort(all(arr));
    vi res;
    res.pb(arr[n-1]);
    F0R(i, n-1) res.pb(arr[i]);
    prefix = 0;
    ugly = false;
    F0R(i, n) {
        if (res[i] == prefix) {
            ugly = true;
            break;
        }
        prefix += res[i];
    }
    if (!ugly) {
        cout << "YES" << endl;
        each(x, res) cout << x << " ";
        cout << endl;
        return;
    }

    cout << "NO" << endl;
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
// problem name: "Make It Beautiful"
// problem link: https://codeforces.com/problemset/problem/1783/A

// ------------------------shubham-kumr--------------------------