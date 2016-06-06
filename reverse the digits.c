#include<stdio.h>
int main()
{
  int num,r=0,reverse;
  printf("enter a number");
  scanf("%d",&num);
  while(num)
  {
     r=num%10;
     reverse=reverse*10+r;
     num=num/10;
  }
  printf("reversed number is %d",reverse); 
}  
  
  
