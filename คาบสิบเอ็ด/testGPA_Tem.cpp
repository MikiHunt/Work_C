#include <iostream>
#include <string.h>
using namespace std;
void in_put(int &men ,int &HW ,int &te ,int &mid ,int &fi);
template <class T>
T score(T men, T HW, T te, T mid, T fi);
template <class T1>
string Calgrade(T1 total);
template <class T2>
string Calgrade1(T2 total);
template <class T3>
string Calgrade2(T3 total);
//void dis_play(int total,string A , string g ,string s );
int main()
{   
    int std =3;
    int men[20], HW[20], te[20], mid[20], fi[20],total[20];
    string GPA,A[20],g[20],s[20];

    for(int i =1 ;i<=std;i++){

    //in_put(men[i] , HW[i] , te[i] , mid[i] , fi[i]);

    total[i] = score<int>(men[i], HW[i], te[i], mid[i], fi[i]);

    A[i] = Calgrade(total[i]);
    g[i] = Calgrade1(total[i]);
    s[i] = Calgrade2(total[i]);

    //dis_play( total[i], A[i] ,  g[i] , s[i] );
    }

    return 0;
}
void in_put(int &men ,int &HW ,int &te ,int &mid ,int &fi){

    cout << "Mentality score [0-5] : "; cin >> men;
    cout << "Homework score [0-10] : "; cin >> HW;
    cout << "TestLab score [0-15] : "; cin >> te;
    cout << "Midterm score [0-35] : "; cin >> mid;
    cout << "Finalterm score [0-35] : "; cin >> fi;

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
void dis_play(int &total,string &A , string &g ,string &s ){

    cout << "total score : " << total << endl;
    cout << "1st form grade : " << A << endl;
    cout << "2nd form grade : " << g << endl;
    cout << "Judging Criteria : " << s << endl;

}  
