= Describe the running time of the following function using O-notation:
$ S = 1 + 1/2 + 1/6 + ... + 1/(n!) $

- Addition: $n - 1$
- Division: $n$
- Multiplication: $n$
- Running time: $3n - 1$

// - Let $g(n) = 1$
// - We have $1 + 1/2 + 1/6 + ... + 1/(n!) = e$
// - So $1 + 1/2 + 1/6 + ... + 1/(n!) = e < 3$ for all $n$
// - Thus, as $c = 1$ and $n_0 in RR$ #sym.arrow $f(n) in O(1)$
// - By definition of Big-Oh, $f(n) in O(1)$
// Solution_Chap01_22127401_22127086