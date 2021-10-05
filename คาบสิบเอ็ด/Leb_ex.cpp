#include<iostream>
#include<string>
using namespace std;
void main_menu();
void name_std(string &name,string &sur_name);
string str_pus(string name , string surname);
void demo1(string &name,int &i,int &mentality,int &HW,int &testlab,int &midterm,int &finalterm);
void cal_score(string &name,int &i,int &mentality,int &HW,int &testlab,int &midterm,int &finalterm);
string Calgrade(int total);


int main(){
	int menu,count=3,total[16];
	bool t = false;
	string name[16],sur_name[16];
	string std1[16];
	int mentality[16];
	int HW[16];
	int testlab[16];
	int midterm[16];
	int finalterm[16];
	do{
		
		main_menu();
		cin >> menu;
		if(menu == 1){
			system("cls");
			for(int i = 1 ;i<=count;i++){
				cout<<"student ["<<i<<"]"<<endl;
				name_std(name[i],sur_name[i]);
				std1[i]=str_pus( name[i] , sur_name[i]);
				
			}
			
		}if(menu == 2 ){
			system("cls");
			for(int i = 1 ;i<=count;i++){
				demo1(std1[i],i,mentality[i],mentality[i],testlab[i],midterm[i],finalterm[i]);
				
			}
			
		}if(menu == 3 ){
			
			for(int i = 1 ;i<=count;i++){
				cal_score(std1[i],i,mentality[i],mentality[i],testlab[i],midterm[i],finalterm[i]);
				
			}
		}
		

	//system("cls");
	}while(menu != 4);
	return 0;
}
void main_menu(){

	cout<<"\t\tMenu"<<endl;
	cout<<"1-[I]nput Name"<<endl;
	cout<<"2-[I]nput score"<<endl;
	cout<<"3-[C]alculate GPA"<<endl;
	cout<<"4-[E]xit"<<endl;
	cout<<"select menu : ";
	
}
string str_pus(string name , string surname){
	string pus;
	pus=name+" "+surname;
	return pus;
}
void name_std(string &name,string &sur_name){
	
	
		
		cout << "First name : ";cin>>name;
		cout << "Sur Name : ";cin>>sur_name;
}
void demo1(string &name,int &i,int &mentality,int &HW,int &testlab,int &midterm,int &finalterm){

	
		cout<<"Student ["<<i<<"]"<<endl;
		cout << "Name : "<<name<<endl;
		cout << "Mentality score [0-5] : "; cin >> mentality;
    	cout << "Homework score [0-10] : "; cin >> HW;
    	cout << "TestLab score [0-15] : "; cin >> testlab;
   		cout << "Midterm score [0-35] : "; cin >> midterm;
   		cout << "Finalterm score [0-35] : "; cin >> finalterm;
   		cout<<endl;
	

}
void cal_score(string &name,int &i,int &mentality,int &HW,int &testlab,int &midterm,int &finalterm){
	int total = mentality + HW + testlab + midterm + finalterm;
	cout<<"Student ["<<i<<"]"<<endl;
	cout << "Name : "<<name<<endl;
	cout << "Mentality score : "<<mentality<<endl;
	cout << "Homework score : "<<HW<<endl;
    cout << "TestLab score : "<<testlab<<endl;
   	cout << "Midterm score : "<<midterm<<endl;
   	cout << "Finalterm score : "<<finalterm<<endl;
   	cout << "score total : "<<total<<endl;
   	cout << "GPA : "<<Calgrade(total)<<endl<<endl;
	
}
string Calgrade(int total)
{
    string GPA;
    if (total >= 80)
    {
        GPA = "A";
    }else if (total >= 75)
    {
        GPA = "B+";
    }else if (total >= 70)
    {
        GPA = "B";
    }else if (total >= 65)
    {
        GPA = "C+";
    }else if (total >=60)
    {
        GPA = "C";
    }else if (total >=55)
    {
        GPA = "D+";
    }else if (total >=50)
    {
        GPA = "D";
    }else if (total <=49)
    {
        GPA = "F";
    }
    return(GPA);
}


