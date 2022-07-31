// 1. Write a program to print MySirG N times on the screen

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the times you want to print MySirG on the screen: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     printf("\n MySirG");
//     return 0;
// }

// 2. Write a program to print the first N natural numbers.

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The first %d natural numbers: ",n);
//     for(i=1;i<=n;i++)
//     printf("\n%d",i);
//     return 0;
// }

// 3. Write a program to print the first N natural numbers in reverse order

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The first %d natural numbers in reverse order: ",n);
//     for(i=n;i>=1;i--)
//     printf("\n%d",i);
//     return 0;
// }

// 4. Write a program to print the first N odd natural numbers

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The first %d odd natural numbers: ",n);
//     for(i=1;i<=n;i++)
//     printf("\n%d",2*i-1);
//     return 0;
// }

// 5. Write a program to print the first N odd natural numbers in reverse order.

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The first %d odd natural numbers in reverse order: ",n);
//     for(i=n;i>=1;i--)
//     printf("\n%d",2*i-1);
//     return 0;
// }

// 6. Write a program to print the first N even natural numbers

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The first %d even natural numbers: ",n);
//     for(i=1;i<=n;i++)
//     printf("\n%d",2*i);
//     return 0;
// }

// 7. Write a program to print the first N even natural numbers in reverse order

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The first %d even natural numbers in reverse order: ",n);
//     for(i=n;i>=1;i--)
//     printf("\n%d",2*i);
//     return 0;
// }

// 8. Write a program to print squares of the first N natural numbers

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The squares of first %d natural numbers: ",n);
//     for(i=1;i<=n;i++)
//     printf("\n%d",i*i);
//     return 0;
// }

// 9. Write a program to print cubes of the first N natural numbers

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The cubes of first %d natural numbers: ",n);
//     for(i=1;i<=n;i++)
//     printf("\n%d",i*i*i);
//     return 0;
// }

// 10. Write a program to print a table of N.

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The table of %d: ",n);
    for(i=1;i<=n;i++)
    printf("\n%d * %d = %d",n,i,n*i);
    return 0;
}