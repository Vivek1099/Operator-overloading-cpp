/* Q> Write a program to differentiate between pre-increament and post-increament uniary operator using member function. */

#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    A(){}
    A(int i, int j)
    {
        x=i;
        y=j;
    }
    void operator ++(int) //Post increament/decreament
    {
        x++;y++;
    }
    void operator ++() //Pre increament/decreament
    {
        --x;--y;
    }
    void show()
    {
        cout<<endl<<"x="<<x<<" y="<<y;
    } 
};

int main()
{
    A a(2,3);
    a.show();
    a++;
    a.show();
    ++a;
    a.show();
    return 0;
}