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
    
    string s; int k; cin >> s >> k;
    int i = 0;

    while(k and i < sz(s)){
        int tmp = i;
        for(int t = i; t <= i + k and t < sz(s); t++){
            if(s[t] > s[tmp]) tmp = t;
        }
        while(tmp > i){
            swap(s[tmp - 1], s[tmp]);
            tmp--; k--;
        }
        i++; 
    }
    cout << s ;
    
    return 0;
}