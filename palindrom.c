/*
Logic: Palindrome number
sample o/p

> /path/ ./a.out
12321
1
>/path/ ./a.out
123
0
>/path/ .a.out

*/
#include<stdio.h>
int func(int num);


void main(){
	int n=0;
	scanf("%d",&n);
	int result = func(n);
	printf("%d\n",result);
}

int func(int num){
	int rev=0,temp = num;
	while(temp!=0){
		rev=rev*10+temp%10;
		temp=temp/10;
	}
	if(num==rev)
		return 1;
	else
		return 0;
}