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
        char a [4][4];
        for(int i=1; i<=3; i++){
            for(int j=1; j<=3; j++){
                cin>>a[i][j];
            }
        }
        
        auto isValid = [&](char c){
                if(a[1][1]==c and a[1][2]==c and a[1][3]==c)return true;
                else if(a[2][1]==c and a[2][2]==c and a[2][3]==c)return true;
                else if(a[3][1]==c and a[3][2]==c and a[3][3]==c)return true;

                else if(a[1][1]==c and a[2][1]==c and a[3][1]==c)return true;
                else if(a[1][2]==c and a[2][2]==c and a[3][2]==c)return true;
                else if(a[1][3]==c and a[2][3]==c and a[3][3]==c)return true;

                else if(a[1][1]==c and a[2][2]==c and a[3][3]==c)return true;
                else if(a[1][3]==c and a[2][2]==c and a[3][1]==c)return true;

                else return false;
            };
        


        char ok = NULL;
                
        for(int i=1; i<=3; i++){
            for(int j=1; j<=3; j++){
                if(a[i][j]!='.' and isValid(a[i][j])){
                    ok = a[i][j];
                    break;
                }
            }
        }
        if(ok==NULL)cout<<"DRAW"<<endl;
        else cout<<ok<<endl;
    
    }
    return 0;

}