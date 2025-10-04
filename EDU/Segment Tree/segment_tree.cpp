#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3;
int a[N];

struct ST{
    int t[4 * N];
    static const int inf = 1e9;
    ST(){
        memset(t, 0, sizeof t);
    }

    void build(int n, int b, int e){
        if(b == e){
            t[n] = a[b];
            return;
        }

        int l = n << 1, r = l | 1, mid = (b + e) >> 1;

        build(l, b, mid);
        build(r, mid + 1, e);

        t[n] = max(t[l], t[r]); // change this
    }

    void upd(int n, int b, int e, int i, int x){
        if(i < b or e < i) return;
        if(b == e and b == i){
            t[n] = x; // update
            return;
        }

        int l = n << 1, r = l | 1, mid = (b + e) >> 1;

        upd(l, b, mid, i, x);
        upd(r, mid + 1, e, i, x);
        t[n] = max(t[l], t[r]); // change this
    }

    int query(int n, int b, int e, int i, int j){
        if(j < b or e < i) return -inf; // return appropriate value
        if(i <= b and e <= j) return t[n];

        int l = n << 1, r = l | 1, mid = (b + e) >> 1;

        return max(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); // change this
    }
}t;


int main()
{   
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];

    t.build(1, 1, n); // building segment tree , O(n)
    t.upd(1, 1, n, 2, 10); // assigning : a[2] = 10 , O(log n)
    cout << t.query(1, 1, n, 1, 5) << endl; // range max query on segment [1, 5] , O(log n) 

    return 0;
}