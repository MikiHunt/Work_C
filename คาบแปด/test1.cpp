#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string int_to_bin(int);
int bin_to_int(string);

int main()
{
    cout << "Binary / Decimal table" << endl;
    cout << "Number\tint_to_bin\tbin_to_int\tChar" << endl;

    for (int i = 0; i <= 127 ; i++)
    {
        string bin = int_to_bin(i);
        int dec = bin_to_int(bin);
        cout << i << "\t" << bin << "\t" << dec
             << "\t" << (char)i << endl;
    }

    return 0;
}

string int_to_bin(int n)
{
    string bin = "";
    while (n > 0)
    {
        bin = (n % 2 == 0 ? "0" : "1") + bin;
        n /= 2;
    }
    return bin;
}

int bin_to_int(string s)
{
    int len = s.length();
    int dec = 0;
    for (int i = 0; i < len; i++)
    {
        dec += ((int)s[i] - '0') * pow(2, len - i - 1);
    }
    return dec;
}
