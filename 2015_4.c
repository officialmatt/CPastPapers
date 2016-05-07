#include <stdio.h>

int sumArray(int * array, int size)
{
	int sum = 0;
	int i;
	for(i=0;i<size;i++)
	{
		sum += *(array+i);
	}
	return sum;
}


void block(int n, char a, char b)
{
	char current = a;
	int height;
	int row;
	
	for(height = 0; height<n;height++)
	{
		for(row=0;row<n;row++)
		{
			printf("%c",current);
		}
		if(current==b)
		{
			current=a;
		}
		else
		{
			current = b;
		}
		for(row=0;row<n;row++)
		{
			printf("%c",current);
		}
		
		printf("\n");
	}
}
int main(int argc, char *argv[]) 
{
	int a[] = {1,2,3};
	int ans = sumArray(a,3);
	//printf("%d", ans);
	block(10,'@','$');
}