#include <stdio.h>

int myLength (char *string) 
{ 
	char *c = string;
	while ( *c ) ++c;
	int ans =  c - string;
	//printf("%d", ans);
	return c - string;

}

int compareStr (char *s1, char *s2)
{
	char *p = s1;
	char *q = s2;
	int count = 0;
	if(myLength(s1)==myLength(s2))
	{
		for(int i = 0; i<myLength(s1);i++)
		{
			if(*p==*q)
			{
				count++;
			}
			*p++;
			*q++;
		}
	}
	else 
	{
		printf("They are not equal");
		return 0;
	}
	
	if(count==myLength(s1))
	{
		printf("They are equal");
		return 1;
	}
	else 
	{
		printf("They are not equal");
		return 0;
	}
}

int main(int argc, char *argv[]) {
	myLength("Hello");
	int isEq = compareStr("Hello", "Hello");
	printf("%d", isEq);
	
}