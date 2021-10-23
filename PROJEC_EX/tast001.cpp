#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

int main(){
    fstream file;
    int q;
    int num;
    string text;
    

    file.open("tast001.txt",ios::in);
    if(!file)
	{
        
    }else{
        
        
        while (!file.eof())
        {
            file >> num >> text;
            cout << num << text << "\n" ; 
           
            
        }
            
            
            
        
    }
    
    
    
    

    file.close();
    return 0;
}