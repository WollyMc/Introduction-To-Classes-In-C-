//#include<iostream>

#include<stdlib.h>
#include<stdio.h>

//using namespace std;

class cal
{
	private:
		int in1,in2,sum,mul,div,sub;
	public:
		void input()
		{
			printf("Enter the number 1: ");
			scanf("%d",&in1);
			printf("\nEnter the number 2: ");
			scanf("%d",&in2);
		}
		void add()
		{
			sum=in1+in2;
			printf("\nThe sum is %d\n",sum);
		}
		void multiply()
		{
			mul=in1*in2;
			printf("\nThe multiplication is %d\n",mul);
		}
		void divide()
		{
			div=in1/in2;
			printf("\nThe divident is %d\n",div);
		}
		void subtract()
		{
			sub=in1/in2;
			printf("\nThe subtract is %d\n",sub);
		}
};

int main()
{
	cal one;
	int a;
	while(true){
	printf("\nWhat do you want to do: ");
	printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n");
	scanf("%d",&a);
	switch (a){
		case 1:
			one.input();
			one.add();
			break;
		case 2:
			one.input();
			one.subtract();
			break;
		case 3:
			one.input();
			one.multiply();
			break;
		case 4:
			one.input();
			one.divide();
			break;
		default:
			exit(0);
			break;
		}
	}
	return 0;
}
	
