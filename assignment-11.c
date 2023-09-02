// 1. Write a function to calculate LCM of two numbers. (TSRS)
// #include<stdio.h>
// int lcm(int,int);
// int main(int a,int b){
//     printf("Enter 2 no.");
//     scanf("%d%d",&a,&b);
//     int f=lcm(a,b);
//     printf("the lcm is %d",f);
//     return 0;
// }
// int lcm(int p,int q){
//     int n1=p;
//     int n2=q;
//     while(p%q!=0){
//         int rem=p%q;
//         p=q;
//         q=rem;
//     }
//     int gcd=q;
//     int lcm=(n1*n2)/gcd;
//     return lcm;
// }

// 2. Write a function to calculate HCF of two numbers. (TSRS)
// #include<stdio.h>
// int lcm(int,int);
// int main(int a,int b){
//     printf("Enter 2 no.");
//     scanf("%d%d",&a,&b);
//     int f=lcm(a,b);
//     printf("the hcf is %d",f);
//     return 0;
// }
// int lcm(int p,int q){
//     int n1=p;
//     int n2=q;
//     while(p%q!=0){
//         int rem=p%q;
//         p=q;
//         q=rem;
//     }
//     int gcd=q;
//     return gcd;
// }

// 3. Write a function to check whether a given number is Prime or not. (TSRS)

// #include<stdio.h>
// int prime(int);
// int main(int a){
//     printf("Enter a no.");
//     scanf("%d",&a);
//     prime(a);
//     return 0;
// }
// int prime(int p){
//     int flag=1;
//     if(p==1){
//         printf("not prime");
//     }
//     else if(p>1){
//             for(int i=2;i<p;i++){
//                 if(p%i==0){
//                     flag=0;
//                     break;
//                 }
//             }
//         if(flag){
//             printf("prime");
//         }
//         else printf("not prime");
//     }

// }

// 4. Write a function to find the next prime number of a given number. (TSRS)

// #include<stdio.h>
// void printNPrime(int);
// int main(int p){
//     printNPrime(p);
//     return 0;
// }
// void printNPrime(int a){
//     printf("Enter the no:");
//     scanf("%d",&a);
//     int i;
//     int flag=1,count=0;
//         for(int i=2;i<a;i++){
//             if(a%i==0){
//                 flag=0;
//                 count++;
//                 break;
//             }
//         }
//         if(flag==1)
//             printf("prime %d",count);
//     }

// 5. Write a function to print first N prime numbers (TSRN)
// #include<stdio.h>
// void printNPrime(int);
// int main(int p){
//     printNPrime(p);
//     return 0;
// }
// void printNPrime(int a){
//     printf("Enter the terms:");
//     scanf("%d",&a);
//     for(int i=0;i<a;i++){
//         int isPrime=0;
//         for(int div=2;div*div<=i;div++){
//             if(i%div==0){
//                 isPrime++;
//                 break;
//             }
//         }
//         if(isPrime==0)
//             printf("%d",i);
//     }
// }


// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
// #include<stdio.h>
// void printNPrime(int,int);
// int main(int p,int q){
//     printNPrime(p,q);
//     return 0;
// }
// void printNPrime(int a,int b){
//     printf("Enter the terms:");
//     scanf("%d %d",&a, &b);
//     for(int i=a;i<=b;i++){
//             int count=0;
//         for(int div=2;div*div<=i;div++){
//              if (i%div==0)
//             {
//                 count++;
//                 break;
//             }
//         }
//          if(count==0)
//             printf("nos are %d ",i);
//     }
// }

// 7. Write a function to print first N terms of Fibonacci series (TSRN)
// #include<stdio.h>
// void printFibo(int);
// int main(int p){
//     printFibo(p);
//     return 0;
// }
// void printFibo(int a){
//     printf("Enter the terms:");
//     scanf("%d",&a);
//     int firstTerm=0,secondTerm=1;
//     printf("%d %d ", firstTerm, secondTerm);
//     for(int i=2;i<a;i++){
//         int c=firstTerm+secondTerm;
//         printf(" %d ", c);
//         firstTerm=secondTerm;
//         secondTerm=c;
//     }
// }

// 8. Write a function to print PASCAL Triangle. (TSRN)[fact,comb,for]

// #include<stdio.h>
// int pascal(int);
// int main(int a){
//     printf("Enter a no.");
//     scanf("%d",&a);
//     pascal(a);
//     return 0;
// }
// int  fact(int n){
//     int facti=1;
//     for(int i=1;i<=n;i++){
//         facti=facti*i;
//     }
//     return facti;
// }
// int comb(int n,int r){    
//     return fact(n)/(fact (r)*fact(n-r));
// }
// int pascal(int c){
//     for(int i=0;i<=c;i++){
//         for(int j=0;j<=i;j++){
//             printf("%d ",comb(i,j));
//         }
//         printf("\n");
//     }
// }


// 9. Write a program in C to find the square of any number using the function.

// #include<stdio.h>
// int square(int);
// int main(int a){
//     int m=square(a);
//     printf("the square is %d",m);
//     return 0;
// }
// int square(int p){
//     printf("Enter a no:");
//     scanf("%d",&p);
//     return p*p;
// }
// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
// function.
// #include<stdio.h>
// int sumF(int);
// int main(int a){
// a=sumF(5);
//  printf("%d",a);
//  return 0;
// }
// int fact(int s){
//     int facti=1;
//     for(int i=1;i<=s;i++){
//         facti=i*facti;
//     }
//     return facti;
// }
// int sumF(int s){
//     int sum=0;
//     for(int i=1;i<=s;i++){
//         sum=sum+fact(i)/i;
//     }
//     return sum;
// }