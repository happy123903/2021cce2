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
	}          ///資料往右讀到變數裡

	for(int i=0; i<n; i++){
		std::cout << name[i] << std::endl;///end line 表示跳行
	}          ///送到左邊 << 變數
}
