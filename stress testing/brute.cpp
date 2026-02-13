#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define mod1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; print(x); cerr << endl;
#else
#define debug(x)
#endif

void print(const ll t) {cerr << t;}
void print(const int t) {cerr << t;}
void print(const string& t) {cerr << t;}
void print(const char t) {cerr << t;}
void print(const lld t) {cerr << t;}
void print(const double t) {cerr << t;}
void print(const ull t) {cerr << t;}

template <class T, class V> void print(pair <T, V> p);
template <class T> void print(vector <T> v);
template <class T> void print(set <T> v);
template <class T, class V> void print(map <T, V> v);
template <class T> void print(multiset <T> v);
template <class T, class V> void print(pair <T, V> p) {cerr << "{"; print(p.ff); cerr << ","; print(p.ss); cerr << "}";}
template <class T> void print(vector <T> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}
template <class T> void print(set <T> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}
template <class T> void print(multiset <T> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void print(map <T, V> v) {cerr << "[ "; for (auto i : v) {print(i); cerr << " ";} cerr << "]";}

// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;

// global variables
bool morefound = false;
vector<long long> fact;
vector<long long> invFact;
// global variables

// useful functions
void fropen() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
long long power(long long base, long long exp, const long long m) {
    long long res = 1;
    base %= m;
    while (exp > 0) {
        if (exp & 1)
            res = (res * base) % m;
        base = (base * base) % m;
        exp >>= 1;
    }
    return res;
}
long long modularInverse(long long n, long long m) {
    return power(n, m - 2, m);
}
void precompute(int max_n, long long mod_val) {
    fact.resize(max_n + 1);
    invFact.resize(max_n + 1);
    fact[0] = 1;
    invFact[0] = 1;
    for (int i = 1; i <= max_n; i++) {
        fact[i] = (fact[i - 1] * i) % mod_val;
        invFact[i] = modularInverse(fact[i], mod_val);
    }
}
long long ncr(long long n, long long r) {
    if (r < 0 || r > n) return 0;
    long long num = fact[n];
    ll den = (invFact[r] * invFact[n - r]) % mod1;
    return (num * den) % mod;
}
long long rangeBitwiseAnd(long long m, long long n) {
    while (m < n) {
        n = n & (n - 1ll);
    }
    return n;
}
long long rangeBitwiseXor(long long n){
    long long val = n % 4;
    if (val == 0)
        return n;
    else if (val == 1)
        return 1;
    else if (val == 2)
        return n + 1;
    else if (val == 3)
        return 0;
    return 0;
}
long long rangeBitwiseXor(long long l, long long r){
    return (rangeBitwiseXor(l - 1) ^ rangeBitwiseXor(r));
}

ll query(ll l, ll r, vector<vector<ll>>& SPARSE_TABLE) {
    if (r < 0) return LLONG_MIN;
    ll len = r - l + 1;
    ll k = 0;
    while ((1 << (k + 1)) <= len) {
        k++;
    }
    return max(SPARSE_TABLE[l][k], SPARSE_TABLE[r - (1ll << k) + 1][k]);
}
// useful functions

// useful snippets
// ordered_set o_set;
// o_set.order_of_key(5)
// useful snippets

/*
**************************************************************************************************
**************************************************************************************************


                    ***        **************
                    ***        **************
                    ***  ***   ***   ***
                    ***  ***   ***   ***
                    ***        ***
                    *************************
                    *************************
                               ***        ***
                         ***   ***   ***  ***
                         ***   ***   ***  ***
                    **************        ***
                    **************        ***

**************************************************************************************************
**************************************************************************************************
*/

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    ll cnt = 0;
    ll mini = 1e18, maxi = -1e18;
    for (int i = 0; i < n; i++){
        if (p[i] - mini > k || maxi - p[i] > k) {
            cnt++;
            mini = 1e18;
            maxi = -1e18;
        } 
        else{
            mini = min(mini, p[i]);
            maxi = max(maxi, p[i]);
        }
    }
    cout << cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
     // #ifndef ONLINE_JUDGE
     // freopen("error.txt", "w", stderr);
     // #endif
    //fropen();
    // used to read i/p txt, o/p txt if mentioned use this
    // vector<vector<pair<int,int>>> factors(300001);
    // vector<int> spf(300001);
    // for (int i = 0; i <= 300000; i++) {
    //     spf[i] = i;
    // }
    // for (int p = 2; p * p <= 300000; p++) {
    //     if (spf[p] == p) {  // p is prime
    //         for (int m = p*p; m <= 300000; m += p) {
    //             if (spf[m] == m)
    //                 spf[m] = p;
    //         }
    //     }
    // }
    // for (int x = 2; x <= 300000; x++) {
    //     int t = x;
    //     while (t > 1) {
    //         int p = spf[t], cnt = 0;
    //         while (spf[t] == p) {
    //             t /= p;
    //             cnt++;
    //         }
    //         factors[x].emplace_back(p, cnt);
    //     }
    // }
    // vector<vector<int>> full(200001);
    // for (int d = 1; d <= 200000; d++) {
    //     for (int x = d; x <= 200000; x += d) {
    //         full[x].emplace_back(d);
    //     }
    // }
    // factors will have prime factors, their power as well
    // factors[30] --> {2,1},{3,1},{5,1}--> 2^1 * 3^1 * 5^1
    //precompute(300000, mod1);
    // this will make all the factorials of 1->300000, used in fact[], or used in computing ncr

    // take this section of code and paste in solve
    // vector SPARSE_TABLE(n, vector<ll>(20, -1));
    // for (ll i = 0; i < n; i++) {
    //     SPARSE_TABLE[i][0] = a[i];
    // }
    // for (ll k = 1; k < 20; k++) {
    //     for (ll i = 0; i + (1 << k) - 1 < n; i++) {
    //         SPARSE_TABLE[i][k] = max(SPARSE_TABLE[i][k - 1], SPARSE_TABLE[i + (1 << (k - 1))][k - 1]);
    //     }
    // }
 
        solve();
    
}
// author: shai_tan --------> 0.7.20.20.15.25.14.0.14.7
// tan(pi/2) = infinite
// created on 23-06-2025
///*    /\_/\
// *   (= ._.)
// *   / >  \>
// *  /     //