#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int tc; cin >> tc; for (int _ = 1; _ <= tc; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 3;
int a[N];

struct ST{
    int t[4 * N];
    static const int inf = 1e9;
    ST(){memset(t, 0, sizeof t);}

    void build(int n, int b, int e){
        if(b == e){
            t[n] = a[b]; 
            return;
        }
        int l = n << 1, r = l | 1, mid = (b + e) >> 1;
        build(l, b, mid); build(r, mid + 1, e);
        t[n] = __gcd(t[l], t[r]);
    }

    int query(int n, int b, int e, int i, int j){
        if(j < b or e < i) return 0;
        if(i <= b and e <= j) return t[n];
        
        int l = n << 1, r = l | 1, mid = (b + e) >> 1;
        
        return __gcd(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
    }
}t;

bool is_prime(int n){
    if(n == 2) return true;
    if(n == 1 or n % 2 == 0) return false;
    
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        
        t.build(1, 1, n);

        auto ok = [&](int r){
            int i = 1, j = r;
            bool ans = 0;
            while(j <= n){
                int p = t.query(1, 1, n, i, j);
                // cout << i << " " << j << " : " << p << endl;
                if(is_prime(p)) ans = 1;
                i++, j++;
            }

            return ans;
        };
        
        int l = 0, r = n, m, ans = -1;
        while(l <= r){
            m = l + (r - l) / 2;
            if(ok(m)){
                ans = m;
                l = m + 1;
            }
            else r = m - 1;
        }

        cout << ans << endl;
        memset(a, 0, sizeof a);
    }
    
    return 0;
}