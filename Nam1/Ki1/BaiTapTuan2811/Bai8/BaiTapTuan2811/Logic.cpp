#include "Logic.h"
#include <algorithm>

int CountNegative(double* arr, int len)
{
	int result = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < 0) {
			++result;
		}
	}
	return result;
}

char* IntToBinary(int n)
{
	int nn = n;
	n = abs(n);
	char* tmp = new char[9];
	for (int i = 0;i<9; i++)
	{
		tmp[i] = '0' + n % 2;
		n /= 2;
	}
	char* res = new char[10];
	for (int  i = 0; i < 9; i++)
	{
		res[i] = tmp[9 - i - 1];
	}
	delete[] tmp;
	if (nn < 0) {
		//Flip
		for (int i = 0; i < 9; i++)
		{
			res[i] = '1' - res[i] + '0';
		}
		//Add 1
		int remain = 1;
		int pos = 8 ;
		do
		{
			res[pos]+=remain;
			remain = (res[pos] - '0') / 2;
			res[pos] = res[pos] % 2 + '0';
			pos--;
		} while (remain && pos>=0);
	}
	res[9] = '\0';
	return res;
}

int BinaryToInt(char* bin)
{
	int pw = 1;
	int res = 0;
	for (int i = 15; i >= 0; i--)
	{
		if (i == 0) {
			res += pw * (bin[i] - '0') * -1;
		}
		else {
			res += pw * (bin[i] - '0');
		}
		pw *= 2;
	}
	return res;
}

bool KiemTraUoc(int a, int b)
{
	return !(a%b);
}

void SapXepVaDonUoc(int* arr, int len, int x)
{
	std::sort(arr, arr + len, [x](int a, int b) {
		if (KiemTraUoc(x, a) && KiemTraUoc(x, b)) {
			return true;
		}
		if (KiemTraUoc(x, a)) {
			return false;
		}
		if (KiemTraUoc(x, b)) {
			return true;
		}
		return a < b;
	});
}

bool CheckSix(int n)
{
	return (n % 6 == 0 || n % 10 == 6);
}

int CountSix(int* arr, int len)
{
	int res = 0;
	for (int i = 0; i < len; i++)
	{
		if (CheckSix(arr[i])) {
			++res;
		}
	}
	return res;
}

bool IsPrime(int n)
{
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int* AvgPrimes(int* arr, int len, double& avg)
{
	int* res = new int[len+1];
	int cnt = 0, last = 1;
	for (int i = 0; i < len; i++)
	{
		if (IsPrime(arr[i])) {
			avg += arr[i];
			res[last++] = arr[i];
			++cnt;
		}
	}
	avg /= cnt;
	res[0] = last;
	return res;
}

int* ToSet(int* arr, int len)
{
	int* res = new int[len+1];
	int last = 1;
	std::sort(arr, arr + len);
	res[1] = arr[0];
	for (int i = 1; i < len; i++)
	{
		if (arr[i] != res[last]) {
			res[++last] = arr[i];
		}
	}
	res[0] = last;
	return res;
}

int* DeletePrimes(int* arr, int len)
{
	int* res = new int[len+1];
	int last = 1;
	for (int i = 0; i < len; i++)
	{
		if (!IsPrime(arr[i])) {
			res[last++] = arr[i];
		}
	}
	res[0] = last;
	return res;
}

int Find(int* arr, int len, int key)
{
	int res = 0;
	for (; res < len; res++)
	{
		if (arr[res] == key) {
			return res;
		}
	}
	return -1;
}

int* FindANotInB(int* A, int lenA, int* B, int lenB)
{
	int* res = new int[lenA+1];
	int last = 1;
	for (int i = 0; i < lenA; i++)
	{
		if (Find(B, lenB, A[i])==-1)
		{
			res[last++] = A[i];
		}
	}
	res[0] = last;
	return res;
}

int* ArrConcat(int* A, int lenA, int* B, int lenB)
{
	int* res = new int[lenA + lenB];
	for (int i = 0; i < lenA; i++)
	{
		res[i] = A[i];
	}
	for (int i = 0; i < lenB; i++)
	{
		res[i + lenA] = B[i];
	}
	return res;
}

void SapGiam(int* arr, int len)
{
	std::sort(arr, arr + len, std::greater<int>());
}

int* ExtractNonPrimes(int* arr, int len)
{
	int* res = new int[len];
	int last = 1;
	for (int i = 0; i < len; i++)
	{
		if (!IsPrime(arr[i])) {
			res[last++] = arr[i];
		}
	}
	res[0] = last;
	return res;
}

int* copyArr(int* arr, int len)
{
	int* res = new int[len];
	for (int i = 0; i < len; i++)
	{
		res[i] = arr[i];
	}
	return res;
}
