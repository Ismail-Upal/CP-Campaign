#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
void opr1(deque<int>&a, deque<int>&r){
    if(a.size()){
        a.push_front(a.back());
        a.pop_back();
    }
}
void opr2(deque<int>&a, deque<int>&r){
    a.push_front(r.back());
    r.pop_back();
}
int32_t main()
{	opt();
 
    tc{
        int n; cin >> n;
        deque<int> r(n), a;
        for(int i=0; i<n; i++)r[i]=i+1;

        while(a.size() < n){
            opr1(a, r);
            opr2(a, r);
        }
        for(auto i: a)cout<<i<<' ';
        cout<<endl;
    }
 
    return 0;
}