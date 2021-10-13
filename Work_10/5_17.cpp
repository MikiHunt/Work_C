#include <iostream>
#include <cstring>
using namespace std;
void UpperStr(char temp[80]);
int MaxInt(int Val1, int Val2);
void Swap(int &a,int &b);
int main()
{
    char Name[80];
    int N1, N2;
    cout << "Enter two number(n1 n2): ";
    cin >> N1 >> N2;                        // รับค่า  N1 N2
    cout << "Enter string : ";
    cin >> Name;                            // รับค่าตัวอักษร Name
    cout << endl;
    cout << "\n Before call function...";
    cout << "\n n1 = " << N1 << ", n2 = " << N2;    // แสดงผลออกหน้าจอ N1 N2 
    cout << ", string = " << Name;                  // แสดงผลตัวอักษรออกหน้าจอ Name
    cout << "\n Max value of n1 & n2 = " << MaxInt(N1,N2); // เรียกใช้ฟังก์ชั่น MaxInt โดยกันรับค่า N1 N2
    cout << "\n Press key to call function...";
    getchar();
    getchar();
    swap(N1, N2);                           //เรียกใช้ฟังก์ชั่น swap รับค่าจาก N1 N2
    UpperStr(Name);                         //เรียกใช้ฟังก์ชั่น UpperStr รับค่า Name ทำให้ Char เป้นตัวใหญ่
    cout << "\n After call function...";
    cout << "\n n1 = " << N1 << ", n2 = " << N2;  // แสดงผลออกหน้าจอ N1 N2 ที่ผ่านการใช้ฟังก์ชั่น
    cout << ", string = " << Name << endl;        // แสดงผลตัวอักษรออกหน้าจอ Name ที่ผ่านการใช้ฟังก์ชั่น
    return(0);
}
int MaxInt(int Val1, int Val2)
{
    return ((Val1 > Val2)? Val1 : Val2) ;
}
void Swap(int &a,int &b)
{
    int tmp;
    tmp = a; a = b; b = tmp;    //เป็นฟังก์ชั่นสลับตำแหน่งตัวงอักษร เอา a ไปพักค่าที่ tmp แล้วก็เอาค่า b มาแทนที่ค่า a แล้วก็เอาค่า tmp มาแทนค่าใน b
}
void UpperStr( char Str[80])
{
    if (strlen(Str) > 0)
    for( int index = 0 ; index < strlen(Str) ; index++)
    Str[index] = toupper(Str[index]);
}