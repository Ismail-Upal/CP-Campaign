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
        int n; cin>>n;
        
        string s;
        cin>>s;
        int ans=0;
        int i=0, o=0;
        while(i<n){
            
            if(s[i]=='('){
                o++;
            }
            else if(s[i]==')'){
                if(o>0)o--;
                else{
                    ans++;
                }
            }

            i++;
        } 
        cout<<ans<<endl;
    }
    return 0;
}