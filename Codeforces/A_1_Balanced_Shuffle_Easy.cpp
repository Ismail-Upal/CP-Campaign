#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//p.order_of_key(x), p.find_by_order(idx)
#define ll long long
#define dl double
#define endl "\n"
#define Y cout << "YES" << endl
#define N cout << "NO" << endl
#define tc int t;cin>>t;while(t--)
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}
 
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}
 
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}
 
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
 
void faltu () {
            cerr << endl;
}
 
template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}
 
template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
auto cmp(pair<int,int>a, pair<int,int>b){
    if(a.first!=b.first){
        return a.first<b.first;
    }

    return a.second>b.second;
    
}
void solve(){
    string s; cin>>s;
    vector<pair<int,int>>v;
    int f=1, os=0, cs=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            if(os==1){
                f++;
                v.push_back({f,i+1});
                os=1;
                cs=0;
            }
            else{
                f--;
                v.push_back({f,i+1});
                os=1;
                cs=0;
            }
        }
        else if(s[i]==')'){
            if(cs==1){
                f--;
                v.push_back({f,i+1});
                os=0;
                cs=1;
            }
            else{
                f++;
                v.push_back({f,i+1});
                os=0;
                cs=1;
            }
        }
    }
    sort(v.begin(),v.end(), cmp);
    //dbg(v);
    for(auto i:v){
        cout<<s[i.second-1];
    }
}
int main()
{
    optimize();
   
        solve();
    
    return 0;
}