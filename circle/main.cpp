#include <iostream>

using namespace std;

class c1
{
private:
    double R;
public:
    float showArea();
    float showLength();
    c1(float r=0);
    void SetR(double r);
    ~c1()
    {

    }
};
float c1::showArea()
{
    return 3.14*R*R;
}
float c1::showLength()
{
    return 3.14*2*R;
}
c1::c1(float r)
{
    R=r;
}
void c1::SetR(double r)
{
    R=r;
}
int main()
{
    double r,a,b;
    cin>>r;
    c1 i;
    i.SetR(r);
    a=i.showArea();
    b=i.showLength();
    cout<<a<<endl<<b<<endl;
    return 0;
}
