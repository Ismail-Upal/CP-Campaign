// Show how to implement merge sort with a single additional array of size n (without constructing new arrays in each recursive call).

#include<bits/stdc++.h>
using namespace std;
void merge_sort(int a[], int b[], int l, int r){
    if(l >= r) return;
    int mid = l + (r - l) / 2;
    merge_sort(a, b, l, mid);
    merge_sort(a, b, mid + 1, r);

    int i = l, j = mid + 1, k = l;

    while(i <= mid and j <= r){
        if(a[i] <= a[j]){
            b[k++] = a[i++];
        }
        else b[k++] = a[j++];
    }
    while(i <= mid) b[k++] = a[i++];
    while(j <= r) b[k++] = a[j++];

    for(int i = l; i <= r; i++) a[i] = b[i];
}
int32_t main()
{   
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    merge_sort(a, b, 0, n - 1);
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
    
    return 0;
}