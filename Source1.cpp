#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	const int n = 2;
	int A[n][n]{}, i, j;
	int sum = 0;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> A[i][j];

	for (i = 0; i < n; i++)
		sum += A[i][i];

	cout << sum;


	//getch();

	return 0;
}