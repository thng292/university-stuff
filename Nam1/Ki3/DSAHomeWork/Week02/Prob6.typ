=
```
ALGORITHM FINDMAX(A[0...n-1])
    if n == 1:
        return n
    mid = n / 2;
    leftMax = FINDMAX(A[0...mid])
    rightMax = FINDMAX(mid + 1...n - 1)
    if A[leftMax] > A[rightMax]:
        return leftMax
    else
        return rightMax
```

Compare to the brute-force solution, this algorithm has the same time complexity, they use the same number of comparation to find the largest array. 

To find the lagest number in an unsorted array, we have to look through all the element in the array. So the best we can do is $O(N)$.