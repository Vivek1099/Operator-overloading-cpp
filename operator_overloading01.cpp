/* Q> Write a program to perform multiplication(*) binary operator using friend function.*/

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
    friend A operator *(A,A);
    void show()
    {
        cout<<endl<<"x="<<x<<" y="<<y<<" z="<<z;
    }
};

A operator *(A d,A m)
{
    A t;
    t.x=d.x * m.x;
    t.y=d.y * m.y;
    t.z=d.z * m.z;
    return t;
}

int main()
{
    A a(1,2,3),b(1,2,3),c;
    a.show();
    b.show();
    c=a*b;
    c.show();
    return 0;
}