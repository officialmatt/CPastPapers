#include <stdio.h>

void filledSquare(int n, char border, char fill)
{
	for(int height=0;height<n;height++)
	{
		for(int width=0;width<n;width++)
		{
			if(width==0 | width==(n-1) | height==0 | height==(n-1) )
			{
				printf("%c", border);
			}
			else
			{
				printf("%c",fill);
			}
		}
		printf("\n");
	}	
}

int main(int argc, char *argv[]) {
	filledSquare(4,'+','*');
}