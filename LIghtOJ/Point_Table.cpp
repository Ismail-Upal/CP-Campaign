#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int a[3];
    for(int i = 0; i < 3; i++) cin >> a[i];

    sort(a, a + 3, greater<int> ()); 

    int ok = 0;
    if(a[0] == 6){
        if(a[1] == 3 and a[2] == 0) ok = 1;
        if(a[1] == 1 and a[2] == 1) ok = 1;
    }
    else if(a[0] == 4){
        if(a[1] == 4 and a[2] == 0) ok = 1;
        if(a[1] == 3 and a[2] == 1) ok = 1;
        if(a[1] == 2 and a[2] == 1) ok = 1;
    }
    else if(a[0] == 3){
        if(a[1] == 3 and a[2] == 3) ok = 1;
    }
    else if(a[0] == 2){
        if(a[1] == 2 and a[2] == 2) ok = 1;
    }

    if(ok) cout << "perfectus" << endl;
    else cout << "invalidum" << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        Solve();
    }
    
    return 0;
}