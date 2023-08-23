// 1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    sum+=i;
    printf("The sum of first %d natural numbers is %d",num,sum);
    return 0;
}

// 2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    sum+=2*i;
    printf("The sum of first %d even natural numbers is %d",num,sum);
    return 0;
}

// 3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    sum+=2*i-1;
    printf("The sum of first %d odd natural numbers is %d",num,sum);
    return 0;
}

// 4. Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    sum+=i*i;
    printf("The sum of squares of first %d natural numbers is %d",num,sum);
    return 0;
}

// 5. Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    sum+=i*i*i;
    printf("The sum of cubes of first %d natural numbers is %d",num,sum);
    return 0;
}

// 6. Write a program to calculate factorial of a number

#include<stdio.h>
int main(){
    int num,fact=1,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("The factorial of a number %d is %d",num,fact);
    return 0;
}

// 7. Write a program to count digits in a given number

#include<stdio.h>
int main(){
    int num,count=0,k;
    printf("Enter the number: ");
    scanf("%d",&num);
    k=num;
    while (num!=0){
        num=num/10;
        count++;
    }
    printf("The count of digits of %d is %d",k,count);
    return 0;
}

// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main(){
    int num,i,flag=0;
    printf("Enter the number: ");
    scanf("%d",&num);//5
    for(i=2;i<=sqrt(num);i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(num<=1)
        flag=1;

        if(flag==0)
            printf("%d is a prime number",num);
        else
        printf("%d is not a prime number",num);
    return 0;
}

// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>
int main(){
    int num1,num2,max_div,flag=1;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    max_div=(num1>num2) ? num1 : num2;
    while(flag){
        if(max_div % num1 == 0 && max_div % num2==0){
                printf("The LCM of two numbers %d and %d is %d",num1,num2,max_div);
                break;
        }
        ++max_div;
    }
    return 0;
}

// OR

// #include<stdio.h>
// int main(){
//     int num1,num2,n1,n2,gcd,lcm,rem;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&num1,&num2);
//     n1=num1;
//     n2=num2;
//     while(num1%num2!=0){
//         rem=num1%num2;
//         num1=num2;
//         num2=rem;
//     }
//     gcd=num2;
//     lcm=(n1*n2)/gcd;
//     printf("The LCM of two numbers %d and %d is %d",n1,n2,lcm);
//     return 0;
// }

// 10. Write a program to reverse a given number

#include<stdio.h>
int main(){
    int num,reverse=0,k,rem;
    printf("Enter the number: ");
    scanf("%d",&num);
    k=num;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    printf("The reverse of a given number %d is %d",k,reverse);
    return 0;
}
// OR

// #include<stdio.h>
// int main(){
//     int n, temp,k;
//     printf("Enter a no:");
//     scanf("%d",&n);
//     temp=n;
//     while(temp!=0){//532
//         k=temp%10;//2
//         printf("%d",k);
//         temp=temp/10;//53
//     }
// }
// //