///C++
#include <iostream>
#include <vector>
#include <algorithm>///「資料結構、演算法」的演算法
using namespace std;
class student{
public:
	char name[30];
	int grade;
};
bool compare(student a, student b)
{
	return a.grade > b.grade ;
}
int main()
{
	int n;
	cin >> n;
	vector<student> stu(n);
	for(int i=0; i<n; i++){
		cin >> stu[i].name >> stu[i].grade;
	}

	stable_sort(stu.begin(), stu.end(), compare);

	for(int i=0; i<n; i++){
		cout << stu[i].name << " " << stu[i].grade << endl;
	}
}
