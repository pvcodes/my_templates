#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif

#include <bits/stdc++.h>
#define sz(a) ((int)((a).size()))
#define char unsigned char

using namespace std;
// mt19937 rnd(239);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

typedef long long ll;
typedef long double ld;
typedef unsigned long long int ull;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

// Constants
#define mx9 1000000007
#define mx7 10000007
#define mx6 1000006
#define mx5 200005
#define inf 1 << 30
#define eps 1e-9
#define mod 1000000007
#define PI 3.141592653589793238462643383279502884L

// For Debugging
#define deb(x) cout << #x << ": " << x << endl;
#define deb2(x, y) cout << #x << ": " << x << " ~ " << #y << ": " << y << endl;
#define deba(arr)                      \
    cout << #arr << " ~ [ ";             \
    for (auto n : arr) cout << n << " "; \
    cout << "]" << endl;
#define debap(arr)                                      \
    cout << #arr << " ~ [ ";                                      \
    for (auto n : arr) cout << n.first << "-" << n.second << " "; \
    cout << "]" << endl;

void solve() {
    // Your Code
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int TET = 1e9;
    cin >> TET; //If problem has no testcase input comment out this line
    for (int i = 1; i <= TET; i++) {
        #ifdef ONPC
            static int tc_cnt = 1;
            cout << "______________ TC:" << tc_cnt++ << " ______________" << endl;
        #endif
        solve();
    }
    #ifdef ONPC
        cerr << endl << "finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
    #endif
}