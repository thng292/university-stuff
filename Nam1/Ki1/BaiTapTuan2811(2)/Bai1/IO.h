#pragma once

/*
* Read the row and column from std input
* @param return value for Row
* @param return value for Col
*/
void ReadRowCol(int&, int&);

/*
* Init an emty matrix Row*Col
* @param Row
* @param Col
* @return Pointer to the matrix
*/
int** InitMatrix(int, int);

/*
* Read matrix from std input
* @param Row
* @param Col
* @return Pointer to the matrix
*/
int** ReadMatrix(int, int);


/*
* Print the matrix to the std output
* @param Pointer to the matrix
* @param Row
* @param Col
*/
void WriteMatrix(int**, int, int);

/*
* Print the 1D array to std output
* @param arr Pointer to the array
* @param size Length of the array
*/
void WriteArray(int*, int);