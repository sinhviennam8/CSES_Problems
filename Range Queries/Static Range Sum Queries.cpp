#include <bits/stdc++.h>
using namespace std;

void __print (int x) {cerr << x;}
void __print (long long x) {cerr << x;}
void __print (double x) {cerr << x;}
void __print (char x) {cerr << '\'' << x << '\'';}
void __print (const char *x) {cerr << '\"' << x << '\"';}
void __print (const string &x) {cerr << '\"' << x << '\"';}
void __print (bool x) {cerr << (x ? "true" : "false");}
template <typename T, typename V> void __print(const pair<T, V> &x)
{cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template <typename T> void __print(const T &x)
{int f = 0; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i);}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v)
{__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "Line " << __LINE__ << ": " << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define ll long long
#define sz(x) (int) (x).size()
#define all(x) (x).begin(), (x).end()
#define FOR(i, a, b) for (auto i = (a); i <= (b); ++i)
#define REFOR(i, a, b) for (auto i = (a); i >= (b); --i)
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
#define fastsync() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define pii pair <int, int>
#define vll vector <ll>
#define vi vector <int>
#define endl '\n'
#define pb push_back
#define fi first
#define se second
#define pob pop_back

const int MOD = 1e9 + 7;
const int MAX = 1e6 + 7;

void run_case() {
    int n, q;
    cin >> n >> q;

    vll v(n + 1, 0), pref(n + 1, 0);
    ll s = 0;

    FOR(i, 1, n) {
        cin >> v[i];

        s += v[i];
        pref[i] = s;
    }

    FOR(i, 1, q) {
        int l, r;
        cin >> l >> r;

        cout << pref[r] - pref[l - 1] << endl;
    }
}

int main() {
    fastsync();

    int test = 1;
    while (test -- > 0) {
        run_case();
    }

    cerr << "Time elapsed: " << fixed << setprecision(3) << TIME << "s.";
    return 0;
}