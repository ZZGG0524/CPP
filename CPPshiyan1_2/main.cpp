#include <iostream>

using namespace std;

void function(int &a,int b)    //�β�b���������β�a���Ƚ�
{
    a++;
    b++;
    cout<<"�Ӻ�����a,b��ֵ��"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

int main()
{
    int x=10,y=30;
    cout<<"δ����ʱx,y��ֵ��"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    function(x,y);
    cout<<"�Ѵ���ʱx,y��ֵ��"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    return 0;
}
