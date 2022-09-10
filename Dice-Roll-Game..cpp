#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
	int num1,num2,psum=0,csum=0,checksum1=0,checksum2=0;
	char roll,play;
	string name;
	srand(time(0));
	cout<<"Enter The Name Of Player: "; cin>>name;
	do{
	do{
	cout<<endl<<name<<" Turn..."<<endl;
	cout<<"Press \"R\" to Roll the Dice Or \"E\" To Exi: "; cin>>roll;
	if (roll=='r'||roll=='R')
	{
		num1=(rand()%6)+1;
		cout<<num1<<endl;
		psum=psum+num1;
		checksum1=checksum1+num1;
	}
	}while(num1==6&&checksum1<18);
	
	if(checksum1==18)
	psum=psum-checksum1;
	cout<<name<<" Totall Score= "<<psum<<endl<<endl;
	checksum1=0;
	
	if(psum>=100)
	{
	cout<<"WOhOOooo!!! "<<name<<" You Have WON The Game...!"<<endl;
	return 0;}
	
	do{
	cout<<"Computer Turn: "<<endl;
	num2=(rand()%6)+1;
	cout<<num2<<endl;
	csum=csum+num2;
	checksum2=checksum2+num2;
	}while(num2==6&&checksum2<18);
	
	if(checksum2==18)
	csum=csum-checksum2;
	cout<<"Computer Totall Score= "<<csum<<endl;
	checksum2=0;
	
	if(csum>=100)
	cout<<"You Have LOST The Game...!"<<endl;
	
	}while(psum<100&&csum<100);
	

	
	
	if (roll=='E'||roll=='e')
	{
		cout<<"Game Ended";}
	return 0;
}
