#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        string a, b; cin >> a >> b;
        int j = 0;
        if(a == b){
            cout << "YES" << endl; continue;    
        }
        for(int i = 0; i < sz(b); i++){
            while(i < sz(b)){
                if(a[j] != b[i]) i++;
                else break;
            }
            if(i < sz(b)) j++;
            if(j >= sz(a)) break;
        }

        if(a[0] != b[0] or j != sz(a) or (b[0] == b[1])){
            cout << "NO" << endl; 
        }
        else cout << "YES" << endl;
    }
     
    return 0;
}