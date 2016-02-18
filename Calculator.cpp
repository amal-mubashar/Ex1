# include <iostream>
# include "Calculator.h"
using namespace std;


int main (void)
{
	int option=0;
	int num1=0;
	int num2=0;
	while(1)
	{
		cout<<"************CALCULATOR*********\n";
		cout<<"select from Menu below\n";
		cout<<"1)Addition\n";
		cout<<"2)Subtraction\n";
		cout<<"3)Multiplication\n";
		cout<<"4)Division\n";
		cout<<"5)Check inequality\n";
		cout<< "0)EXIT\n";
		cin>>option;
		cout<<"Enter 2 numbers:";
		cin>>num1;
		cin>>num2;
		switch(option)
		{
		case 1:
			cout<<"The result of adding these 2 numbers is:"<< add(num1,num2);
			break;
		case 2:
			cout<<"The result of subtracting these 2 numbers is:"<< sub(num1,num2);
			break;
		case 3:
			cout<<"The result of multiplying these 2 numbers is:"<< multiply(num1,num2);
			break;
		case 4:
			cout<<"The result of dividing these 2 numbers is:"<< divide(num1,num2);
			break;
		case 5 :
			if(equality_check(num1,num2))
			{cout<<"The numbers are equal";}
			else
			{cout<<"The numbers are unequal";}
			break;
		case 0:
			return 0;
			break;
		default:
			cout<<"invalid option enter again";
		}

	system("CLS");
	}
	return 0;
}




