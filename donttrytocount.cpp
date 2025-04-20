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
    auto check = [](string s, string x) -> bool {
        if (x.size() < s.size())
        {
            return false;
        }
        for (int i = 0; i < x.size() - s.size() + 1; i++)
        {
            if (x.substr(i, s.size()) == s)
            {
                return true;
            }
        }
        return false;
    };

    long long n, m;
    cin >> n >> m;
    string x;
    cin >> x;
    string s;
    cin >> s;

    string x0 = x; //  0 operations
    string x1 = x0 + x0; // 1 operation
    string x2 = x1 + x1; // 2 operations
    string x3 = x2 + x2; // 3 operations
    string x4 = x3 + x3; // 4 operations
    string x5 = x4 + x4; // 5 operations

    long long ans = -1;
    if (check(s, x0))
        ans = 0;
    else if (check(s, x1))
        ans = 1;
    else if (check(s, x2))
        ans = 2;
    else if (check(s, x3))
        ans = 3;
    else if (check(s, x4))
        ans = 4;
    else if (check(s, x5))
        ans = 5;
    cout << ans << endl;
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
// time complexity: O(n*m)
// space complexity: O(n)
// problem name: "Don't Try to Count"
// problem link: https://codeforces.com/problemset/problem/1881/A

// ------------------------shubham-kumr--------------------------