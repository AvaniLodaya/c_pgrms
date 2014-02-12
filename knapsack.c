/*
 * Logic: given n objects each with specific weight and value.
 * We require to fill an entire sack of weight W with any fractional amount of these weights such that calue is maximum. The output is the maximum value.
 * Note : max of 50 objects.
 * Sample output
 * Example 1:
  > /path/ ./a.out
  5
  5
  10
  20
  30
  40
  30
  20
  100
  90
  160
  60

  270.000000
  > /path/
 */
#include<stdio.h>
int w[50],W;
float v[50];

int min(float a, float b);
float func(float v[],int w[], int W,int num);
int sort(float p[], float v[], int w[], int num);

void main(){
  int i,num;
  float totalValue;
  scanf("%d",&num);
  for(i=0;i<num;i++){

    scanf("%d",&w[i]);
  }

  for(i=0;i<num;i++){

    scanf("%f",&v[i]);
  }
  scanf("%d",&W);
  totalValue=func(v,w,W,num);
  printf("\n%f\n",totalValue);

}

int sort(float p[], float v[], int w[], int num){
  int c,d;
  float swap;
  for (c = 0 ; c < num; c++)
  {
    for (d = 0 ; d < num- c - 1; d++)
    {
      if (p[d] < p[d+1])
      {
	swap = p[d];
	p[d] = p[d+1];
	p[d+1] = swap;

	swap = v[d];
	v[d] = v[d+1];
	v[d+1] = swap;

	swap = w[d];
	w[d] = w[d+1];
	w[d+1] = swap;

      }
    }
  }
}


int min(float a, float b){
  if(a>b)
    return b;
  else
    return a;
}


float func(float v[],int w[], int W,int num){
  int i;
  float totalValue=0.0, amount[50], p[50];
  static float solution[5];
  for(i=0;i<num;i++)
  {
    p[i]=v[i]/w[i];
  }
  sort(p,v,w,num);
  i=0;
  while(W>0){
    amount[i] = min(W,w[i]);
    solution[i]=amount[i];
    W=W-amount[i];
    i++;
  }
  i=0;
  while(solution[i]!=0){
    totalValue+=p[i]*amount[i];
    i++;
  }
  return totalValue;
}

