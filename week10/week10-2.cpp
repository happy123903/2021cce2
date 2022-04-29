#include <stdio.h>
#include <string.h>
int grade[100];
char name[100][30],tname[100];
int main()
{
    FILE * fin=fopen("input.txt", "r");
    int n;
    fscanf(fin, "%d", &n);///scanf("%d",&n);
    for(int i=0; i<n; i++){
        fscanf(fin, "%s %d",name[i],&grade[i]);
    }
    for(int k=0; k<n-1; k++){
        for(int i=0; i<n-1; i++){
            if(grade[i]<grade[i+1]){
                int t=grade[i]; grade[i]=grade[i+1]; grade[i+1]=t;
                strcpy(tname,name[i]);
                strcpy(name[i],name[i+1]);
                strcpy(name[i+1],tname);
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%s %d\n",name[i],grade[i]);
    }
}

