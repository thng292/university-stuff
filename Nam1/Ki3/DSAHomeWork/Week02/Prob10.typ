=
When we store a heap in an array, we can access the _ith_ node's parent (p) using the formula $p = floor((i - 1) / 2)$. Also, we can access the _ith_ node's left and right children $(c_1, c_2)$ using the formula $c_1 = 2 * i + 1, c_2 = 2 * i + 2$

The $n - 1$th node's parent will be $floor((n - 2) / 2) = floor(n/2) - 1$

#sym.arrow.double The lowest index of a non-leaf node is $floor(n/2) - 1$\
#sym.arrow.double $forall i > floor(n/2) - 1, 2 * i + 1 > n$ \
#sym.arrow.double So all the node has index $floor(n/2), floor(n/2) + 1, floor(n/2) + 2, ...$ are leaves (they don't have child)