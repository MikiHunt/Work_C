#include <iostream>
using namespace std;
int main(){
	
	int i,j,num;
        cout<<"Enter number : ";
        cin>>num;
        for(i=1;i<=num;i++){

               for(j=1;j<=i;j++){
                        cout<<"*";
                }
                cout<<"---\n";
            
        }
	return 0;
}
