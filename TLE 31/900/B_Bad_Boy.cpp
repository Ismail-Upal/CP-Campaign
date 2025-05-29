#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        int n, m, I, J; cin >> n >> m >> I >> J;
        // if(J == 1) cout << "1 "<< m << " " << n << " " << m << endl;
        // else if(I == 1) cout << n << " 1 " << n << " " << m << endl;
        // else if(I == n)cout <<"1 1 1 "<< m << endl;
        // else if(J == m)cout <<"1 1 " << n << " 1"<< endl;
        // else{
        //     int mi = (n+2-1) / 2 , mj = (m+2-1) / 2;
        //     // cout << mi << " ## " << mj << endl; 

        //     if(I<=mi and J<=mj)cout << n << " 1 1 " <<m << endl;
        //     else if(I<=mi and J>=mj) cout <<"1 1 "<< n << " " <<m <<endl;
        //     else if(I>=mi and J>=mj) cout <<n<<" 1 1 "<< m << endl;
        //     else if(I>=mi and J<=mj) cout <<"1 1 "<< n << " " <<m <<endl;
        // }

        cout << "1 1 "<< n << " " << m << endl;
    }
    
    return 0;
}