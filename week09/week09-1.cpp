#include <stdio.h>
int a[10]={9,7,6,8,4,2,3,1,0,5};
int main()
{
    int n=10;
    for(int k=0; k<n-1; k++){
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                int t=a[i]; a[i]=a[i+1]; a[i+1]=t;
            }
        }
        for(int i=0; i<n; i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }

}
