#include <stdio.h>
class Record{///C++物件
public:///公開的欄位,可以被別人main()使用
    char name[30];
    int grade;
};
Record student[100];///有100筆學生資料
int main()
{
    FILE * fin=fopen("input.txt", "r");
    int n;
    fscanf(fin, "%d", &n);///scanf("%d",&n);
    for(int i=0; i<n; i++){
        fscanf(fin, "%s %d",student[i].name,&student[i].grade);
    }                              ///的               的
    for(int k=0; k<n-1; k++){
        for(int i=0; i<n-1; i++){
            if(student[i].grade<student[i+1].grade){
                Record t=student[i];
                student[i]=student[i+1];
                student[i+1]=t;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}


