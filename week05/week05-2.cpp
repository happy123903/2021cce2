#include <stdio.h>
int a[10]={9,8,7,5,6,4,1,2,3,0};
int main()
{
    for(int k=0; k<10-1; k++)
    {
        for(int i=0; i<10-1; i++)
        {
            if(a[i]>a[i+1])
            {
                int t=a[i]; a[i]=a[i+1]; a[i+1]=t;
            }
        }
        for(int i=0; i<10; i++) printf("%d ",a[i]);
        printf("\n");
    }

}
