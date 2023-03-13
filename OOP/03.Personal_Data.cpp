using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
static int Pwd = 0;

class Data
{
    public:
            int B_Year;
            char Name[20];

            Data();
            Data(int Y,char Nm[]);
            void Get_Data();
            void Print_Data();

            ~Data();
    private:
            int Age,i;
            void Calculate_Age();
};

Data ::Data()
{
            cout<< "\n Default Constructor";
            B_Year = Age = i = 0;
}

Data ::Data(int Y,char Nm[])
{
            cout<< "\n Parameterized Constructor";

            B_Year = Y;
            strcpy(Name,Nm);

            Calculate_Age();
}

void Data ::Get_Data()
{
            cout<<"\n Enter Your Name :";
            gets(Name);

            cout<<"\n Enter Birthdays Year :";
            cin>>B_Year;

            cout<<"\n Enter Password :";
            cin>>Pwd;
            Calculate_Age();

}

void Data::Print_Data()
{
            cout<<"\n Your Name Is :"<<Name;
            cout<<"\n Your Age Is :"<<Age;


}

void Data::Calculate_Age()
{
            for(i = 2023;i > B_Year; i--)
            {
                Age++;
            }
}

Data::~Data()
{
            cout<<"\n\n Inside Destructor";
}

int main()
{
            int Check = 0;

            Data Obj1;

            Obj1.Get_Data();
            system("cls");

            printf("\n**Press Enter To Display Data**");
            getch();

            Up:
            printf("\n Enter Your Password :");
            scanf("%d",&Check);

            if(Check == Pwd)
            {
                 Obj1.Print_Data();
            }
            else
            {
                printf("\n Invalid Password");
                goto Up;
            }


            getch();
            return 0;
}
