

#include<stdio.h>
void main()
{
  // Variable declaration
   int a = 2 ,b= 6,c =8, larg, small;


   

  // larg among a, b and c
  if(a>b)       //using condotion
  {
      if(a>c)
        larg = a;
      else
        larg = c;
  }
  else
  {
      if(b>c)
        larg = b;
      else
        larg = c;
  }
 // Small among a, b and c  //using condition//
  if(a<b)
  {
      if(a<c)
        small = a;
      else
        small = c;
  }
  else      //using condition
  {
      if(b<c)
        small = b;
      else
        small = c;
  }
//Display Largest Number
 printf("%d is largest number\n",larg);

//Display smallest number
 printf("%d is Smallest Number ",small);


}
