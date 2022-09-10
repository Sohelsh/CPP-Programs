using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0,Dig = 0,Cnt = 0;

    cout<<endl<<"Enter Number = ";
    cin>>No;

    while(No != 0)
    {
        Dig = No % 10;
        Cnt++;
        No = No / 10;
    }
    cout<<"Count Of Numbers = "<<Cnt;

    getch();
    return 0;
}
