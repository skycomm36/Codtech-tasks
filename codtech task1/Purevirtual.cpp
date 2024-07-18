#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        Base()
        {   cout<<"Base constructor\n"; }
        int Addition(int i, int j)
        {   return i+j; }
        virtual int Substraction(int i, int j)
        {   return i-j;}
        virtual int Multiplication(int i,int j) =0;


};

class Derived : public Base
{
    public:
        int X,Y;
        {   cout<<"Derived constructor\n"   }
        int Substraction(int 1,int j)
        {   return i-j; }
        int Multiplication(int i,int j)
        {   return i*j; }
        virtual int Division(int i,int j)
        {   return i/j; }


};

int main()
{
    //Base bobj;
    Derived dobj;
    Base *bp = &dobj;

    cout<<bp->Addition(10,11)<<"\n";
    cout<<bp->Substraction(10,11)<<"\n";
    cout<<bp->Multiplication(10,11)<<"\n";
   // cout<<bp->Division(100,11)<<"\n";

    return 0;
}