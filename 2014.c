#include <stdio.h>
find(char a[], char b)
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		{
			return i;
		}
	}
	return -1;
}

match(char a[], char b[])
{
	for(int i = 0; a[i]!='\0';i++)
	{
		int s1 = find(a,a[i]);
		int s2 = find(b,a[i]);

		if(s1==s2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

int nonRec(int n)
{
	int i;
	int ans = 1;
	for(i=0;i<n;i++)
	{
		ans = ans * 2;
	}
	
	return ans;
}

int * create(int size, int value)
{
	int *myArray = malloc(sizeof(int)* size);
	for(int i = 0; i<size;i++)
	{
		*myArray = value;
		//myArray[i] = value;
		myArray++;
	}
	
	//printf("%d", myArray[1]);
	return myArray;
}

void triangle(int height, char b)
{
	int spaces = 3;
	for(int i = 0; i<height*2;i++)
	{
	
	
		if(i<height)
		{
			for(int j = 0; j<spaces;j++)
				{
					printf(" ");
				}
			for(int j = 0; j<=i;j++)
				{
					printf("%c",b);
				}
				spaces--;
		}
		else 
		{
			for(int j = 0; j<spaces;j++)
				{
					printf(" ");
				}
			printf("hi");
			for(int j = height-1; j>=i;j--)
			{
				printf("%c",b);
			}
			
			spaces++;
			
		}
		
		printf("\n");
	}
}

void triangle2(int height, char b)
{
	int spaces = 0;
	for(int i = 0; i<height;i++)
	{
		for(int j = 0; j<spaces;j++)
		{
			printf(" ");
		}
		for(int j = height-1; j>=i;j--)
		{
			printf("%c",b);
		}
		
		spaces++;
		printf("\n");
	}
}
	
	
int main(int argc, char *argv[]) {
	
	//int ans = find("there",'a');
	//int ans = match("there","her");
	//int ans = nonRec(2);
	int ans = create(10,5);
	triangle(4,'*');
	
	//printf("%d",ans);
	
}