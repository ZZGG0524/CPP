#include <iostream>

using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};      //枚举

class CPU
{
private:
    CPU_Rank Rank;
    int frequency;
    float voltage;
public:
    void run();
    void stop();
    CPU(CPU_Rank r,int f,float v);     //构造函数
    ~CPU()    //析构函数
    {
        cout<<"调用析构函数。"<<endl;
    }
    CPU(CPU &C);      //复制构造函数
};

CPU::CPU(CPU_Rank r,int f,float v)
{
    cout<<"调用构造函数。"<<endl;
    Rank=r;
    frequency=f;
    voltage=v;
}

void CPU::run()
{
    cout<<"Rank="<<Rank<<endl;
    cout<<"frequency="<<frequency<<"(MHz)"<<endl;
    cout<<"voltage="<<voltage<<"(V)"<<endl;
}

void CPU::stop()
{
    return;
}

int main()
{
    CPU a(P6,5,5.02);
    a.run();     //调用run函数
    a.stop();    //调用stop函数
    return 0;
}
