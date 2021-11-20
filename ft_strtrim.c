#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

#include "libft.h"

char* ft_strtrim(char const* s1, char const* set)
{
	size_t	start;
	size_t	last;
	char* str;

	str = 0;
	if (!s1 || !set)
		return (NULL);
		start = 0;
		last = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[ last- 1] && ft_strchr(set, s1[last - 1] )&& start < last)
			last--;
		str = (char*)malloc(sizeof(char) * (last - start + 1));
		if (str)
			ft_strlcpy(str, &s1[start], last - start + 1);
		return (str);
}


/*
int main()
{
	printf("%s\n", ft_strtrim("  !?Mohamed!", " "));
	
	return 0;
}
*/