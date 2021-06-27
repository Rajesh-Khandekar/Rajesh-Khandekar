#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    int marks;
    printf("Enter the age\n");
    scanf("%d",&age);

    printf("Enter the marks\n");
    scanf("%d",&marks);

    switch (age)
    {
    case 18:
        printf("age is less than 18");
        switch (marks)
        {
        case 90:
            printf("you rewarded by A grade");
            break;
        
        default:
        printf("you are failed");
            break;
        }
        break;
    case 38:
        printf("age is equal to 18");
        break;
    case 68:
        printf("age is greater to 18");
        break;

    default:
    printf("the age is not valid");
        break;
    }
    return 0;
}

