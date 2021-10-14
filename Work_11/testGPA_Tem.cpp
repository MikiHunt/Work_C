#include <iostream>
#include <string.h>
using namespace std;
void in_put(int &men ,int &HW ,int &te ,int &mid ,int &fi);
int score(int men, int HW, int te, int mid, int fi);
string Calgrade(int total);
string Calgrade1(int total);
string Calgrade2(int total);
void dis_play(int &total,string &sr , string &an ,string &s );
int main()
{   
    int std =3;
    int men[20], hw[20], te[20], mid[20], fi[20],total[20];
    string GPA,sr[20],an[20],s[20];

    for(int i =1 ;i<=std;i++){

    in_put(men[i] , hw[i] , te[i] , mid[i] , fi[i]);

    total[i] = score(men[i], hw[i], te[i], mid[i], fi[i]);

    sr[i] = Calgrade(total[i]);
    an[i] = Calgrade1(total[i]);
    s[i] = Calgrade2(total[i]);

    dis_play( total[i], sr[i] ,  an[i] , s[i] );
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


int score(int men, int HW, int te, int mid, int fi)
{
    int total;
    total = men + HW + te + mid + fi;
    return (total);
}


string Calgrade(int total)
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

string Calgrade1(int total)
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

string Calgrade2(int total)
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
void dis_play(int &total,string &sr , string &an ,string &s ){

    cout << "total score : " << total << endl;
    cout << "1st form grade : " << sr << endl;
    cout << "2nd form grade : " << an << endl;
    cout << "Judging Criteria : " << s << endl;

}  
