#include <iostream>

using namespace std;

class CPU
{
private:
    int Rank;
    int frequency;
    double voltage;
public:
    void run();
    void stop();
    CPU(int r,int f,int v)
    {
        Rank=r;
        frequency=f;
        voltage=v;
    }
    CPU(CPU &C)         //复制构造函数
    {
        Rank=C.Rank;
        frequency=C.frequency;
        voltage=C.voltage;
    }
    ~CPU()          //析构函数
    {

    }
};
void CPU::run()
{
    cout<<"Rank"<<"="<<Rank<<endl;
    cout<<"frequency"<<"="<<frequency<<"MHz"<<endl;
    cout<<"voltage"<<"="<<voltage<<endl;
}
void CPU::stop()
{
    ;
}
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};

int main()
{
    CPU i(1,2,3);
    i.run();
    i.stop();
    return 0;
}
