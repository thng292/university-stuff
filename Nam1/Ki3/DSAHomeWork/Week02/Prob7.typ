= 

== $T(n) = 4T(n/2) + n, T(1) = 1$
- Order of growth: $O(n * log(n))$
- The function will be called $log(n)$ times recursively, with each call do $O(n)$ work

== $T(n) = 4T(n/2) + n^2, T(1) = 1$
- Order of growth: $O(n^2 * log(n))$
- The function will be called $log(n)$ times recursively, with each call do $O(n^2)$ work.

== $T(n) = 4T(n/2) + n^3, T(1) = 1$
- Order of growth: $O(n^3 * log(n))$
- The function will be called $log(n)$ times recursively, with each call do $O(n^3)$ work.