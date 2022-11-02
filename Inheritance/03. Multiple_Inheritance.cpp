using namespace std;
#include<iostream>
#include<conio.h>

class Base1
{
     public:

           int i, j;

           Base1()
           {
               cout<< "\n\n Inside Base1 Constructor";
           }

           ~Base1()
           {
               cout<< "\n\n Inside Base1 Destructor";
           }
};

class Base2
{
     public:

           int x, y;

           Base2()
           {
               cout<< "\n\n Inside Base2 Constructor";
           }

           ~Base2()
           {
               cout<< "\n\n Inside Base2 Destructor";
           }
};

class Base3
{
     public:

           int a, b;

            Base3()
           {
               cout<< "\n\n Inside Base3 Constructor";
           }

           ~Base3()
           {
               cout<< "\n\n Inside Base3 Destructor";
           }

};

class Derived : public Base1,Base2,Base3
{
    public:

           int S;


           Derived()
           {
               cout<< "\n\n Inside Derived Constructor";
           }

           ~Derived()
           {
               cout<< "\n\n Inside Derived Destructor";
           }
};

int main()
{
    Derived Obj;
    cout<<endl <<sizeof(Obj);
}

