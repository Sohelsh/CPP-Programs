using namespace std;
#include<iostream>
#include<conio.h>


class Main_Class
{
    public:                                                            //Base Class
            int i, j;

            Main_Class()
            {
                    cout<< "\n\n Inside Main Class Constructor";
            }

            ~Main_Class()
            {
                    cout<< "\n\n Inside Main Class Destructor";
            }

            void Fun()
            {
                   cout<< "\n\n Main Class Function";
            }

};

class Derived : public Main_Class
{
    public:

           int x, y,z;

           Derived()
           {
                  cout<< "\n\n Inside Derived Constructor";
           }

           ~Derived()
           {
                  cout<< "\n\n Inside Derived Destructor";
           }

           void Gun()
           {
                  cout<< "\n\n Derived Class Function";
           }
};

int main()
{
           Main_Class Obj1; //8

           getch();

           Derived Obj2;    //20

           cout<< endl <<sizeof(Obj1) << endl;
           cout<< endl <<sizeof(Obj2) << endl;
}
