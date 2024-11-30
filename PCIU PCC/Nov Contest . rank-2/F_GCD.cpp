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
        int r, c; cin>>r>>c;
        
        int a[r+1][c+1];
        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                if(i==j)a[i][j]=3;
                else a[i][j]=2;
            }
        }
        
        if(r<c){
            for(int i=r+1; i<=c; i++){
                a[1][i]=3;
            }
        }

        if(r>c){
            for(int i=c+1; i<=r; i++){
                a[i][1]=3;
            }
        }


        for(int i=1; i<=r; i++){
            for(int j=1; j<=c; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
 
    return 0;
}