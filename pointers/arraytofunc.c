#include <stdio.h>

int SumOfelement(int* A, int size)
{
	int i = 0;
	int res = 0;
	while (i < size)
	{
		res = res + *(A + i);
		i++;
	}
	return res;
}

int main()
{
	int A[] = {5,5,5,1};
	int size ;
	size = sizeof(A) / sizeof(A[0]);
	printf("size of array is :%d\n",SumOfelement(&A[0],size));
}