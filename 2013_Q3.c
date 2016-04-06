#include <stdio.h>
void filledTriangle(int n, char border, char fill)
{
	for(int height = 0; height<n; height++)
	{
		for(int width = 0; width <= (n - (n - height)); width++)
		{
			if(height==0 | height==(n-1) | width==0 | width==(n - (n - height)))
			{
				printf("%c", border);
			}
			else
			{
				printf("%c", fill);
			} 
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	filledTriangle(4,'+','*');
	
}