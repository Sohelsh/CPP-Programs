using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>

class Calculator
{
        public:
               int No1,No2,Ans;

        Calculator();

        Calculator(int N1,int N2);

        void Add();

        void Sub();

        ~Calculator();


};
Calculator :: Calculator()
{
        cout<<endl<<"\n\t Inside Contructor";
        No1 = No2 = Ans = 0;
}
Calculator :: Calculator(int N1,int N2)
{
        No1 = N1;
        No2 = N2;
        Ans = 0;
}
void Calculator :: Add()
{
        Ans = No1 + No2;
}
void Calculator :: Sub()
{
        Ans = No1 - No2;
}
Calculator :: ~Calculator()
{
        cout<<endl<<"\n\t Inside Destructor";
}
int main()
{
    Calculator Obj1;

    cout<<"\n\n Entar 1st Number = ";
    cin>>Obj1.No1;

    cout<<"\n Entar 2nd Number = ";
    cin>>Obj1.No2;

    Obj1.Add();

    cout<<"\n Addition Of "<< Obj1.No1 <<" + "<< Obj1.No2 <<" = "<<Obj1.Ans;

    getch();

    Obj1.Sub();

    cout<<"\n\n Subtraction Of "<< Obj1.No1 <<" - "<< Obj1.No2 <<" = "<<Obj1.Ans;

    getch();

    Calculator Obj2(21,20);

    Obj2.Add();

    cout<<"\n\n Addition Of "<< Obj2.No1 <<" + "<< Obj2.No2 <<" = "<<Obj2.Ans;

    getch();
    return 0;

}
