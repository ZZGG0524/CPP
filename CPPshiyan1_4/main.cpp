#include <iostream>

using namespace std;

class CPU
{
public:
    CPU();
    ~CPU()
    {
        cout<<"����CPU����������"<<endl;
    }
};

class RAM
{
public:
    RAM();
    ~RAM()
    {
        cout<<"����RAM����������"<<endl;
    }
};

class CDROM
{
public:
    CDROM();
    ~CDROM()
    {
        cout<<"����CDROM����������"<<endl;
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
        cout<<"����Computer����������"<<endl;
    }
};

Computer::Computer(CPU cpu,RAM ram,CDROM cdrom)
{
    cout<<"����Computer���캯����"<<endl;
}

CPU::CPU()
{
    cout<<"����CPU���캯����"<<endl;
}

RAM::RAM()
{
    cout<<"����RAM���캯����"<<endl;
}

CDROM::CDROM()
{
    cout<<"����CDROM���캯����"<<endl;
}

int main()
{
    CPU cpu;
    RAM ram;
    CDROM cdrom;
    Computer(cpu,ram,cdrom);
    return 0;
}
