#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        vector<int> a(n + 1), b(n + 1);
        int odd1 = 0, evn1 = 0;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];

        
        int A = 0, B = 0;
        for(int i = 1; i <= n; i++) A ^= a[i];
        for(int i = 1; i <= n; i++) B ^= b[i];

       
            int Anibe = 0;
            for(int i = 1; i <= n; i += 2){
                if(a[i] == 0 and b[i] == 1) Anibe++;
                if(b[i] == 0 and a[i] == 1) Anibe++;
            }
            int Bnibe = 0;
            for(int i = 2; i <= n; i += 2){
                if(a[i] == 0 and b[i] == 1) Bnibe++;
                if(a[i] == 1 and b[i] == 0) Bnibe++;
            }

        if(A == B){
            cout << "Tie" << endl;
        }
        else if(A == 1 and B == 0){
            if(Bnibe > Anibe) cout << "Mai" << endl;
            else cout << "Ajisai" << endl;
        }
        else if(A == 0 and B == 1){
            if(Anibe > Bnibe) cout << "Ajisai" << endl;
            else cout << "Mai" << endl;
        }
       
    }
    
    return 0;
}