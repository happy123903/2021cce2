#include <stdio.h>
class Record{///C++����
public:///���}�����,�i�H�Q�O�Hmain()�ϥ�
    char name[30];
    int grade;
};
Record student[100];///��100���ǥ͸��
int main()
{
    FILE * fin=fopen("input.txt", "r");
    int n;
    fscanf(fin, "%d", &n);///scanf("%d",&n);
    for(int i=0; i<n; i++){
        fscanf(fin, "%s %d",student[i].name,&student[i].grade);
    }                              ///��               ��
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


