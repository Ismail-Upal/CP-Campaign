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
<<<<<<< HEAD
        int ok = 1;

        vector<int> preMin(n), sufMax(n);
        preMin[0] = v[0], sufMax[n - 1] = v[n - 1];
        for(int i = 1; i < n; i++){
            preMin[i] = min(v[i], preMin[i - 1]);
        }
        for(int i = n - 2; i >= 0; i--){
            sufMax[i] = max(v[i], sufMax[i + 1]);
        }

        for(int i = 1; i < n; i++){
            if(preMin[i - 1] > sufMax[i]) ok = 0;
        }

        if(ok) cout << "Yes" << endl;

        else cout << "No" << endl;
    }

    return 0;
}


=======
        
    }
    
    return 0;
}
>>>>>>> c70e80aaae5897c880a210040f1b4752f6d043b2
