//https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int k=pat.size();
	    int n=txt.size();
	    int i=0,j=0,ans=0;
	    map<char,int>mp;
	    for(auto i:pat)mp[i]++;
	    int cnt=mp.size();
	    while(j<n){
	        if(mp.find(txt[j])!=mp.end()){
	            mp[txt[j]]--;
	            if(mp[txt[j]]==0)cnt--;
	        }
	        if(j-i+1==k){
	            if(cnt==0)ans++;
	            if(mp.find(txt[i])!=mp.end()){
	                mp[txt[i]]++;
	                if(mp[txt[i]]==1)cnt++;
	            }
	            i++,j++;
	        }
	        else j++;
	    }
	    return ans;
	}
	

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
