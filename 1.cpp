#include<iostream>
using namespace std;
int exchanger(int ,int[],int);
int main()
{
	cout<<"welcom here . . . \n";
	char choice;
	do
	{	
		cout<<"enter a number :  ";
		int number;
		cin>>number;
		int coins[5]={1,2,5,50,10};
		cout<<"the result is : "<<exchanger(number,coins,0);
		cout<<"\n\ndo you want do it again ? (if yes,press y)\n";
		cin>>choice;
		system("cls");
	}while(choice=='y'||choice=='Y');
	cout<<"thanks for using "<<(char)2;
	return 0;
}
int exchanger(int number,int coins [5],int i)
{
	if(number<0)
	{
		return 0;
	}
	if(number==0)
	{
		return 1;
	}
	if(i==5&&number>0)
	{
		return 0;
	}
	return exchanger(number-coins[i],coins,i)+exchanger(number,coins,i+1);
}