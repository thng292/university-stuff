#pragma once
/*
* Count negative number of a array
* @param arr Pointer to the array
* @param len Length of the array
* @return Number of negaive number in the array
*/
int CountNegative(double* arr, int len);

/*
* Convert an integer to binary
* @param n The integer
* @return an array of char with the length of 8
*/
char* IntToBinary(int n);

/*
* Calculate an integer from an array of 16 1s and 0s
* @param bin The binary array
* @return An integer
*/
int BinaryToInt(char* bin);

/*
* Kiem tra b co phai la uoc cua a
* @param a so can kiem tra
* @param b uoc muon kiem tra
* @return true neu b la uoc cua a, false neu nguoc lai
*/
bool KiemTraUoc(int a, int b);

/*
* Xap xep mang theo yeu cau cua bai 4.
* @param arr Pointer to the array
* @param len The length of the array
* @param x X
*/
void SapXepVaDonUoc(int* arr, int len, int x);

/*
* Kiem tra so co chia het cho 6 hay co tan cung la 6
* @param n so can kiem tra
* @return true neu so chia het cho 6 hoac co tan cung la 6
*/
bool CheckSix(int n);

/*
* Dem so phan tu co tan cung la 6 hoac chia het cho 6
* @param arr Pointer to array
* @param len Length of the array
*/
int CountSix(int* arr, int len);

/*
* Check if n is a prime
*/
bool IsPrime(int n);

/*
* Calculate the average of primes in an array
* @param arr Pointer to array
* @param len Length of the array
* @param variable to store the average number
* @return The average of all the primes in the input array 
* @return Pointer to the array of primes in the input array
* with the first element is the length of the array + 1
*/
int* AvgPrimes(int* arr, int len, double& avg);

/*
* Convert an array to a set
* @param arr Pointer to array
* @param len Length of the array
* @return Pointer to the sorted set
* with the first element is the length of the set + 1
*/
int* ToSet(int* arr, int len);

/*
* Delete all the primes in the input array
* @param arr Pointer to array
* @param len Length of the array
* @return Pointer to the array
* with the first element is the length of the array + 1
*/
int* DeletePrimes(int* arr, int len);

/*
* Find the first element equal to key in the input array
* @param arr Pointer to array
* @param len Length of the array
* @param key Thing to search for
* @return index of the key if not found return -1
*/
int Find(int* arr, int len, int key);

/*
* Tim cac phan tu co trong A ma khong co trong B
* @param A Pointer to array A
* @param lenA Length of the array A
* @param B Pointer to array B
* @param lenB Length of the array B
* @return Pointer to the array
* with the first element is the length of the array + 1
*/
int* FindANotInB(int* A, int lenA, int* B, int lenB);

/*
* Noi 2 mang A va B
* @param A Pointer to array A
* @param lenA Length of the array A
* @param B Pointer to array B
* @param lenB Length of the array B
* @return Pointer to the array with length = lenA + lenB
*/
int* ArrConcat(int* A, int lenA, int* B, int lenB);

/*
* Sap xep giam dan mang
* @param arr Pointer to array
* @param len Length of the array
*/
void SapGiam(int* arr, int len);


/*
* Trich nhung phan tu khong phai la so nguyen to ra mang B
* @param arr Pointer to array
* @param len Length of the array
* @return Pointer to the new array
* with the first element is the length of the array + 1
*/
int* ExtractNonPrimes(int* arr, int len);

/*
* Copy the input array
* @param arr Pointer to array
* @param len Length of the array
* @return Pointer to the new array
*/
int* copyArr(int* arr, int len);