Partition(lo, hi):
    Set pivot ← A[hi].
    Set i ← lo - 1.
    For each j ← lo to hi - 1:
        If A[j] < pivot:
        Increment i.
        Swap A[i] and A[j].
    Swap A[i + 1] and A[hi] 
    Return i + 1 

Quick Sort(lo, hi):
If lo < hi:
    Set p ← partition(lo, hi) (pivot index).
    quick_sort(lo, p - 1)
    quick_sort(p + 1, hi)