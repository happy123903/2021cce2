///C++
#include <iostream>
#include <vector>
char name[100][30];
int grade[100];
using namespace std;///std::���Ʀn�h��,�i�H�ٲ�
int main()
{
	int n;
	cin >> n; ///scanf("%d",&n);
	for(int i=0; i<n; i++){
		cin >> name[i] >> grade[i];
	}          ///��Ʃ��kŪ���ܼƸ�

	for(int i=0; i<n; i++){
		cout << name[i] << std::endl;///end line ��ܸ���
	}          ///�e�쥪�� << �ܼ�
}
