// Given an array a. The pair (i,j) such that i < j and ai > aj is called inversion. Find the number of inversions in array a. Time O(nlogn)
#include<bits/stdc++.h>
using namespace std;
// int mergee(vector<int> &v, int l, int mid, int r){
//     int n = mid - l + 1, m = r - mid;
//     vector<int> left(n), right(m);
//     for(int i = 0; i < n; i++) left[i] = v[l + i];
//     for(int i = 0; i < m; i++) right[i] = v[mid + 1 + i];

//     int i = 0, j = 0, k = l, cnt = 0;
//     while(i < n and j < m){
//         if(left[i] <= right[j]){
//             v[k++] = left[i++];
//         }
//         else{
//             v[k++] = right[j++];
//             cnt += n - i;
//         }
//     }
//     while(i < n) v[k++] = left[i++];
//     while(j < m) v[k++] = right[j++];
    
//     return cnt;
// }
// int merge_sort(vector<int> &v, int l, int r){
//     if(l >= r) return 0;
//     int mid = l + (r - l) / 2;
//     int inversion = merge_sort(v, l, mid);
//     inversion += merge_sort(v, mid + 1, r);
//     inversion += mergee(v, l, mid, r);

//     return inversion;
// }

int ans = 0;

void merge_sort(int a[], int b[], int l, int r){ // single function and array
    if(l >= r) return;
    int mid = l + (r - l) / 2;
    merge_sort(a, b, l, mid);
    merge_sort(a, b, mid + 1, r);
    
    int i = l, j = mid + 1, k = l;
    while(i <= mid and j <= r){
        if(a[i] <= a[j]){
            b[k++] = a[i++];
        }
        else{
            b[k++] = a[j++];
            ans += mid - i + 1;
        }
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

    cout << ans ;
    
    return 0;
}

// O (n logn)