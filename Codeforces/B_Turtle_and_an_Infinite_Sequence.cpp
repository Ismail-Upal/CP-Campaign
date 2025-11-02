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
        int n, m; cin >> n >> m;
        vector<int> a(30), b(30);
        for(int i = 0; i < 30; i++){
            a[i] = i;
        }
        for(int i = 0; i < 30; i++) cout << a[i] << " ";
            cout << endl; 
        while(m--){
            for(int i = 0; i < 30; i++){
                if(i == 0) b[i] = a[i] | a[i + 1];
                else if(i == 29) b[i] = a[i] | a[i - 1];
                else b[i] = a[i - 1] | a[i + 1] | a[i];
            }

            a = b;
            for(int i = 0; i < 30; i++) cout << a[i] << " ";
            cout << endl; 
        }
    }
    
    return 0;
}