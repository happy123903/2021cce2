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
	vector<student> stu(n);///�ҥ� vector ���ܼ� stu, �i�H��n��
	///�C�ӳ��Ostudnet stu�o���ܼ�,�i��n��studnet
	for(int i=0; i<n; i++){
		cin >> stu[i].name >> stu[i].grade;
		///cin >> name[i] >> grade[i];
	}

	for(int i=0; i<n; i++){
		cout << stu[i].name << " " << stu[i].grade << endl;
		///cout << name[i] << std::endl;
	}
}
