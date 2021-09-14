#include<stdio.h>
#include"function.h"

//temporal matrix and vector

int main(void)
{
	//init A, B, v
	float A[3][4] = {
		{1, 5, 2, 3},
		{2, 1, 1, 3},
		{3, 2, 9, 7}
	};
	float B[4][3] = {
		{1, 9, 7},
		{2, 6, 8},
		{4, 5, 8},
		{4, 3, 10},
	};
	float v[] = { 1, 4, 5, 11, 5 };

	// init m, n, l, k, n_di
	int m = 3, n = 4;
	int l = 4, k = 3;
	int n_di = 5;

	//init scalar c
	float c = 4;

	//init index
	int i, j;


	//show the results of function
	printf("(a) transposeMat(A, m, n)\n");
	transposeMat(A, m, n);
	printTempMat(n, m);

	printf("(b) normalizeVec(v, n)\n");
	normalizeVec(v, n_di);
	printTempVec(n_di);

	printf("(c) calculateLen(v, n)\n");
	printf("%f\n\n", calculateLen(v, n_di));

	printf("(d) scaleMat(A, m, n, c)\n");
	scaleMat(A, m, n, c);
	printTempMat(m, n);

	printf("(e) multiplyMat(A, m, n, B, l, k)\n");
	if (!multiplyMat(A, m, n, B, l, k))
		printf("Multiplication is Impossible\n");
	else
		printTempMat(m, k);

	printf("(f) addMat(A, m, n, B, l, k)\n");
	if (!addMat(A, m, n, B, l, k))
		printf("Addition is Impossible\n");
	else
		printTempMat(m, n);

	return 0;
}