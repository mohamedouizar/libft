#include <stdio.h>
#include <string.h>

void print(char * str)
{
	str[0] = '0';
	//int i = 0;
	while (*str)
	{
		printf("%c",*(str)++);
		//i++;
	}
}


int main()
{
	char *str = "12345";
	//str + 1 = '0';
	//str[1] = '0';
	 
	 int len ;
	len = strlen(str);
	printf("str = %s\n size is %lu\n len is %d\n",str,sizeof(str),len);
	print(str);
}
