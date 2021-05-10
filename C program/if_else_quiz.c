#include<stdio.h>
 int main()
 {   
  int subject;  
   printf("Choose the no.1 if you pass the both subjects \n");    
 printf("Choose the no.2 if you pass the maths subjects \n");     
printf("Choose the no.3 if you pass the science subjects \n");     
scanf("%d",&subject);     if(subject==1)    
 {      
   printf(" YOu are pass in both subject. so, you get the 45Rs\n");    
 }    
 else if(subject==2)      {         
 printf("You are pass the maths subject .so,you get the 15Rs\n");   
   }    
  else if(subject==3)     
 {       
   printf("You are pass the science subject .so,you get the 15Rs\n");     
 }     
 else     
  {         
   printf("You are fail .so better luck  on next time\n");   
   }      
return 0; 
 }

