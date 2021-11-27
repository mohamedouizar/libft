#include <stdio.h>

void increment (int *p)
{
	 *p = *p + 1; 

	 printf("value of pointer is :%d\n",*p);
	 printf("pointe to :%p\n",p);
}
int main ()
{
	int a = 1;
    increment(&a);
	 printf(" a = %d\n",a);
	 printf("@ de a %p\n",&a);
}