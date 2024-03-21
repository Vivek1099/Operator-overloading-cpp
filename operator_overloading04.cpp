/* Q> Write a program to overload uniary operator(-) outside the class with return type. */

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
    A operator -();
    void show()
    {
        cout<<endl<<"x="<<x<<" y="<<y<<" z="<<z;
    } 
};
A A::operator -()
{
    A t;
    t.x=-x;
    t.y=-y;
    t.z=-z;
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