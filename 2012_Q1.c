#include <stdio.h>


int length(char myString[] )
{
	int count = 0;
	for (int n=0; myString[n]!='\0';n++)
	{
		count++;
	}
	return count;
}

int compare(char myString1[], char myString2[])
{
	if (length(myString1) != length(myString2))
	{
		return 0; //lengths not equal, therefore can't be the same
	}
	else
	{
		int stringLength = length(myString1);
		int counter = 0;
		for(int n = 0; n<stringLength;n++)
		{
			if(myString1[n]==myString2[n])
			{
				counter++;
			}
		}
		if (counter==stringLength)
		{
			return 1; 
		}
		else
		{
			return 0;
			
		}
	}
	
}
int main(int argc, char *argv[]) {
	int x = length("HelloThere");
	printf("%d\n", x);
	
	int y = compare("Hello", "Bye");
	if(y ==1)
	{
		printf("The two strings are equal");
	}
	else
	{
		printf("The strings are not equal");
	}
	
}

