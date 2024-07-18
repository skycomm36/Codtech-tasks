#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void Fun()
        {   cout<<"Base Fun\n"; }
        virtual void Gun()
        {   cout<<"Base Gun\n"; }
        void Sun()
        {   cout<<"Base Sun\n"; }
        virtual void Mun()
        {   cout<<"Base Mun\n"; }



};

class Derived : public Base
{
    public:
    int X,Y;
    virtual void Gun()
    {  cout<<"Derived Sun\n";   }
    virtual void Sun()
    {   cout<<"Derived Gun\n";  }
    virtual void Mun()
    {   cout<<"Derived Sun\n";  }



};

int main()
{
    Derived dobj;
    Base *bp = &dobj;
    

  bp->Fun();
  bp->Gun();
  bp->Sun();
  bp->Run();
  // bp->Run();


    return 0;
}