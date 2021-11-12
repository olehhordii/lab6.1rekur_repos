
using namespace std;
#include <iostream>
#include <iomanip>

#include <cmath>
#include <math.h>
void CreateArray(int* a, const int size, const int low, const int high,int i) {
	a[i] = low + rand() % (high - low + 1);
	if (i < size - 1){
		CreateArray(a, size, low, high, i + 1);
}
}


void PrintArray(int* a, const int size,int i) {
	
	cout << setw(4) << a[i];
	if (i < size - 1) {
		PrintArray(a, size, i + 1);
	}
	else{
		cout << endl;
	}
}
int Count(int* a, const int size, int i, int coun) {
	if (a[i] < 0 || a[i] % 2 != 0){
		coun++;
	}
	if (i < size - 1)
		return Count(a, size, i + 1, coun);
	else
		return coun;
}
int Sum(int* a, const int size,int i,int s) {
	if (a[i] < 0 || a[i] % 2 != 0)
		s += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, s);
	else
		return s;

}

void Replace(int* a, const int size,int i) {
	if (a[i] < 0 || a[i] % 2 != 0)
		a[i]=0;
	if (i < size - 1)
		Replace(a, size, i + 1);
}
int main()
{
	srand((unsigned)time(NULL));
	const int  b = 24;
	int a[b];
	int low = -50;
	int high = 15;

	cout << "Array: ";
	CreateArray(a, b, low, high,0);
	PrintArray(a, b,0);

	cout << "Numerosity " << Count(a, b,0,0) << endl;
	cout << "Sum " << Sum(a, b,0,0) << endl;

	Replace(a, b,0);
	PrintArray(a, b,0);
	return 0;
}

