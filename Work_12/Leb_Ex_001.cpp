#include<iostream>
#include<string.h>
using namespace std;
void IsPalindrome(char str[]);
int main(){

    char text[20];

    cout<<"Enter text : ";cin>>text;
    IsPalindrome(text);
    
    return 0;
}
void IsPalindrome(char str[])
{
    int i, length;
    int flag = 0;
    length = strlen(str);
    for(i=0;i < length ;i++){
        if(str[i] != str[length-i-1]){
            flag = 1;
            break;
        }
    }

    if (flag) {
        for (int i = 0; i < length; i++)
        {   
            length--;
             if (str[i]!=str[length-1])
            {
                cout<<str[i]<<" = "<<str[length]<<endl;
                break;
            }
        } 
        cout << "Your text is not a palindrome" << endl; 
    }    
    else {
        for (int i = 0; i < length/2; i++)
        {
            cout<<str[i]<<" = "<<str[i]<<endl;
        }
        cout << "Your text is a Palindrome." << endl; 
    }
}
