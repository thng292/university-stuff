We can use the Counting Sort algorithm to create a $C'$ array which contains the number indicating the positions of the elements in the sorted list. This would use  $O(n + k)$ preprocessing time. When queried about how many integers fall into a range  `[a..b]`, simply compute `C'[b] − C'[a−1]`. This takes $O(1)$ times and yields the desired output.