= Prove that: 
== $f(x)=4x^2-5x+3 in O(x^2)$
- Let $g(n)=n^2$
- $4x^2 - 5x + 3 <= 4x^2 + 5x^2 + 3x^2 = 12x^2$ (for all $n>=1$)
- Thus, as c = 12, $n_0$ = 1 #sym.arrow $f(x) < 12g(x)$
- By definition of Big-Oh, $f(x) in 0(n^2)$
== $(x+5)log_2(3x^2+7) in O(x log_2x)$
$|f(x)| $\
$=|(x+5)log_2(3x^2+7)| $\
$=(x+5)log_2(3x^2+7)$ for all $x>-5$\
$<=(x+5x)log_2(3x^2+7x^2)$ for all $x>1$\
$<=6x log_2(10x^2)$ for all $x>1$\
$<=6x log_2(x^3)$ for all $x>10$\
$<=18x log_2(x)$ for all $x>10$\
#sym.arrow By definition of Big-oh, we conclude that $(x+5)log_2(3x^2+7) in O(x log_2x)$ with $C=18,k=10$.
== $f(x)= (x^2+5log_2x)/(2x+1) in O(x)$
- $5log_2x<5x<5x^2$ for all $x>1$ (because $log_2x<$x for all $x>0$)
- $1/(2x+1)<1/2x$ for all $x>0$
#sym.arrow $|f(x)|= |(x^2+5log_2x)/(2x+1)|$\
$=(x^2+5log_2x)/(2x+1)$ for all $x>1$\
$<=(x^2+5x^2)/(2x)$ for all $x>1$\
$<=3x$ for all $x>1$\
#sym.arrow By definition of Big-oh, we conclude that $f(x)= (x^2+5log_2x)/(2x+1) in O(x)$ with $C=3,k=1$.\