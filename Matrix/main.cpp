#include <iostream>

using namespace std;

class Matrix
{
private:
    int x,y;
public:
    Matrix(int x,int y):x(x),y(y)        //¹¹Ôìº¯Êı
    {

    }
    void input()
    {

    }
    void show()
    {

    }
    void transform()
    {

    }
    void getxy(int a,int b)
    {

    }

};

int main()
{
    int r,c;
    cin>>r>>c;
    Matrix m(r,c);
    m.input();
    cout<<"dates before:"<<endl;
    m.show();
    m.transform();
    cout<<"dates after:"<<endl;
    m.show();
    return 0;
}
