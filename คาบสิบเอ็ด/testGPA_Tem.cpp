#include <iostream>
#include <string.h>
using namespace std;
template <class T>
T score(T men, T HW, T te, T mid, T fi);
template <class T1>
string Calgrade(T1 total);
template <class T2>
string Calgrade1(T2 total);
template <class T3>
string Calgrade2(T3 total);

int main()
{
    int men, HW, te, mid, fi;
    string GPA;
    cout << "Mentality score [0-5] : "; cin >> men;
    cout << "Homework score [0-10] : "; cin >> HW;
    cout << "TestLab score [0-15] : "; cin >> te;
    cout << "Midterm score [0-35] : "; cin >> mid;
    cout << "Finalterm score [0-35] : "; cin >> fi;
    int total = score<int>(men, HW, te, mid, fi);
    string A = Calgrade(total);
    string g = Calgrade1(total);
    string s = Calgrade2(total);
    cout << "total score : " << total << endl;
    cout << "1st form grade : " << A << endl;
    cout << "2nd form grade : " << g << endl;
    cout << "Judging Criteria : " << s << endl;
    return 0;
}

template <class T>
T score(T men, T HW, T te, T mid, T fi)
{
    T total;
    total = men + HW + te + mid + fi;
    return (total);
}

template <class T1>
string Calgrade(T1 total)
{
    string GPA;
    if (total >= 80)
    {
        GPA = "A";
    }else if (total >= 70)
    {
        GPA = "B";
    }else if (total >= 60)
    {
        GPA = "C";
    }else if (total >= 50)
    {
        GPA = "D";
    }else
    {
        GPA = "F";
    }
    return GPA;
}

template <class T2>
string Calgrade1(T2 total)
{
    string G;
    if (total >= 80)
    {
        G = "A";
    }else if (total >= 75)
    {
        G = "B+";
    }else if (total >= 70)
    {
        G = "B";
    }else if (total >= 65)
    {
        G = "C+";
    }else if (total >= 60)
    {
        G = "C";
    }else if (total >= 55)
    {
        G = "D+";
    }else if (total >= 50)
    {
        G = "D";
    }else
    {
        G = "F";
    }
    return G;
}

template <class T3>
string Calgrade2(T3 total)
{
    string sc;
    if (total < 50)
    {
        sc = "not pass";
    }else 
    {
        sc = "pass";
    }
    return sc;
} 
    
