#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[50];
    cin >> str;
    char *p;
    p = str;
    cout << *p;
    cout << endl;
    p++;
    cout << *p << endl;
    p = str;
    cout << "��ͷ��β����ַ���" <<endl;
    for(int i = 0 ; i < strlen(str) ; i++ ){
        cout << *p << endl;
        p++;
    }
}