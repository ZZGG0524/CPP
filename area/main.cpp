#include <iostream>

using namespace std;

class Rectangle
{
private:
   float length;
   float width;
public:
    Rectangle(float l,float w);
    float area();
};
Rectangle::Rectangle(float l,float w)
{
    length=l;
    width=w;
}
float Rectangle::area()
{
    return length*width;
}

int main()
{
    float j;
    Rectangle i(4,5);
    j=i.area();
    cout<<j<<endl;
    return 0;
}
