#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3;
int a[N];
int t[4 * N], sum[4 * N];
struct ST{
    
    static const int inf = 1e9;
    ST(){
        memset(t, 0, sizeof t);
        memset(sum, 0, sizeof sum);
    }

    void build(int n, int b, int e){
        if(b == e){
            t[n] = a[b];
            sum[n] = a[b];
            return;
        }

        int l = n << 1, r = l | 1, mid = (b + e) >> 1;

        build(l, b, mid);
        build(r, mid + 1, e);

        t[n] = (t[l] & t[r]); // change this
        sum[n] = (t[l] + t[r]);
    }


    int query(int n, int b, int e, int i, int j){
        if(j < b or e < i) return -inf; // return appropriate value
        if(i <= b and e <= j) return sum[n];

        int l = n << 1, r = l | 1, mid = (b + e) >> 1;

        return max(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); // change this
    }
}te;


int main()
{   
    int n, q; cin >> n >> q;

    for(int i = 1; i <= n; i++) cin >> a[i];

    te.build(1, 1, n); // building segment tree , O(n)
    // while(q--){
    //     int l, r; cin >> l >> r;

    //     cout << te.query(1, 1, n, l, r) << endl; // range max query on segment [1, 5] , O(log n) 
    // }
    
    for(int i = 1; i <= n; i++) cout << t[i] << " " ;

    return 0;
}
