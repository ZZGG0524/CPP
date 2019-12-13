#include <iostream>

using namespace std;

class point
{
private:
    int x;
    int y;
public:
    point(int xx,int yy);
    void Move(int i,int j);
    void Show();
};
point::point(int xx,int yy)
{
    x=xx;y=yy;
}
void point::Move(int i,int j)
{
    x+=i;
    y+=j;
}
void point::Show()
{
    cout<<"("<<"x"<<","<<"y"<<")"<<"="<<"("<<x<<","<<y<<")"<<endl;
}

int main()
{
    point p(3,5);
    p.Move(5,6);
    p.Show();
    return 0;
}
