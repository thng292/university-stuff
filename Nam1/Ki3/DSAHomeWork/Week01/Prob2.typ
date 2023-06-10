
= Calculate the number of all assignment and comparison operations of the following algorithms, then show their order of growth in term of O-notation:
== 
```cpp
a. for (i = 0; i < n; i++)
     for (j = 0; j < n; j++)
       b[i][j] += c;
```
- Assignment: $(n + 1) + (n + 1)^2 + n^2 = 2 n^2 + 3n + 2$
- Comparison: $(n + 1) + (n + 1)^2$ 
- Addition: $n + n^2 + n^2 = 2 n^2 + n$
- $O(n^2)$ 

== 
```cpp
b. for (i = 0; i < n; i++)
      if (a[i] == k)
        return 1;
   return 0;
```
- Assignment: $n + 1$
- Comparison: $2(n + 1)$
- $O(n)$

== 
```cpp
c. for (i = 0; i < n; i++)
    for (j = i+1; j < n; j++)
      b[i][j] -= c;
```
- Assignment: $(n + 1) + 2 * (n + 1) * sum_(i=1)^n(i)$
- Comparison: $(n + 1) + (n + 1)^2$
- Addition: $n + n^2$
- Subtraction: $n^2$
- $O(n^2)$
