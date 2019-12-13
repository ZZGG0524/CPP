#include <iostream>

using namespace std;

class CPU
{
private:
    int Rank;
    int frequency;
    float voltage;
public:
    enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};      //ö��
    void run();
    void stop();
    CPU(int r,int f,float v);     //���캯��
    ~CPU()    //��������
    {
        cout<<"��������������"<<endl;
    }
    CPU(CPU &C);      //���ƹ��캯��
};

CPU::CPU(int r,int f,float v)
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

CPU::CPU(CPU &C)
{
    cout<<"���ø��ƹ��캯����"<<endl;
    Rank=C.Rank;
    frequency=C.frequency;
    voltage=C.voltage;
}

int main()
{
    CPU a(1,5,5.02);
    a.run();     //����run����
    a.stop();    //����stop����
    CPU b=a;    //���ø��ƹ��캯��
    b.run();
    b.stop();
    return 0;
}
