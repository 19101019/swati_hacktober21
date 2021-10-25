#include<stdio.h> 

int main()    
{    
  int number,remainder,sum=0,temp;       
  scanf("%d",&number);    // takes a number as input
  temp=number;    
  while(number>0)    
  {    
    remainder=number%10;    
    sum=(sum*10)+remainder;    
    number=number/10;    
  }    
  if(temp==sum)    {
    printf("palindrome number");    
  }
  else{    
    printf("not a palindrome number");   
  }
  return 0;  
} 
