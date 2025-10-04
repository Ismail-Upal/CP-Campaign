//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
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
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(int &i:v)cin>>i;
    while(k--){
        int x; cin>>x;
        int l=0,r=n-1,ans=n,mid;
        // while(l<=r){
        //     mid=(l+r)/2;
        //     if(x<=v[mid]){
        //         ans=mid;
        //         r=mid-1;
        //     }
        //     else l=mid+1;
        // }
        ans=lower_bound(v.begin(), v.end(), x)-v.begin();
        cout<<ans+1<<endl;
    }
    return 0;
}