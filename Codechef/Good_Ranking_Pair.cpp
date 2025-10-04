#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	if(n > 1) cout << 2 << endl;
	else cout << 1 << endl;
	
	for(int i = 1; i <= n; i++) cout << i << " ";
	cout << endl;
	
	if(n > 1) for(int i = n; i >= 1; i--) cout << i << " ";
}
