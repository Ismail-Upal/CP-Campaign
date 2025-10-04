#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	optimize();
 
    tc{
        int n; cin >> n;
        if(!(n & 1)){
            for(int i = 1; i <= n/2; i++){
                cout << i << " " << i <<" ";
            }
            cout << endl;
        }
        else{
            if(n < 27){cout << -1 << endl; continue;}
            for(int i = 1, j = 1, k=0; i <=n; i++){
                if(i==1 or i==10 or i==26)cout << (n+2-1)/2 << " ";
                else if( i==11 or i==27)cout << ((n+2-1)/2)+1 << " ";
                else{
                    k++; 
                    cout << j << " ";
                    if(k==2){
                        j++;
                        k=0;
                    }
                }
            }
            cout << endl;
        }
    }
 
    return 0;
}