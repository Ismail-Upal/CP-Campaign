#include<bits/stdc++.h>
using namespace std;
int main(){\
    int num=201;
    vector<int>v(num, 1);
    v[1]=0;
    for(int i=2; i<=num; i++){
        if(!v[i])continue;
        for(int j=i*i; j<=num; j+=i){
            v[j]=0;
        }
    }
    
    int t;cin>>t;
    while(t--){
        int n; cin>>n; int ans=-1,x,y;
        vector<int>vc(n+1);
        for(int i=1;i<=n;i++)cin>>vc[i];

        for(int i=1;i<=100;i++){
            for(int j=1;j<=100;j++){
                if(i==j && find(vc.begin(), vc.end(), i)!=vc.end() && !v[i+j] && count(vc.begin(), vc.end(), i)>1){

                    x=find(vc.begin(), vc.end(), i)-vc.begin(),y=find(vc.begin()+x+1, vc.end(), j)-vc.begin();ans=1;
                    
                    if(x==y)continue;
                    
                }
                else if(i!=j&& find(vc.begin(), vc.end(), i)!=vc.end() &&find(vc.begin(), vc.end(), j)!=vc.end()&& !v[i+j] && count(vc.begin(), vc.end(), i)>0){
                    x=find(vc.begin(), vc.end(), i)-vc.begin(), y=find(vc.begin(), vc.end(), j)-vc.begin();ans=1; break;
                }
            }   
        }
        if(ans==-1)cout<<-1<<endl;
        else cout<<x<<" "<<y<<endl;
    }
}
