#include<stdio.h>
int main()    /* initliazing  */

{
    int a = 2, b = 6 , c = 8 , sum , product ; /* decalring number and operators as integer*/
 
    float avg;   /* declaring avg as float */

   
      
   sum = a + b + c ;  /* sum operators*/


    product = a*b*c; /* multiplication operators*/

     
    avg = (a+b+c)/3;  /* average operators*/

         
   printf(" the Sum of a,b and c = %d\n", sum);  /* displaying sum*/

    printf(" the product of a,b and c = %d\n", product); /*  displaying multipication*/


    printf(" the average of a,b and c = %f\n", avg); /* displaying average */


    
   return 0;
}

