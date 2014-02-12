/*
Logic: Sorting by finding the location for each element in the array.
Sample output:

>/path/ ./a.out
4
55
44
66
23
23 44 55 66
> /path/

*/
#include<stdio.h>
void func(int limit);
int a[50];
void main(){
	int i=0,limit;
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
		scanf("%d",&a[i]);
	func(limit);
	for(i=0;i<limit;i++)
		printf("%d ",a[i]);
	printf("\n");

}
void func(int limit){
	int j,key,i;
	for(j=1;j<limit;j++)
	{
		key=a[j];
		i=j-1;
		while((i>=0)&&(a[i]>key))
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
}
