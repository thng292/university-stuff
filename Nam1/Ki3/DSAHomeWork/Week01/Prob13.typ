= Write the algorithms to solve the following problems using C++ and recursion. Find the Big-O of your algorithms
== Find the maximum of an array of n integers.
```C
int FindMax(int* arr, int length)
{
    if (length == 1) {
        return arr[0];
    }
    int res = FindMax(arr, length - 1);
    if (res > arr[length - 1]) {
        return res;
    }
    return arr[length - 1];
}
```
*Analysis:*
- Input size: $n$
- Basic operation: comparation
- Recurrence relation: $M(n) = M(n - 1) ("to calculate FindMax(arr, n - 1)")$$ + 1 ("to find maximum of arr[n - 1] and FindMax(arr, n - 1)"), forall n > 0$
#sym.arrow $M(n) = M(n - 1) + 1 = M(n - i) + i = M(n - n) + n = n$ \
#sym.arrow.double $O(n)$

== Calculate the factorial of an integer n.
```c
long long Factorial(int n)
{
    if (n == 1) {
        return 1;
    }
    return n * Factorial(n - 1);
}
```
*Analysis:*
- Input size: number of bit in binary representation of $n$
- Basic operation: multiply
- Recurrence relation: $M(n) = M(n - 1) ("to calculate Factorial(n - 1)") $$+ 1 ("to multiply Factorial(n - 1) by n"), forall n > 0$
#sym.arrow $M(n) = M(n - 1) + 1 = M(n - i) + i = M(n - n) + n = n$ \
#sym.arrow.double $O(n)$

== Calculate the sum of n integers.
```c
int SumOfIntegers(int* arr, int length)
{
    if (length == 0) {
        return 0;
    }
    return arr[length - 1] + SumOfIntegers(arr, length - 1);
}
```
*Analysis:*
- Input size: $n$
- Basic operation: addition
- Recurrence relation: $M(n) = M(n - 1) ("to calculate SumOfIntegers(arr, n - 1)")$$ + 1 ("to add arr[n - 1] and SumOfIntegers(arr, n - 1)"), forall n > 0$
#sym.arrow $M(n) = M(n - 1) + 1 = M(n - i) + i = M(n - n) + n = n$ \
#sym.arrow.double $O(n)$

== Check if an array of n elements is symmetric or not.
```c
bool isSymmetricArray(int* arr, int length)
{
    if (length <= 1) {
        return true;
    }
    if (arr[0] == arr[length - 1]) {
        return isSymmetricArray(arr + 1, length - 2);
    }
    return false;
}
```

*Analysis:*
- Input size: $n$
- Basic operation: comparation
- Recurrence relation: $M(n) = M(n - 2) ("to evaluate isSymmetricArray(arr + 1, n - 2)") $$+ 1 ("to check if the last element is equal to the first element"), forall n > 0$
#sym.arrow $M(n) = M(n - 2) + 1 = M(n - 2i) + i = M(n - 2n/2) + n/2 = n/2$ \
#sym.arrow.double $O(n)$