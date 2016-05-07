#include <stdio.h>
int getColon(char a[])
{
	int i;
	for(i=0;a[i]!="\0";i++)
	{
		if(a[i]==':')
		{
			return i;
		}
		
	}
	return -1;
}

char makeCopy(char a[])
{
	int size = getColon(a);
	char newArray[size];
	for(int i = 0; i<=size; i++)
	{
		newArray[i]=a[i];
	}
	printf("%c",newArray[0]);
	return newArray;
}
int main(int argc, char *argv[]) {
	
	//int ans = getColon("Label 123");
	char ans = makeCopy("Label 123");
	printf("%c",ans);
	
}