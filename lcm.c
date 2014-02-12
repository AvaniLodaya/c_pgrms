/*
Logic: Find LCM
Sample o/p
Example1 :
>/path/ ./a.out
1
5

5
>/path/

Example2 :
>/path/ ./a.out
0
5

Error
>/path/
*/
#include<stdio.h>
int func(int a,int b);
int gcd(int a,int b);

void main(){
	int num1=0,num2=0;
	int lcm=0;
	scanf("%d%d",&num1,&num2);
	lcm = func(num1,num2);
	if(lcm!=0)
		printf("\n%d\n",lcm);
	else
		printf("\nError\n");	
}

int gcd(int a,int b){
	int t;
	if(a<b){
		while(b!=0){
			t=b;
			b=a%b;
			a=t;	
		}	
		return a;
	}	
	else
		return gcd(b,a);
}

int func(int a,int b){
	int sol;
	if(a!=0 && b!=0){
		sol = (a*b)/(gcd(a,b));
		return sol;
	}
	else return 0;
}

