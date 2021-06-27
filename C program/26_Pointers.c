/*#include<stdio.h>

void ptrfunc(int *ptr)
{
	*ptr=8;
}

int main()
{
	int x=5;

	printf("x=%d\n",x );
	printf(&x);
	printf("x=%d",x );
	return 0;
}*/
#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a=76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    printf("The address of some garbage is %p\n", ptr2);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    return 0;
}

