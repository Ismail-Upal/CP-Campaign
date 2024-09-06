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
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans(0);
    for(int i=0;i<n-1;i++){
        if(abs(v[i]-v[i+1])==1){
            ans.push_back(v[i]);
            
        }
        else if(v[i]<v[i+1]){
            ans.push_back(v[i]);
            int x=v[i+1]-v[i]-1;
            int y=v[i];
            while(x--){
                y++;
                ans.push_back(y);

            }
        }
        else if(v[i]>v[i+1]){
            ans.push_back(v[i]);
            int x=v[i]-v[i+1]-1;
            int y=v[i];
            while(x--){
                y--;
                ans.push_back(y);
               
            }
        }
    }
    ans.push_back(v[n-1]);
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}