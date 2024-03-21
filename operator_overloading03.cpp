/* Q> Write a program to overload uniary operator(++) outside the class with no return type. */

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
    void operator ++();
    void show()
    {
        cout<<endl<<"x="<<x<<" y="<<y<<" z="<<z;
    } 
};
void A::operator ++()
{
    ++x;++y;z=-z;
}
int main()
{
    A a(2,3,4);
    a.show();
    ++a;
    a.show();
    return 0;
}