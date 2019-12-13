#include <iostream>

using namespace std;

class Point
{
private:
    int x;
    int y;
public:
    void showPoint();
    Point(int xx=0,int yy=0)
    {
        x =xx;
        y =yy;
    }
    Point(Point &P)    //复制构造函数的实现
    {
        x=P.x;
        y=P.y;
    }
    ~Point()    //析构函数
    {
        cout<<"out"<<endl;
    }
};
/*Point::Point(int x,int y)
{

}*/
void Point::showPoint()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}
Point function()
{
    Point P(15,95);
    return P;
}
int main()
{
    Point i(4,5);
    Point p;
    Point j;
    j=function();
    p.showPoint();
    i.showPoint();
    j.showPoint();
    return 0;
}
