=
Given a list of number and pointer(ptr) pairs: `[(9, ptr1), (2, ptr2), (5, ptr3), (2, ptr4), (6, ptr5)]`

If we do a partition, take the middle pair as pivot, and do not compare the data pointed by the pointer, the list becomes:
`[(2, ptr4), (2, ptr2), (5, ptr3), (9, ptr1), (6, ptr5)]`

We can see that the 2 pair `(2, ptr4) and (2, ptr2)` doesn't reserve their original order `(2, ptr2) , (2, ptr4)`.

The sorted array will be: `[(2, ptr4), (2, ptr2), (5, ptr3), (6, ptr5), (9, ptr1)]`

Thereforce, Quick Sort is not a stable sorting algorithm

/* If two elements have the same key, their relative order will not be preserved in the sorted output in case of quick sort, because here we are swapping elements according to the pivot’s position (without considering their original positions)

Ex: A given array arr[5] = { 2(first), 9, 5, 
 2(second),3} \
After using Quick Sort algorithm, the sorted array would be: arr[5]= { 2(second), 2(first), 3, 5, 9}
#sym.arrow.bar.double The ordering of the 2 elements has been changed. Therefore; Quick Sort is not a stable sorting algorithm */