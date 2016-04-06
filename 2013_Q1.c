#include <stdio.h>
int count(char a[], char b)
{
	int counter = 0;
	for(int n = 0; a[n]!='\0';n++)
	{
		if(a[n]==b)
		{
			counter++;
		}
	}
	return counter;
}

int highestCount(char c[])
{
	int highest = 0;
	
	for(int i = 0; c[i]!='\0'; i++)
	{
		int charVal = c[i];
		int currentCount = count(c, c[i]);
		if(currentCount>=highest)
		{
			highest=currentCount;
		}
	}
	return highest;
}
int main(int argc, char *argv[]) {

//	int x = count("Hello", 'l');
//	printf("%d", x);

	int x = highestCount("aabbcccccccc");
	printf("%d", x);
	
}