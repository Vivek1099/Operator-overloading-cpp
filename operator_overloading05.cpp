/* Q> Write a program to overload uniary operator using friend function. */

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
    friend A operator -(A);
    void show()
    {
        cout<<endl<<"x="<<x<<" y="<<y<<" z="<<z;
    } 
};
A operator -(A m)
{
    A t;
    t.x=-m.x;
    t.y=+m.y;
    t.z=-m.z;
    return t;
}
int main()
{
    A a(2,3,4),b;
    a.show();
    b=-a;
    b.show();
    return 0;
}