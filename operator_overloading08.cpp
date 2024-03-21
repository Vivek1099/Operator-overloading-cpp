/* Q> Write a program to add two complex numbers using friend function. */

#include<iostream>
using namespace std;
class a
{
    int r,i;
    public:
    a(){}
    a(int x, int y)
    {
        r=x;
        i=y;
    }
    friend a operator+(a,a);
    void print()
    {
        cout<<endl<<r<<" + i"<<i;
    }
};
a operator+(a m, a d)
    {
        a t;
        t.r=m.r + d.r;
        t.i=m.i + d.i;
        return t;
    }
int main()
{
    a a1(2,3),a2(4,5),a3;
    a3=a1+a2;
    a3.print();
    return 0;
}