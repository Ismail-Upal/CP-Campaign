#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int main()
{
    optimize();
 
    tc{
        int n, a, b; cin >> n >> a >> b;
        string s ;cin>>s;
        int x=0, y=0;
        int t=100;
        bool flag = false;
        while(t--){
            for(int i=0; i<n; i++){
                if(s[i]=='N') y++;
                else if(s[i]=='S')y--;
                else if(s[i]=='E')x++;
                else x--;

                if(x==a and y==b){
                    flag = true;
                    break;
                }
            }
            if(x==a and y==b){
                    flag = true;
                    break;
                }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}