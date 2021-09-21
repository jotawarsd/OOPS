#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;


typedef struct stu
{
    public:
    string name, roll, cls, div, dob, bld, add, phno;
    int sr;

};

struct stu inf[50];

class info
{ 
    public:
    void name(int i)
    {
        cout<< "Enter student's name: ";
        cin>> inf[i].name;
    }
    void roll(int i)
    {
        cout<< "Enter student's roll no.: ";
        cin>> inf[i].roll;
    }
    void cls(int i)
    {
        cout<< "Enter student's class: ";
        cin>> inf[i].cls;
    }
    void div(int i)
    {
        cout<< "Enter student's Division: ";
        cin>> inf[i].div;
    }
    void dob(int i)
    {
        cout<< "Enter student's DOB: ";
        cin>> inf[i].dob;
    }
    void bld(int i)
    {
        cout<< "Enter student's Blood Group: ";
        cin>> inf[i].bld;
    }
    void add(int i)
    {
        cout<< "Enter student's Address: ";
        cin>> inf[i].add;
    }
    void phno(int i)
    {
        cout<< "Enter student's Phone number: ";
        cin>> inf[i].phno;
    }
}i;


int main()
{
    info i;
    int n;
    string name;
    cout<< "Enter number of students (max 50): ";
    cin>> n;

    for(int l = 0; l < n; l++)
    {
        i.name(l);
        i.roll(l);
        i.cls(l);
        i.div(l);
        i.dob(l);
        i.bld(l);
        i.phno(l);
        i.add(l);
        inf[l].sr = l;
        cout<< endl;
        if(l != (n - 1))
        {
            cout<< "ENTER NEXT STUDENT'S DETAILS"<< endl;
        }

    }

    cout<< "Enter student's name to access details: ";
    cin>> name;

    for(int k = 0; k < n; k++)
    {
        if(inf[k].name == name)
        {
            cout<< "Name: "<< inf[k].name<< endl;
            cout<< "Roll no.: "<< inf[k].roll<< endl;
            cout<< "Class: "<< inf[k].cls<< endl;
            cout<< "Division: "<< inf[k].div<< endl;
            cout<< "Date of Birth: "<< inf[k].dob<< endl;
            cout<< "Blood Group: "<< inf[k].bld<< endl;
            cout<< "Address: "<< inf[k].add<< endl;
            cout<< "Phone number: "<< inf[k].phno<< endl;
        }
        else
        {
            cout<< "Not found!";
            break;
        }
    }
}