using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

class student
{
    public:
           int R_No,Phy,Chem,Math;
           char Name[20];

           student();

           student(int R,int P,int C,int M,char Nm[]);


           void Add_Student();
           void Display_Student();

           ~student()
           {

                cout<< endl << "\n Destructor";
           }

    private:

           int Tot;
           float Per;
           void Cal_Mark();


};

student :: student()
{
            cout<< endl << "\n Default Constructor";

           R_No = Phy = Chem = Math = Tot = 0;
           Per = 0.0;
}

student :: student(int R,int P,int C,int M,char Nm[])
{
            cout<< endl << "\n Parameterized Constructor";

            R_No = R; Phy = P; Chem = C; Math = M;
            strcpy(Name,Nm);
            Cal_Mark();
}

void student::Add_Student()
{
            cout << endl <<"Enter Your Roll No :"<< endl;
            cin  >>R_No;
            fflush(stdin);
            cout << endl <<"Enter Your Name :"<< endl;
            gets(Name);
            cout << endl <<"Enter Your Physics Mark :"<< endl;
            cin >>Phy;
            cout << endl <<"Enter Your :"<< endl;
            cin >> Chem;
            cout << endl <<"Enter Your Maths Mark :"<< endl;
            cin >> Math;

            Cal_Mark();
}

void student :: Display_Student()
{
            cout << endl << "Student Roll Chemistry Mark Is : " << R_No;
            cout << endl << "Student Name Is : " << Name;
            cout << endl << "Student Physics Mark Is : " << Phy;
            cout << endl << "Student Chemistry Mark Is : " << Chem;
            cout << endl << "Student Maths Mark Is : " << Math;
            cout << endl << "Student Total Mark Is : " << Tot;
            cout << endl << "Student Percentage Is : " << Per;

}

void student :: Cal_Mark()
{
            Tot = Phy + Chem + Math;

            Per = ((float)(Tot))/ 3;
}

int main()
{
            student Obj;
            Obj.Add_Student();
            Obj.Display_Student();

            getch();
            return 0;
}
