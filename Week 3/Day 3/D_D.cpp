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
    int n; cin>>n;
        string s; cin>>s;
        int a= count(s.begin(), s.end(), 'T');
        int b=count(s.begin(), s.end(), 'A');
        if(a>b)cout<<'T';
        else if(b>a)cout<<'A';
        else{
            a= count(s.begin(), s.end()-1, 'T');
            b=count(s.begin(), s.end()-1, 'A');
            if(a>b)cout<<'T';
            else if(b>a)cout<<'A';
        }
    
    return 0;
}