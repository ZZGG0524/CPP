#include <iostream>

using namespace std;

class tree
{
private:
    int ages;
public:
    void grow(int years)
    {
        ages=years;
    }
    tree(int t);
    void age();
};
tree::tree(int t)
{
    ages=t;
}
void tree::age()
{
    cout<<ages<<endl;
}

int main()
{
    tree i(9);
    i.age();
    return 0;
}
