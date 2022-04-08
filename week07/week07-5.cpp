#include <stdio.h>
char line[2000][80];
		//2000¦æ 80¦r¥À
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%s",line[i]);
		char other[80];
		gets(other);
	}



	for(int i=0; i<n; i++)
	{
		printf("%s\n",line[i]);
	}
}

