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
        if(n%2==0)cout<<-1<<endl;
        else{
            int i=1,j=1;
            while(j<=n){
                if(i<=n/2){
                    cout<<i<<" ";
                    i++;
                    if(i>n/2)i=n;
                }
                else{
                    cout<<i<<' ';
                    i--;
                }
                j++;
            }
            cout<<endl;
        }
    }
    return 0;
}