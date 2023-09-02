// 1. Write a recursive function to print first N natural numbers
// #include<stdio.h>
// void printN (int);
// int main(int a){
//     printf("Enter a no");
//     scanf("%d",&a);
//     printN(a);
//     return 0;
// }
// void printN(int p){
//     if(p>0)
//     {
//         printN(p-1);
//         printf("%d\n ",p);
//     }
    
// }

// 2. Write a recursive function to print first N natural numbers in reverse order
// #include<stdio.h>
// void reverse (int);
// int main(int a){
//     printf("Enter a no");
//     scanf("%d",&a);
//     reverse(a);
//     return 0;
// }
// void reverse(int p){
//     if(p>0)
//     {
//         printf("%d\n ",p);
//         reverse(p-1);
//     }
// }

// 3. Write a recursive function to print first N odd natural numbers
// #include<stdio.h>
// void odd (int);
// int main(int a){
//     printf("Enter a no:");
//     scanf("%d",&a);
//     odd(a);
//     return 0;
// }
// void odd(int p){
//     if(p>0)
//     {
//         odd(p-1);
//         printf("\n%d",2*p-1);
//     }
// }


// 4. Write a recursive function to print first N odd natural numbers in reverse order
// #include<stdio.h>
// void odd (int);
// int main(int a){
//     printf("Enter a no:");
//     scanf("%d",&a);
//     odd(a);
//     return 0;
// }
// void odd(int p){
//     if(p>0)
//     {
//         printf("\n%d",2*p-1);
//         odd(p-1);
//     }
    
// }

// 5. Write a recursive function to print first N even natural numbers
// #include<stdio.h>
// void odd (int);
// int main(int a){
//     printf("Enter a no:");
//     scanf("%d",&a);
//     odd(a);
//     return 0;
// }
// void odd(int p){
//     if(p>0)
//     {
//         odd(p-1);
//         printf("\n%d",2*p);
//     }
    
// }

// 6. Write a recursive function to print first N even natural numbers in reverse order
// #include<stdio.h>
// void odd (int);
// int main(int a){
//     printf("Enter a no:");
//     scanf("%d",&a);
//     odd(a);
//     return 0;
// }
// void odd(int p){
//     if(p>0)
//     {
//         printf("\n%d",2*p);
//         odd(p-1);
//     }
    
// }

// 7. Write a recursive function to print squares of first N natural numbers
// #include<stdio.h>
// void odd (int);
// int main(int a){
//     printf("Enter a no:");
//     scanf("%d",&a);
//     odd(a);
//     return 0;
// }
// void odd(int p){
//     if(p>=1)
//     {
//         odd(p-1);
//         printf("\n%d",p*p);
//     }
    
// }

// 8. Write a recursive function to print binary of a given decimal number
// #include<stdio.h>
// void binary (int);
// int main(int a){
//     printf("Enter a no:");
//     scanf("%d",&a);
//     binary(a);
//     return 0;
// }
// void binary(int p){
//     if(p!=0)
//     {
//         binary(p/2);
//         printf("%d",p%2);
//     }
    
// }

// 9. Write a recursive function to print octal of a given decimal number
// #include<stdio.h>
// void octal (int);
// int main(int a){
//     printf("Enter a no:");
//     scanf("%d",&a);
//     octal(a);
//     return 0;
// }
// void octal(int p){
//     if(p>0){
//         octal(p/8);
//         printf("%d",p%8);
//     }
// }


// 10. Write a recursive function to print reverse of a given number
// #include<stdio.h>
// void reverse (int);
// int main(int a){
//     printf("Enter a no:");
//     scanf("%d",&a);
//     reverse(a);
//     return 0;
// }
// void reverse(int p){
//     if(p)
//     {
//         int rem=p%10;
//         printf("%d",rem);
//         reverse(p/10);
//     }
    
// }