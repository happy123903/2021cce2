///C++
#include <iostream>
#include <vector>
char name[100][30];
int grade[100];
int main()
{
	int n;
	std::cin >> n; ///scanf("%d",&n);
	for(int i=0; i<n; i++){
		std::cin >> name[i] >> grade[i];
	}          ///��Ʃ��kŪ���ܼƸ�

	for(int i=0; i<n; i++){
		std::cout << name[i] << std::endl;///end line ��ܸ���
	}          ///�e�쥪�� << �ܼ�
}
