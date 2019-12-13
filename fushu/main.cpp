#include <iostream>

using namespace std;

class complex
{
private:
    float x;
    float y;
public:
    complex(float x=0,float y=0):x(x),y(y)
    {
    }
    void add(complex c)
    {
        x+=c.x;
        y+=c.y;
    }
    void show()
    {
        cout<<x<<"+"<<y<<"i"<<endl;
    }
};
int main()
{
    complex c1(3,5);
    complex c2(4.5,0);
    c1.add(c2);
    c1.show();
    return 0;
}
