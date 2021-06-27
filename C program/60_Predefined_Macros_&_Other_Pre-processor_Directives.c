#define E 1111
#undef

#ifdef M
//execute code if true i.e., the macro is defined

#if condition 
// execute code if true i.e. condition satisfied

#if condition 
// execute code if true else pass it to #else
#else 
// execute code if “if condition” is false

#if condition 
// execute code if true else pass it to #elif
#elif expression 
// execute code if true else pass it to #else
#else 
//else code

#include <stdio.h>
int main()
{
                printf( “%d”__LINE__);
                return 0;
}

#include <stdio.h>
int main()
{
    printf("%d\n", __STDC__);
    return 0;
}