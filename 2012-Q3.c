#include <stdio.h>
int* greater(int n[], int length, int value)
{
	int counter = 0;
	for(int x = 0; x < length; x++)
	{
		if(n[x]>value)
		{
			counter++;
		}
	}
	
	int myArray[counter];
	int newCount= 0;
	for(int x = 0; x < length; x++)
	{
		if(n[x]>value)
		{
			myArray[newCount] = n[x];
			newCount++;		
		}
			
	}
	
	return myArray;
	
	
}
int main(int argc, char *argv[]) {
	int a[] = {1,2,3,4,5};
	int *p = greater(a, 5, 3);
	
	printf("%d , %d", p[0] , p[1]);
	
}