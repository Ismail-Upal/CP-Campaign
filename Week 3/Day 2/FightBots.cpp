#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    tc{
        int n, x,y; cin>>n>>x>>y;
        string s; cin>>s;
        int a=0,b=0, ans=0;
       
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                b--;
            }
            else if(s[i]=='R'){
                b++;
            }
            else if(s[i]=='U'){ 
                a++;
            }
            else if(s[i]=='D'){
                a--;
            }

            int dif=abs(x-b)+abs(y-a);
            if(dif==i+1){
                ans=1;
                break;
            }
        }
        if(ans)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}