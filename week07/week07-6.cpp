#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2000][80];
		//2000¦æ 80¦r¥À
int compare(const void *p1, const void *p2)
{
	strcmp( (char*)p1,(char*)p2 );
}

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

	qsort(line,n,80,compare);

	for(int i=0; i<n; i++)
	{
		printf("%s\n",line[i]);
	}
}

