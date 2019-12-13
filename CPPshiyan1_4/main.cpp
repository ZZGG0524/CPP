#include <iostream>

using namespace std;

class CPU
{
public:
    CPU();
    ~CPU()
    {
        cout<<"调用CPU析构函数。"<<endl;
    }
};

class RAM
{
public:
    RAM();
    ~RAM()
    {
        cout<<"调用RAM析构函数。"<<endl;
    }
};

class CDROM
{
public:
    CDROM();
    ~CDROM()
    {
        cout<<"调用CDROM析构函数。"<<endl;
    }
};

class Computer
{
private:
    CPU cpu;
    RAM ram;
    CDROM cdrom;
public:
    void run();
    void stop();
    Computer(CPU cpu,RAM ram,CDROM cdrom);
    ~Computer()
    {
        cout<<"调用Computer析构函数。"<<endl;
    }
};

Computer::Computer(CPU cpu,RAM ram,CDROM cdrom)
{
    cout<<"调用Computer构造函数。"<<endl;
}

CPU::CPU()
{
    cout<<"调用CPU构造函数。"<<endl;
}

RAM::RAM()
{
    cout<<"调用RAM构造函数。"<<endl;
}

CDROM::CDROM()
{
    cout<<"调用CDROM构造函数。"<<endl;
}

int main()
{
    CPU cpu;
    RAM ram;
    CDROM cdrom;
    Computer(cpu,ram,cdrom);
    return 0;
}
