#pragma once
/*
* Read and return an array of int from std input
* @param len: Reference to array length
* @return Pointer to array read from standard input
*/
int* ReadInts(const int& len);


/*
* Read and return an array of double from std input
* @param len Reference to array length
* @return Pointer to array read from standard input
*/
double* ReadDoubles(const int& len);

/*
* Read and return an array of double from std input
* @param len Reference to array length
* @return Pointer to array read from standard input
*/
char* ReadChars(const int& len);

/*
* Write an array of int to std output
* @param arr: Pointer to the array(int)
* @param len: Length of the array
*/
void WriteInts(int* arr,const int &len);

/*
* Write an array of double to std output
* @param arr: Pointer to the array(double)
* @param len: Length of the array
*/
void WriteDoubles(double* arr, const int& len);

/*
* Write an array of char to std output
* @param arr: Pointer to the array(char)
* @param len: Length of the array
*/
void WriteString(char* arr, const int& len);