#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <iterator>
 

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pll = pair<long long, long long>;
using pii = pair<int, int>;

#define sp(n) fixed << setprecision(n)
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define pf push_front
#define _ << " " <<

int mod = 1e9 + 7;
int inf = 2 * 1e9; int minf = -2 * 1e9;

template <typename T> T min(T a, T b, T c) { return std::min(std::min(a,b), c); };
template <typename T> T max(T a, T b, T c) { return std::max(std::max(a,b), c); };
template <typename T> void srt2(T &a, T &b) { if (a>b) swap(a,b);};
template <typename T> void srt3(T &a, T &b, T &c) { if (a>b) swap(a,b);if (b>c) swap(b,c);if (a>b) swap(a,b); };
template <typename T> void rsrt2(T &a, T &b) { if (a<b) swap(a,b); };
template <typename T> void rsrt3(T &a, T &b, T &c) { if (a<b) swap(a,b);if (b<c) swap(b,c);if (a<b) swap(a,b); };
template <typename T>void read(vector<T> &a) { for (int i = 0; i < (int)a.size(); i++) cin >> a[i]; }
template <typename T> void print(vector<T> &a) { for (int i = 0; i < (int)a.size(); i++) cout << a[i] << " \n"[i == (int)a.size()-1]; }
template <typename T> T gcd(T a, T b) { return b ? gcd(b, a%b) : a; }
template <typename T> ll lcm(T a, T b) { return a / gcd(a,b) * 1ll * b; }
string ans_true = "YES", ans_false = "NO";
void bans(bool ok, bool rev = 0) { cout << ((ok^rev) ? ans_true : ans_false) << endl; };


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> x(n), cnt(n);
    read(x); read(cnt);
    
    vector<ll> pref(n + 1);
    for (int i = 0; i < n; i++) pref[i+1] = pref[i] + cnt[i];
    
    int q;
    cin >> q;
    
    while (q--) {
        int L, R;
        cin >> L >> R;
        
        int ind_l, ind_r;
        {
            int l = -1, r = n;
            while (l + 1 < r) {
                int m = (l + r) / 2;
                if (x[m] >= L) r = m;
                else l = m;
            }
            ind_l = r;
        }
        {
            int l = -1, r = n;
            while (l + 1 < r) {
                int m = (l + r) / 2;
                if (x[m] <= R) l = m;
                else r = m;
            }
            ind_r = l;
        }
        
        if (ind_l > ind_r) cout << 0 << endl;
        else cout << pref[ind_r + 1] - pref[ind_l] << endl;
    }
}

