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
int main(int argc, char *argv[]) {
	
	//int ans = find("there",'a');
	//int ans = match("there","her");
	int ans = nonRec(2);
	
	printf("%d",ans);
	
}