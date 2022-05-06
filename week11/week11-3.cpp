///C++
#include <iostream>
#include <vector>
using namespace std;
class student{
public:
	char name[30];
	int grade;
};
int main()
{
	int n;
	cin >> n; ///scanf("%d",&n);
	vector<student> stu(n);///啟用 vector 的變數 stu, 可以裝n個
	///每個單位是studnet stu這個變數,可裝n個studnet
	for(int i=0; i<n; i++){
		cin >> stu[i].name >> stu[i].grade;
		///cin >> name[i] >> grade[i];
	}

	for(int i=0; i<n; i++){
		cout << stu[i].name << " " << stu[i].grade << endl;
		///cout << name[i] << std::endl;
	}
}
