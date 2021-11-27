#include <stdio.h>

int main ()
{
	int i = 0;
	int A[] = {1,5,8,1337};
	while ( i < 4)
	{
		printf("base is %p\n ",&A[i]);
		printf("valus is %d\n",A[i]);
		printf("base is %p\n ",A + i);
		printf("valus is %d\n",*(A + i));
		i++;
	}
}
