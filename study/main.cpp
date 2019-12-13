#include <iostream>

using namespace std;

class clock         //¿‡
{
    private:
    int hour;
    int minute;
    int second;
    public:
        void Gettime(int a,int b,int c);
        void Showtime();
        clock(int a,int b,int c);
        /*{
            hour=a;minute=b;second=c;
        }
        void Gettime(int a,int b,int c)
        {
            hour=a;minute=b;second=c;
        }
        void Showtime()
        {
            cout<<hour<<":"<<minute<<":"<<second<<endl;
        }*/
};
void clock::Gettime(int a,int b,int c)
{
    hour=a;minute=b;second=c;
}
void clock::Showtime()
{
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}
clock::clock(int a,int b,int c)
{
    hour=a;minute=b;second=c;
}
int main()
{
    clock i(15,54,59);
   // i.Gettime(12,48,45);
    i.Showtime();
    return 0;
}
