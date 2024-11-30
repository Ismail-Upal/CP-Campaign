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
        int n; cin>>n;
        deque<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        ll masha=0, bear =0;

        while(!v.empty()){
            int t=2;
            while(!v.empty() and t!=0){
                masha += v.front();
                v.pop_front();
                t--;
            }
            t=2;
            while(!v.empty() and t!=0){
                bear += v.back();
                v.pop_back();
                t--;
            }
        }

        if(masha > bear)cout<<"Masha"<<endl;
        else if(masha < bear)cout<<"The Bear"<<endl;
        else cout<<"Draw" << endl;
    }
 
    return 0;
}