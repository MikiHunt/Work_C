#include <iostream>
#include <string.h>
using namespace std;
int isValidNumber(int IP_Addr);
string addressClass(int IP_Addr,int &numNet,int &numIP);
int main()
{

    int IP_Addr;
    int numNet,numIP,number;
    //string Class;
    cout << "Please enter the first digit : ";
    cin >> IP_Addr;
    number=isValidNumber(IP_Addr);

    if(!isValidNumber(IP_Addr)){
    	cout << "It is an invalid address." << endl;
	}else{
		cout << "The class is " <<addressClass(IP_Addr,numNet,numIP)<<endl;
    	cout << "The number of networks " << numNet << endl;
    	cout << "The number of IP addresses " << numIP << endl;
	}
    return 0;
}

int isValidNumber(int IP_Addr)
{   
	int number;
	
    if (IP_Addr >= 192 && IP_Addr <= 223)
    {
        number=IP_Addr;
    }
    if (IP_Addr >= 128 && IP_Addr <= 191)
    {
        number=IP_Addr;
    }
    if (IP_Addr = 1 && IP_Addr <= 127)
    {
        number=IP_Addr;
    }
    return number;
}

string addressClass(int IP_Addr,int &numNet,int &numIP)
{   
    string std_class;
    if (IP_Addr >= 192 && IP_Addr <= 223)
    {
        std_class="C";
        numNet=2097152;
        numIP=256;
    }
    if (IP_Addr >= 128 && IP_Addr <= 191)
    {
     	std_class="B";
     	numNet=16384;
        numIP=65536;
        
    }
    if (IP_Addr = 1 && IP_Addr <= 127)
    {
    	std_class="A";
    	numNet=127;
    	numIP=16777214;
    }
    return std_class;
}


    
