//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n, q; cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(), v.end());
    while(q--){
        int x; cin>>x;
        auto it=find(v.begin(), v.end(), x);
        if(it==v.end())cout<<x<<"not found"<<endl;
        else cout<<*it<<" found at "<<it-v.begin()+1<<endl;
    }
    return 0;
}