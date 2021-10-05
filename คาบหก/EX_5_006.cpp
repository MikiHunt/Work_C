#include <iostream>
using namespace std;
int main(){
	int choose;
	cout<<"1. Rectangle Area"<<endl;
	cout<<"2. Triangle Area"<<endl;
	cout<<"Enter your choose : ";
	cin>>choose;
	/*switch(choose){
		case 1:
			int width, length,Rectangle_Area;
			cout<<"Enter your width : ";
			cin>>width;
			cout<<"Enter your length : ";
			cin>>length;
			Rectangle_Area=width*length;
			cout<<"Rectangle Area : "<<Rectangle_Area;
			break;
		case 2:
			int  base, height,Triangle_Area;
			cout<<"Enter your base : ";
			cin>>base;
			cout<<"Enter your height : ";
			cin>>height;
			Triangle_Area=0.5*base*height;
			cout<<"Triangle Area : "<<Triangle_Area;
			break;
		
	}*/
	//OR
	if(choose==1){
		int width, length,Rectangle_Area;
			cout<<"Enter your width : ";
			cin>>width;
			cout<<"Enter your length : ";
			cin>>length;
			Rectangle_Area=width*length;
			cout<<"Rectangle Area : "<<Rectangle_Area;	
	}else
	if(choose==2){
		int  base, height,Triangle_Area;
			cout<<"Enter your base : ";
			cin>>base;
			cout<<"Enter your height : ";
			cin>>height;
			Triangle_Area=0.5*base*height;
			cout<<"Triangle Area : "<<Triangle_Area;
	}
	return 0;
}
