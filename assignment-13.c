// 1. Write a recursive function to calculate sum of first N natural numbers
// #include<stdio.h>
// int sum(int);
// int main(int a){
//     printf("Enter a no: ");
//     scanf("%d",&a);
//     int p=sum(a);
//     printf("%d",p);
//     return 0;
// }
// int sum(int n){
//     if(n==1) return 1;
//     return n+sum(n-1);
// }

// 2. Write a recursive function to calculate sum of first N odd natural numbers
// #include<stdio.h>
// int odd(int);
// int main(int a){
//     printf("Enter a no: ");
//     scanf("%d",&a);
//     int p=odd(a);
//     printf("%d",p);
//     return 0;
// }
// int odd(int n){
//     if(n>0)
//     return 2*n-1+odd(n-1);
// }

// 3. Write a recursive function to calculate sum of first N even natural numbers
// #include<stdio.h>
// int odd(int);
// int main(int a){
//     printf("Enter a no: ");
//     scanf("%d",&a);
//     int p=odd(a);
//     printf("%d",p);
//     return 0;
// }
// int odd(int n){
//     if(n==0 || n==1) return 2;
//     return 2*n+odd(n-1);
// }

// 4. Write a recursive function to calculate sum of squares of first n natural numbers
// #include<stdio.h>
// int odd(int);
// int main(int a){
//     printf("Enter a no: ");
//     scanf("%d",&a);
//     int p=odd(a);
//     printf("%d",p);
//     return 0;
// }
// int odd(int n){
//     if(n>0)
//     return n*n+odd(n-1);
// }


// 5. Write a recursive function to calculate sum of digits of a given number
// #include<stdio.h>
// int SOD(int);
// int main(int a){
//     printf("Enter a no: ");
//     scanf("%d",&a);
//     int p=SOD(a);
//     printf("%d",p);
//     return 0;
// }
// int SOD(int n){
//     if(n==0) return 0;
//         int rem=n%10;
//         return rem+SOD(n/10);
    
// }

// 6. Write a recursive function to calculate factorial of a given number
// #include<stdio.h>
// int fact(int);
// int main(int a){
//     printf("Enter a no: ");
//     scanf("%d",&a);
//     int p=fact(a);
//     printf("%d",p);
//     return 0;
// }
// int fact(int n){
//     if(n==0 || n==1) return 1;
//         return n*fact(n-1);
    
// }

// 7. Write a recursive function to calculate HCF of two numbers
// #include<stdio.h>
// int hcf(int,int);
// int main(int a,int b){
//     printf("Enter a no: ");
//     scanf("%d%d",&a,&b);
//     int p=hcf(a,b);
//     printf("%d",p);
//     return 0;
// }
// int hcf(int n1,int n2){
//     if(n2!=0){
//         return hcf(n2,n1%n2);
//     }
//     return n1;
// }


// 8. Write a recursive function to print first N terms of Fibonacci series
// #include<stdio.h>
// int COD(int);
// int main(int a){
//     printf("Enter 2 no: ");
//     scanf("%d",&a);
//     for(int i=0;i<a;i++)
//     printf("%d ",COD(i));
//     return 0;
// }
// int COD(int base){
//     if(base==0 || base==1) return base;
//     return COD(base-1)+COD(base-2);
// }


// 9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int COD(int);
int main(int a){
    printf("Enter a no: ");
    scanf("%d",&a);
    int p=COD(a);
    printf("%d",p);
    return 0;
}
int COD(int n1){
    int count=0;
    if(n1>0){
         int rem=n1%10;
         count++;
         (n1/10);
         return;
    }else{
        return count;
    }
}

// 10. Write a program in C to calculate the power of any number using recursion.
// #include<stdio.h>
// int COD(int,int);
// int main(int a,int b){
//     printf("Enter 2 no: ");
//     scanf("%d%d",&a,&b);
//     int p=COD(a,b);
//     printf("%d",p);
//     return 0;
// }
// int COD(int base,int power){
//     if(power!=0){
//         return base*COD(base,power-1);
//     }
//     return 1;
// }

