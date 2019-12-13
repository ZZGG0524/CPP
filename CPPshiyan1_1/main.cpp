#include <iostream>

using namespace std;

int Max1(int x,int y)   //比较两个整数的最大值
{
    return x>y?x:y;
}
int Max1(int x,int y,int z)  //比较三个整数的最大值
{
    return (x>y?x:y)>z?(x>y?x:y):z;
}
double Max1(double x,double y)   //比较两个双精度数的最大值
{
    return x>y?x:y;
}
double Max1(double x,double y,double z)  //比较三个双精度数的最大值
{
    return (x>y?x:y)>z?(x>y?x:y):z;
}

int main()
{
    cout<<"输出两个整数的最大值:";
    cout<<Max1(2,5)<<endl;
    cout<<"输出三个整数的最大值:";
    cout<<Max1(2,5,9)<<endl;
    cout<<"输出两个双精度数的最大值:";
    cout<<Max1(2.43,5.532)<<endl;
    cout<<"输出三个双精度数的最大值:";
    cout<<Max1(2.5435,5.235,9.5223)<<endl;
    return 0;
}
