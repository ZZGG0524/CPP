#include <iostream>

using namespace std;

int Max1(int x,int y)   //�Ƚ��������������ֵ
{
    return x>y?x:y;
}
int Max1(int x,int y,int z)  //�Ƚ��������������ֵ
{
    return (x>y?x:y)>z?(x>y?x:y):z;
}
double Max1(double x,double y)   //�Ƚ�����˫�����������ֵ
{
    return x>y?x:y;
}
double Max1(double x,double y,double z)  //�Ƚ�����˫�����������ֵ
{
    return (x>y?x:y)>z?(x>y?x:y):z;
}

int main()
{
    cout<<"����������������ֵ:";
    cout<<Max1(2,5)<<endl;
    cout<<"����������������ֵ:";
    cout<<Max1(2,5,9)<<endl;
    cout<<"�������˫�����������ֵ:";
    cout<<Max1(2.43,5.532)<<endl;
    cout<<"�������˫�����������ֵ:";
    cout<<Max1(2.5435,5.235,9.5223)<<endl;
    return 0;
}
