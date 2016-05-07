#include <stdio.h>
void square()
{
	for (int height = 0; height<4;height++)
	{
		for(int width = 0; width<4;width++)
		{
			if(width==0||width==3 || height ==0 || height ==3)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}

void triangle()
{
	int space = 0;
	for (int height = 0; height <4; height++)
	{
		for (int width = 0; width<space;width++)
		{
			printf(" ");
		}
		
		for (int width = 0; width<4-height; width++)
		{
			printf("*");
		}
		
		printf("\n");
		
		space++;
	}
}

void Q6()
{
	int space = 0;
	for(int height = 0; height < 9; height++)
	{
		for(int width = 0; width<space; width++)
		{
			printf(" ");
		}

		for(int width = 0; width<5; width++)
		{
			printf("*");
		}
		printf("\n");
		
		if(height<4)
		{
			space++;
		}
		else
		{
			space--;
		}
		
	}
}

void Q7()
{
	int row;
	for(int height = 0; height < 7; height++)
	{
		printf("*");
		switch(height)
		{
			case 0:
			case 6:
				for(row=1;row<7;row++)
				{
					printf("*");
				}
				break;
			case 1:
			case 5:
				for(row=1;row<7;row++)
				{
					printf(" ");
				}
				break;
			case 2:
			case 4:
				printf(" ");
				for(row=2;row<6;row++)
				{
					printf("#");
				}
				printf(" ");
				break;
			case 3:
				printf(" ");
				printf("#");
				for (row = 3;row<5;row++)
				{
					printf(" ");
				}
				printf("#");
				printf(" ");
				break;
		}
		printf("*");
		printf("\n");
		
	}
	
}

void Q8()
{
	int height;
	int width;
	char c;
	for(height=0;height<6;height++)
	{
		if(height%2==0)
		{
			c = '*';
		}
		else 
		{
			c = '#';
		}
		
		for(width=0;width<6;width++)
		{
			printf("%c",c);
			if(c=='#')
			{
				c='*';
			}
			else 
			{
				c='#';
			}
		}
		printf("\n");
	}
}

void Q9()
{
	int height;
	int width;
	int spaces;
	printf("*");
	printf("\n");
	for(height=1;height<8;height++)
	{
		printf("*");
		for(width=0;width<spaces;width++)
		{
			printf(" ");
		}
			
		if(height<4)
		{
			spaces++;
		}
		else 
		{
			spaces--;
		}
		printf("*");
		printf("\n");
	}
	printf("*");
	printf("\n");
}

void Q10()
{
	int height;
	int width;
	for(height=0;height<8;height++)
	{
		for(width=0;width<7;width++)
		{
			if(height==0)
			{
				printf("*");
			}
			else if (height==7)
			{
				printf("#");
			}
			else if (width==height)
			{
				printf("*");
			}
			else if (width==height-1)
			{
				printf("#");
			}
			else if(width==0)
			{
				printf("#");
			}
			else if(width==6)
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	
	//triangle();
	Q10();
	
}