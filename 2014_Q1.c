#include <stdio.h>

int find(char a[], char b)
{
	int charPos = 0;
	for(int n = 0; a[n]!='\0'; n++)
	{
		if(a[n]==b)
		{
			charPos = n;
			break;
			
		}
		else
		{
			charPos = -1;
		}
	}
	
	return charPos;
	
}

int main(int argc, char *argv[]) {
	int x = find( "there", 'e');
	printf("%d", x);
}