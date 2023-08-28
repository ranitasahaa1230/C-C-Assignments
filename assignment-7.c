// 1. Write a program to find the Nth term of the Fibonnaci series.

// #include<stdio.h>
// int main(){
//     int firstTerm=0,secondTerm=1,num,i,nextTerm;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(i=2;i<num;i++){
//         nextTerm=firstTerm + secondTerm;//1
//         firstTerm=secondTerm;
//         secondTerm=nextTerm;
//     }
//     printf("%d",nextTerm);
//     return 0;
// }

// 2. Write a program to print first N terms of Fibonacci series

// #include<stdio.h>
// int main(){
//     int n,firstTerm,secondTerm,nextTerm;
//     firstTerm=0;
//     secondTerm=1;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("1 ");
//     for(int i=0;i<n-1;i++){
//         nextTerm=firstTerm+secondTerm;
//         printf("%d ",nextTerm);
//         firstTerm=secondTerm;
//         secondTerm=nextTerm;
//     }
//     return 0;
// }

// 3. Write a program to check whether a given number is there in the Fibonacci series or not.

// #include<stdio.h>
// int main(){
//     int firstTerm=0,secondTerm=1,num,i,nextTerm;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     for(i=2;1;i++){//infinite loop
//         nextTerm=firstTerm + secondTerm;//1
//         firstTerm=secondTerm;
//         secondTerm=nextTerm;
//         if(num==nextTerm) {
//              printf("No found");
//              break;
//         } 
//         else if(nextTerm>num){
//             printf("Not found");
//             break;
//         } 
//     }
//     return 0;
// }

// 4. Write a program to calculate HCF of two numbers

// #include<stdio.h>
// int main(){
//     int n1,n2,gcd;
//     printf("Enter two nos:");
//     scanf("%d%d",&n1,&n2);
//     while(n1%n2!=0){
//         int rem=n1%n2;
//         n2=n1;
//         n1=rem;
//         gcd=n1;
//     }
//     printf("%d",gcd);
//     return 0;
// }


// 5. Write a program to check whether two given numbers are co-prime numbers or not

// #include<stdio.h>
// int main(){
//     int a,b,hcf=1,i;
//     printf("Enter 2 no");
//     scanf("%d %d",&a,&b);
//     int min=a<b? a:b;
//     for(i=1;i<=min;i++){
//         if((a%i==0) && (b%i==0))
//         hcf=i;
//     }
//     if(hcf==1) printf("co prime");
//     else printf("not co prime");
//     return 0;
// }

// 6. Write a program to print all Prime numbers under 100

// #include<stdio.h>
// int main(){
//  int count=0;
//     for(int i=2;i<=100;i++){
//          count=0;
//         for(int div=2;div*div<=i;div++){
//             if(i%div==0){
//             count=1;
//             break;
//             }
//         }
//         if(count==0)
//         printf("%d ",i);
//     }
//     return 0;
// }

// 7. Write a program to print all Prime numbers between two given numbers

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the terms:");
//     scanf("%d %d",&a, &b);
//     for(int i=a;i<=b;i++){
//             int count=0;
//         for(int div=2;div<=i/2;div++){
//             if(i%div==0){
//             count++;
//             break;
//             }
//         }
//         if(count==0)
//         printf("%d ",i);
//     }
//     return 0;
// }

// 8. Write a program to find next Prime number of a given number

// #include<stdio.h>
// int main(){
//  int count=0,n,i;
//  printf("Enter ano:");
//  scanf("%d",&n);
//     for(i=n;1;i++){//infinte loop
//          count=0;
//         for(int div=2;div<=i/2;div++){
//             if(i%div==0){
//             count=1;
//             break;
//             }
//         }
//         if(count==0){
//         printf("%d ",i);
//         break;
//         }
//     }
//     return 0;
// }

// 9. Write a program to check whether a given number is an Armstrong number or not

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n,arms=0,temp,count=0;
//     printf("Enter a no");
//     scanf("%d",&n);
//     temp=n;
//     while(temp!=0){//123
//         temp=temp/10;//12
//         count++;
//     }
//     temp=n;
//     while(temp!=0){//123
//         int rem=temp%10;//3
//         arms+=pow(rem,count);
//         temp=temp/10;//12
//     }
//     if(arms==n) printf("armstrong no");
//     else printf("not armstrong no");
//     return 0;
// }

// 10. Write a program to print all Armstrong numbers under 1000

#include<stdio.h>
#include<math.h>
int main(){
    int i,arms=0,cod=0,temp;
    for(int i=1;i<=1000;i++){
        temp=i;
        while(temp!=0){
            temp=temp/10;//12
            cod++;
        }
        temp=i;
        // while(temp!=0){
        //     int rem=temp%10;//12
        //     arms+=pow(rem,cod);
        //     temp=temp/10;
        // }
        // if(arms==i){
        //     printf("%d ",i);
        // }
        arms = pow(temp % 10, cod)
              + pow((temp % 100 - temp % 10) / 10, cod)
              + pow((temp % 1000 - temp % 100) / 100, cod);
        // Check for Armstrong Number
        if (arms == i) {
            printf("%d ", i);
        }
        cod = 0;
    }
    return 0;
}

