#include <vector> ///vector<???> STL�\��
#include <iostream> ///cin �� cout
using namespace std;
int main()
{
    vector<int> v; ///v�Ovector�̭���int
    ///�A�S���L�n�h�j, �ҥHv��0��
    v.push_back(10);///��10��i�h, v��1��
    v.push_back(11);///��11��i�h, v��2��
    v.push_back(15);///��15��i�h, v��3��
                ///�j��|�Ψ쨺��i
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){///for(int i=0; i<n; i++)
        cout << *it << endl;  ///cout<<v[i]<<endl
    }
}

