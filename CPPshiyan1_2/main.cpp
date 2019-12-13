#include <iostream>

using namespace std;

void function(int &a,int b)    //形参b是用于与形参a做比较
{
    a++;
    b++;
    cout<<"子函数内a,b的值："<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

int main()
{
    int x=10,y=30;
    cout<<"未传参时x,y的值："<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    function(x,y);
    cout<<"已传参时x,y的值："<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    return 0;
}
