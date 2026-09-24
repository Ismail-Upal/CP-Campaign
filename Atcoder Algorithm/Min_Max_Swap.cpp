#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

const int N = 2e5 + 5;
int a[N];

struct ST{
    int mx[4 * N], mn[4 * N];

    void build(int n, int b, int e){
        if(b == e){
            mx[n] = b;
            mn[n] = b;
            return;
        }
        
        int l = n << 1, r = 1 | l, mid = (b + e) >> 1;

        build(l, b, mid);
        build(r, mid + 1, e);
        
        if(a[mx[l]] > a[mx[r]]) mx[n] = mx[l];
        else mx[n] = mx[r];

        if(a[mn[l]] < a[mn[r]]) mn[n] = mn[l];
        else mn[n] = mn[r];
    }

    void upd(int n, int b, int e, int i){
        if(b == e){
            mx[n] = b;
            mn[n] = b;
            return;
        }

        int l = n << 1, r = l | 1, mid = (b + e) >> 1;

        if(i <= mid) upd(l, b, mid, i);
        else upd(r, mid + 1, e, i);

        if(a[mx[l]] > a[mx[r]]) mx[n] = mx[l];
        else mx[n] = mx[r];

        if(a[mn[l]] < a[mn[r]]) mn[n] = mn[l];
        else mn[n] = mn[r];
    }

    int mxquery(int n, int b, int e, int i, int j){
        if(j < b or e < i) return -1;
        if(i <= b and e <= j) return mx[n];

        int l = n << 1, r = 1 | l, mid = (b + e) >> 1;

        int L = mxquery(l, b, mid, i, j);
        int R = mxquery(r, mid + 1, e, i, j);

        
        if(L == -1) return R; 
        if(R == -1) return L;    
        return (a[L] > a[R]) ? L : R;
    }

    int mnquery(int n, int b, int e, int i, int j){
        if(j < b or e < i) return -1;
        if(i <= b and e <= j) return mn[n];

        int l = n << 1, r = 1 | l, mid = (b + e) >> 1;

        int L = mnquery(l, b, mid, i, j);
        int R = mnquery(r, mid + 1, e, i, j);

        if(L == -1) return R;      
        if(R == -1) return L;     
        return (a[L] < a[R]) ? L : R;
    }
};

void Solve(){
    int n, m; cin >> n >> m;
 
    for(int i = 1; i <= n; i++) cin >> a[i];


    ST t;
    t.build(1, 1, n);

    while(m--){
        int l, r; cin >> l >> r;
        
        int mxId = t.mxquery(1, 1, n, l, r);
        int mnId = t.mnquery(1, 1, n, l, r);

        swap(a[mxId], a[mnId]);
        t.upd(1, 1, n, mxId);
        t.upd(1, 1, n, mnId);
    }

    for(int i = 1; i <= n; i++) cout << a[i] << " ";
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
} 













