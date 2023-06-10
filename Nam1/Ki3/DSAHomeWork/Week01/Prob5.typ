= Express function $n^3 / 1000 - 100 n^2 - 100n + 3$ in terms of O-notation
- Let g(n) = n^3
- We have $n^3 / 1000 - 100 n^2 - 100n + 3 <= n^3, forall n >= 1$
- Thus, as $c = 1$ and $n_0 = 1$ #sym.arrow $f(n) < g(n)$
- By definition of Big-Oh, $f(n) in O(n^3)$