#include <iostream>

using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};      //ö��

class CPU
{
private:
    CPU_Rank Rank;
    int frequency;
    float voltage;
public:
    void run();
    void stop();
    CPU(CPU_Rank r,int f,float v);     //���캯��
    ~CPU()    //��������
    {
        cout<<"��������������"<<endl;
    }
    CPU(CPU &C);      //���ƹ��캯��
};

CPU::CPU(CPU_Rank r,int f,float v)
{
    cout<<"���ù��캯����"<<endl;
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
    a.run();     //����run����
    a.stop();    //����stop����
    return 0;
}
