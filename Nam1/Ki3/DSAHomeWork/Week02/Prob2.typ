=

It is possible to implement selection sort for linked lists with the same $O(N^2)$ efficiency as the array version

If we store a reference to the linked list node instead of the index, we can insert or swap the new founded element in $O(1)$ efficiency like in the array version. Thus, the time it takes to go through and find the smallest or largest element is $O(N)$. So the time complexity of the linked list version and the array version are the same.