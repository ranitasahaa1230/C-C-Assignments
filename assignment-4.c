// 1. Write a program to print MySirG 5 times on the screen

#include<stdio.h>
int main(){
    for(int i=0;i<5;i++)
    printf("\n MySirG");
    return 0;
}

// 2. Write a program to print the first 10 natural numbers.

#include<stdio.h>
int main(){
    printf("The first 10 natural numbers: ");
    for(int i=1;i<=10;i++)
    printf("\n%d",i);
    return 0;
}

// 3. Write a program to print the first 10 natural numbers in reverse order

#include<stdio.h>
int main(){
    printf("The first 10 natural numbers in reverse order: ");
    for(int i=10;i>=1;i--)
    printf("\n%d",i);
    return 0;
}

// 4. Write a program to print the first 10 odd natural numbers

#include<stdio.h>
int main(){
    printf("The first 10 odd natural numbers: ");
    for(int i=1;i<=10;i++)
    printf("\n%d",2*i-1);
    return 0;
}

// 5. Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main(){
    printf("The first 10 odd natural numbers in reverse order: ");
    for(int i=10;i>=1;i--)
    printf("\n%d",2*i-1);
    return 0;
}

// 6. Write a program to print the first 10 even natural numbers

#include<stdio.h>
int main(){
    printf("The first 10 even natural numbers: ");
    for(int i=1;i<=10;i++)
    printf("\n%d",2*i);
    return 0;
}

// 7. Write a program to print the first 10 even natural numbers in reverse order

// #include<stdio.h>
// int main(){
//     printf("The first 10 even natural numbers in reverse order: ");
//     for(int i=10;i>=1;i--)
//     printf("\n%d",2*i);
//     return 0;
// }

// OR

#include<stdio.h>
int main(){
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    printf("The first 10 even natural numbers in reverse order: ");
    while (i)
    {
        printf("\n%d",2*i);
        i--;
    }
    return 0;
}

// 8. Write a program to print squares of the first 10 natural numbers

#include<stdio.h>
int main(){
    int i;
    printf("The squares of the first 10 natural numbers: ");
    for(i=1;i<=10;i++)
    printf("\n%d",i*i);
    return 0;
}

// 9. Write a program to print cubes of the first 10 natural numbers

#include<stdio.h>
int main(){
    int i;
    printf("The cubes of the first 10 natural numbers: ");
    for(i=1;i<=10;i++)
    printf("\n%d",i*i*i);
    return 0;
}

// 10. Write a program to print a table of 5.

#include<stdio.h>
int main(){
    int i=1;
    printf("The table of 5: ");
    do
    {
        printf("\n %d*%d=%d",5,i,(5*i));
        i++;
    } while (i<=10);
    return 0;
}

// OR

// #include <stdio.h>
// int main()
// {
//     printf("The table of 5: ");
//     for (int i = 1; i <= 10; i++)
//         printf("\n %d * %d = %d", 5, i, (5 * i));
//     return 0;
// }
