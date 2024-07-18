#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void Fun()
        {   cout<<"Base Fun\n";}
        void Gun()
        {   cout<<"Base Gun\n";}
        void Sun()
        {   cout<<"Base Sun\n";}



};

class Derived : public Base
{
    public:
    int X,Y;
    void Gun()
    {  cout<<"Derived Sun\n";   }
    void Sun()
    {   cout<<"Derived Gun\n";  }
    void Gun()
    {   cout<<"Derived Sun\n";  }



};

int main()
{
    Base bobj;
    Derived dobj;

   Base *bp = NULL;
   Derived *dp = NULL;

  bp->Fun();
  bp->Gun();
  bp->Sun();
  bp->Run();
  // bp->Run();


    return 0;
}