#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//_____________________________________________
 
int32_t main()
{	optimize();
 
    int n ;cin>>n;
    int k1, k2; cin>>k1;
    deque<int>one, two;
    
    for(int i=0; i<k1; i++){
        int x; cin>>x;
        one.push_back(x);
    }
    cin>>k2;
    for(int i=0; i<k2; i++){
        int x; cin>>x;
        two.push_back(x);
    }
    int win = 0, fight = 0 ;
    int curonetop=-1, curtwotop=-1;int f=1;
    while(!one.empty() and !two.empty()){
        int topone = one.front(); one.pop_front(); 
        int toptwo = two.front(); two.pop_front();
            
            if(fight > 1000)break;
            
        
        if(topone > toptwo){
            one.push_back(toptwo);
            one.push_back(topone);
        }
        else {
            two.push_back(topone);
            two.push_back(toptwo);
        }
        fight++;
        if(two.empty()){win = 1; break;}
        if(one.empty()){win = 2; break;}
    }
    if(win){
        cout<<fight<<" "<<win<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}