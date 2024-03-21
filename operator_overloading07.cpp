/* Q> Write a program to add two complex numbers using member function. */

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
    a operator+(a m)
    {
        a t;
        t.r=r + m.r;
        t.i=i + m.i;
        return t;
    }
    void print()
    {
        cout<<endl<<r<<" + i"<<i;
    }
};
int main()
{
    a a1(2,3),a2(4,5),a3;
    a3=a1+a2;
    a3.print();
    return 0;
}