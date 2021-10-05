#include <iostream>
#include <string.h>
using namespace std;
void Calscore(int &mentality,int &HW,int &testlab,int &midterm,int &finalterm);
template <class c>
c Caltotal(c mentality,c HW,c testlab,c midterm,c finalterm);
void Print(int &total,string &a,string &g,string &s);
template <class t1>
string Calgrade1(t1 total);
template <class t2>
string Calgrade2(t2 total);
template <class t3>
string pass_not(t3 total);
int main()
{
    int std = 3, total[20];
    int mentality[16], HW[16], testlab[16], midterm[36], finalterm[36];
    string GPA1[20],passornot[20],GPA2[20];
    for (int i = 1; i <= std; i++)
    {
        cout << "Student [" << i << "]" << endl;
        Calscore(mentality[i], HW[i], testlab[i], midterm[i], finalterm[i]);
        total[i] = Caltotal(mentality[i], HW[i], testlab[i], midterm[i], finalterm[i]);
        GPA1[i]=Calgrade1(total[i]);
        GPA2[i]=Calgrade2(total[i]);
        passornot[i]=pass_not(total[i]);
        Print(total[i],GPA1[i],GPA2[i],passornot[i]);
    }
    return 0;
}

void Calscore(int &mentality,int &HW,int &testlab,int &midterm,int &finalterm)
{
    cout << "Mentality score [0-5] : "; cin >> mentality;
    cout << "Homework score [0-10] : "; cin >> HW;
    cout << "TestLab score [0-15] : "; cin >> testlab;
    cout << "Midterm score [0-35] : "; cin >> midterm;
    cout << "Finalterm score [0-35] : "; cin >> finalterm;
}
template <class c>
c Caltotal(c mentality,c HW,c testlab,c midterm,c finalterm)
{	
    int total = mentality + HW + testlab + midterm + finalterm;
    return(total);
}
template<class t1>
string Calgrade1(t1 total)
{
    string GPA1;
    if (total >= 80)
    {
        GPA1 = "A";
    }else if (total >= 70)
    {
        GPA1 = "B";
    }else if (total >= 60)
    {
        GPA1 = "C";
    }else if (total >= 50)
    {
        GPA1 = "D";
    }else
    {
        GPA1 = "F";
    }
    return GPA1;
}
template<class t2>
string Calgrade2(t2 total)
{
    string GPA;
    if (total >= 80)
    {
        GPA = "A";
    }else if (total >= 75)
    {
        GPA = "B+";
    }else if (total >= 70)
    {
        GPA = "B";
    }else if (total >= 65)
    {
        GPA = "C+";
    }else if (total >=60)
    {
        GPA = "C";
    }else if (total >=55)
    {
        GPA = "D+";
    }else if (total >=50)
    {
        GPA = "D";
    }else if (total <=49)
    {
        GPA = "F";
    }
    return(GPA);
}

template<class t3>
string pass_not(t3 total){
    string passornot;
    if(total>=50){
        passornot="PASS";
    }else if(total<=49){
        passornot="NOT PASS";
    }
    return passornot;
}

void Print(int &total,string &a,string &g,string &s)
{
	
    cout << "total score : " << total << endl;
    cout << "1st form grade : " << a << endl;
    cout << "2nd form grade : " << g << endl;
    cout << "Pass or NotPass : " << s << endl;
    cout << "=======================================================" << endl;
    total=0;
}