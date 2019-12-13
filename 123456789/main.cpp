#include <iostream>
#include <string>
using namespace std;
class Animal
{
private:
    int age;
public:
    Animal(int age):age(age)
    {
    }
    int getage()
    {
        return age;
    }
};
class Dog:public Animal
{
private:
    string color;
public:
    Dog(int age,string b):Animal(age),color(b)
    {
    }
    void showInfor();
};
void Dog::showInfor()
{
    cout<<"age:"<<Animal::getage()<<endl;
    cout<<"color:"<<color<<endl;
}
int main()
{
    Animal ani(5);
    cout<<"age of ani:"<<ani.getage()<<endl;
    Dog dog(5,"black");
    cout<<"infor of dog:"<<endl;
    dog.showInfor();
    return 0;
}
