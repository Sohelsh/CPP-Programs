using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0,Cnt = 1;

    cout<<"Enter Number ="<<endl;
    cin>>No;

    while(Cnt <=  10)
    {
        cout<< No*Cnt <<endl;
        Cnt++;
    }


    getch();
    return 0;
}
