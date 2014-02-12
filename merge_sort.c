/*
Logic: Divide and conquer technique for merge sorting
Sample output:
> /path/ ./a.out
5
44
33
22
66
77
22 33 44 66 77
> /path/
*/

#include<stdio.h>
int a[20];
void func( int, int, int);
void sort(int low,int high){
    if(low<high){
        int mid;
        mid=(low+high)/2;
        sort(low,mid);
        sort(mid+1,high);
        func(low,mid,high);
    }
}
void func( int low, int mid, int high){
int h,i,j,k,b[20];
    h=low;
    i=low;
    j=mid+1;

    while((h<=mid)&&(j<=high)){

        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else{
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>mid){

        for(k=j;k<=high;k++){
            b[i++]=a[k];
        }
    }
    else{
        for(k=h;k<=mid;k++)
        { b[i++]=a[k];

        }
    }
    for(k=low;k<=high;k++)
        a[k]=b[k];
}

void main(){
    int num,i;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    sort(0,num-1);
    for(i=0;i<num;i++){
        printf("%d ",a[i]);
    }

}
