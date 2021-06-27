#include <stdio.h>


struct Driver
{
    char Name[34];
    char dlno [45];
    char route[47];
    int kms;
};
int main()
{
  struct Driver d1,d2,d3;
  printf("Enter the details of first driver \n");
   printf("Enter the name of first driver no.1\n");
   scanf("%s", &d1.Name);

   printf("Enter the dlno of first driver \n");
   scanf("%s", &d1.dlno);

   printf("Enter the route of first driver \n");
   scanf("%s", &d1.route);

    printf("Enter the kms of first driver \n");
   scanf("%d", &d1.kms);

     printf("Enter the details of second driver no.2 \n");
   printf("Enter the name of  second driver \n");
   scanf("%s", &d1.Name);

   printf("Enter the dlno of second driver \n");
   scanf("%s", &d1.dlno);

   printf("Enter the route of second driver \n");
   scanf("%s", &d1.route);
   
    printf("Enter the kms of second driver \n");
   scanf("%d", &d1.kms);

     printf("Enter the details of third driver no.3 \n");
   printf("Enter the name of third driver \n");
   scanf("%s", &d1.Name);

   printf("Enter the dlno of third driver \n");
   scanf("%s", &d1.dlno);

   printf("Enter the route of third driver \n");
   scanf("%s", &d1.route);
   
    printf("Enter the kms of third driver \n");
   scanf("%d", &d1.kms);
    

    printf("***********Printing information of thr drivers:***********\n");
    printf("For driver no.1 \n Name is %s",d1.Name);
    printf( " DL no is %s\n",d1.dlno);
    printf(" Route is %s\n",d1.route);
    printf(" Kms is %d\n",d1.kms);

    printf("For driver no.2 \n Name is %s",d1.Name);
    printf( " DL no is %s\n",d2.dlno);
    printf(" Route is %s\n",d2.route);
    printf(" Kms is %d\n",d2.kms);

    printf("For driver no. \n Name is %s",d1.Name);
    printf( " DL no is %s\n",d3.dlno);
    printf(" Route is %s\n",d3.route);
    printf(" Kms is %d\n",d3.kms);




     return 0;
}

