//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
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
    string t,p;
    cin>>t>>p;
    int n=t.size(), m=p.size();
    vector<int>v(n);
    for(int &i:v)cin>>i;
    auto ok=[&](int mid){
        vector<bool>bad(n+1);
        for(int i=0;i<mid;i++){
            bad[v[i]]=1;
        }
        int j=0;
        bool found=false;
        for(int i=0;i<n;i++){
            if(t[i]==p[j] && !bad[i+1]){
                j++;
            }
            if(j==m){
                found =true; break;
            }
        }
        return found;
    };
    int l=0, r=n, mid, ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}