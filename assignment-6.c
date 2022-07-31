// 1. Write a program to calculate sum of first N natural numbers

// #include<stdio.h>
// int main(){
//     int i,num,sum=0;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++)
//     sum+=i;
//     printf("The sum of first %d natural numbers is %d",num,sum);
//     return 0;
// }

// 2. Write a program to calculate sum of first N even natural numbers

// #include<stdio.h>
// int main(){
//     int i,num,sum=0;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++)
//     sum+=2*i;
//     printf("The sum of first %d even natural numbers is %d",num,sum);
//     return 0;
// }

// 3. Write a program to calculate sum of first N odd natural numbers

// #include<stdio.h>
// int main(){
//     int i,num,sum=0;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++)
//     sum+=2*i-1;
//     printf("The sum of first %d odd natural numbers is %d",num,sum);
//     return 0;
// }

// 4. Write a program to calculate sum of squares of first N natural numbers

// #include<stdio.h>
// int main(){
//     int i,num,sum=0;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++)
//     sum+=i*i;
//     printf("The sum of squares of first %d natural numbers is %d",num,sum);
//     return 0;
// }

// 5. Write a program to calculate sum of cubes of first N natural numbers

// #include<stdio.h>
// int main(){
//     int i,num,sum=0;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++)
//     sum+=i*i*i;
//     printf("The sum of cubes of first %d natural numbers is %d",num,sum);
//     return 0;
// }

// 6. Write a program to calculate factorial of a number

// #include<stdio.h>
// int main(){
//     printf("\\\\");
//     return 0;
// }

// 7. Write a program to count digits in a given number

// #include<stdio.h>
// int main(){
//     int num,count=0,k;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     k=num;
//     while (num!=0){
//         num=num/10;
//         count++;
//     }
//     printf("The count of digits of %d is %d",k,count);
//     return 0;
// }

// 8. Write a program to check whether a given number is a Prime number or not

// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     if(num%1==0 && num%num==0)
//         printf("%d is a prime number",num);
//     else
//         printf("%d is not a prime number",num);
//     return 0;
// }


// 9. Write a program to calculate LCM of two numbers

// #include<stdio.h>
// int main(){
//     printf("\\\\");
//     return 0;
// }

// 10. Write a program to reverse a given number

#include<stdio.h>
int main(){
    int i,num,reverse;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    reverse+=i*i*i;
    printf("The reverse of a given number %d is %d",num,reverse);
    return 0;
}