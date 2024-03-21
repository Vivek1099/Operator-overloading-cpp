/*Q> Write a program to perform plus(+) binary operator using member function. */

#include<iostream>
using namespace std;
class A
{
    int x,y,z;
    public:
    A(){}
    A(int i, int j, int k)
    {
        x=i;
        y=j;
        z=k;
    }
    A operator +(A d)
    {
        A t;
        t.x=x + d.x;
        t.y=y + d.y;
        t.z=z + d.z;
        return t;
    }
    void show()
    {
        cout<<endl<<"x="<<x<<" y="<<y<<" z="<<z;
    }
};
int main()
{
    A a(2,3,4),b(5,6,7),c;
    a.show();
    b.show();
    c=a+b;
    c.show();
    return 0;
}