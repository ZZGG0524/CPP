#include <iostream>

using namespace std;

int Max1(int a,int b)
{
    return a>b?a:b;
}
int Max1(int a,int b,int c)
{
    return a>b?(a>c?a:c):(b>c?b:c);
}
double Max1(double a,double b)
{
    return a>b?a:b;
}
double Max1(double a,double b,double c)
{
    return a>b?(a>c?a:c):(b>c?b:c);
}

int main()
{
    cout<<Max1(1,2)<<endl;
    cout<<Max1(1,2,3)<<endl;
    cout<<Max1(1.12,2.53)<<endl;
    cout<<Max1(1.24,2.25,3.52)<<endl;
    return 0;
}
