#include "main.h"


int str_length(char *s)
{
	if(!(*s))
	{
		return (0);
	}
	return (1 + str_length(s + 1));
}

int _checkpal(int i, int j, char *s)
{
	if (i >= j)
		return (1);
	if (s[i] == s[j])
		return ( _checkpal(i+1, j-1, s));
	return(0);
}

int is_palindrome(char *s)
{
	if (!(*s))
	{
		return (1);
	}
	else if(*(s+1) == '\0')
		return (1);
	if (s[0] == s[1] && s[2] == '\0')
		return (1);
	return (_checkpal(0,str_length(s) - 1,s));
}
