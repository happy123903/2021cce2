#include <stdio.h>
char line[2000];
int main()
{
	int t=1;
	while(scanf("%s",line)==1)
	{
		if(t>1) printf("\n");
		printf("box %d讀到一筆資料\n",t);
		t++;
	}
}
