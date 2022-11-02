using namespace std;
#include<iostream>
#include<conio.h>

class Base
{
    public:

           int i, j;

           Base()
           {
               cout<< "\n\n Inside Base Constructor";
           }

           ~Base()
           {
               cout<< "\n\n Inside Base Destructor";
           }
};

class Derived1 : public Base
{
    public:

          int x , y;

          Derived1()
          {
              cout<< "\n\n Inside Derived1 Constructor";
          }

          ~Derived1()
          {
              cout<< "\n\n Inside Derived1 Destructor";
          }
};

class Derived2 : public Derived1
{
    public:

          int a , b;


          Derived2()
          {
              cout<< "\n\n Inside Derived2 Constructor";
          }

          ~Derived2()
          {
              cout<< "\n\n Inside Derived2  Destructor";
          }


};

int main()
{
        Base Obj1;

        Derived1 Obj2;

        Derived2 Obj3;

        cout<<endl << sizeof(Obj1) << endl;//4
        cout<<endl << sizeof(Obj2) << endl;//16
        cout<<endl << sizeof(Obj3) << endl;//24
}
