using namespace std;
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class Stud
{
    public:

            int Roll_No,Phy,Chem,Math;
            char Name[20];

            Stud();

            Stud(int RNo,int P,int C,int M);

           ~Stud();

            void Accept_Student_Details();
            void Display_Student_Details();
    private:

            int Tot;
            float Per;
            void Calculate_Result();
};

Stud :: Stud()
{
            cout<<"\n\n\t Inside Default Constructor";
}

Stud :: Stud(int RNo,int P,int C,int M)
{
            cout<<"\n\n\t Inside Parameterized Constructor";
           // Calculate_Result();
}

void Stud :: Accept_Student_Details()
{
            cout<<"\n\t\n===========================";

            cout<<"\n\n ***Enter Student Details***";

            cout<<"\n\n Enter Roll No = ";
            cin>>Roll_No;

            fflush(stdin);

            cout<<"\n Enter Name = ";
            gets(Name);

            cout<<"\n Enter Physics Mark = ";
            cin>>Phy;

            cout<<"\n Enter Chemistry Mark = ";
            cin>>Chem;

            cout<<"\n Enter Maths Mark = ";
            cin>>Math;

            cout<<"\n===========================";
            Calculate_Result();
}

void Stud :: Display_Student_Details()
{
            cout<<"\n===========================";

            cout<<"\n Display Of Student :";

            cout<<"\n\n Roll Number  = "<< Roll_No;
            cout<<"\n Student Name = "<< Name;
            cout<<"\n Physics Mark = "<< Phy;
            cout<<"\n Chem Mark    = "<< Chem;
            cout<<"\n Math Mark    = "<< Math;
            cout<<"\n Total Mark   = "<< Tot;
            cout<<"\n Percentage   = "<< Per;

}
 Stud :: ~Stud()
 {
            cout<<"\n\n Inside Destructor";
 }

void Stud :: Calculate_Result()
{
            Tot = Phy + Math + Chem;
            Per = ((float)(Tot)) / 3;
}

int main()
{
            Stud Std1;

            Std1.Accept_Student_Details();
            Std1.Display_Student_Details();
}

