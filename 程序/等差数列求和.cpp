#include <iostream>
using namespace std;
int main()
{
    int start, end, difference;
    cout << "���";
    cin >> start;
    cout << "ĩ�";
    cin >> end;
    cout << "���";
    cin >> difference;
    //��һ�ֽⷨ
    int sum = 0;
    for (int i = start; i < end; i += difference)
    {
        sum += i;
    }
    cout << "�Ȳ��������Ϊ��" < < < sum << endl;
    return 0;
}