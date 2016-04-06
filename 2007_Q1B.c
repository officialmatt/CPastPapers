#include <stdio.h>

void swap(int a[], int m, int n) //Function question is asking 
{
    int temp = a[m];
	a[m] = a[n];
    a[n] = temp;
}

int main(int argc, char *argv[]) {
    
    int p[3] = {1,2,3};  //Code in main to check function works
    swap(p,0,1);

	for(int i = 0; i<3; i++)
	{
		printf("%d, ", p[i]);
	}
    
}