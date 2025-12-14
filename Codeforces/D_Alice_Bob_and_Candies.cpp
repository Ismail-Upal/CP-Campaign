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
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        int mov = 0, alc = 0, preA = 0, bob = 0, preB = 0;
        int i = 0, j = n - 1;
        while(i <= j){
            if(mov % 2 == 0){
                preA = 0;
                while(i <= j and preA <= preB){
                    alc += v[i]; 
                    preA += v[i]; i++;
                }
                mov++;
            }
            else{
                preB = 0;
                while(i <= j and preB <= preA){
                    bob += v[j];
                    preB += v[j]; j--;
                }
                mov++;
            }
        }
        cout << mov << " " << alc << " " << bob << endl;
    }
    
    return 0;
}