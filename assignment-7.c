// 1. Write a program to find the Nth term of the Fibonnaci series.

// #include<stdio.h>
// int main(){
//     int firstTerm=0,secondTerm=1,num,i;
//     int nextTerm=firstTerm + secondTerm;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     printf("Fibonnaci Series : %d, %d ",firstTerm, secondTerm);
//     
//     return 0;
// }

// 2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>
int main(){
    int n,firstTerm,secondTerm,nextTerm;
    firstTerm=0;
    secondTerm=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Fibonacci series: %d %d ",firstTerm,secondTerm);
    for(int i=2;i<n;i++){
        nextTerm=firstTerm+secondTerm;
        printf("%d ",nextTerm);
        firstTerm=secondTerm;
        secondTerm=nextTerm;
    }
    return 0;
}

// 3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if((5*n*n+4)*(5*n*n+4) || (5*n*n-4)(5*n*n-4))
    return 0;
}

// 4. Write a program to calculate HCF of two numbers

// #include<stdio.h>
// int main(){
//     printf("\\\\");
//     return 0;
// }

// 5. Write a program to check whether two given numbers are co-prime numbers or not

// #include<stdio.h>
// int main(){
//     printf("\\\\");
//     return 0;
// }

// 6. Write a program to print all Prime numbers under 100

// #include<stdio.h>
// int main(){
//     printf("\\\\");
//     return 0;
// }

// 7. Write a program to print all Prime numbers between two given numbers

// #include<stdio.h>
// int main(){
//     printf("\\\\");
//     return 0;
// }

// 8. Write a program to find next Prime number of a given number

// #include<stdio.h>
// int main(){
//     printf("\\\\");
//     return 0;
// }

// 9. Write a program to check whether a given number is an Armstrong number or not

// #include<stdio.h>
// int main(){
//     printf("\\\\");
//     return 0;
// }

// 10. Write a program to print all Armstrong numbers under 1000

// #include<stdio.h>
// int main(){
//     printf("\\\\");
//     return 0;
// }