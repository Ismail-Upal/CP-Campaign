#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	opt();
 
    tc{
        int n; cin>>n;
        char a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        char cur=a[0][0];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<cur;
                if(a[i+1][j] =='0' and a[i][j+1]!='0') cur = a[i+1][j];
                else if(a[i+1][j] !='0' and a[i][j+1]=='0') cur = a[i][j+1];
                else if(a[i-1][j] =='0' and a[i][j+1]!='0') cur = a[i-1][j];
                else if(a[i-1][j] !='0' and a[i][j+1]=='0') cur = a[1][j+1];
            
            }
        }
        cout<<endl;
    }
 
    return 0;
}