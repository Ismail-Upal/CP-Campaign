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
    tc{
        int n; cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            mp[x]++;
        }
 
        for(auto i: mp){
            v.push_back(i.second);
        }
        sort(v.rbegin(), v.rend());
        if(n>1 && v[0]!=v[1])cout<<"YES"<<endl;
        else if(n>1 && v[0]==v[1])cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

   return 0;
}