// 1. Write a program to print unit digit of a given number

// #include<stdio.h>
// int main(){
//     int h;
//     printf("Enter the number: ");
//     scanf("%d",&h);
//     int k=h%10;
//     printf("%d is the unit digit",k);
//     return 0;
// }

// 2. Write a program to print a given number without its last digit.

// #include<stdio.h>
// int main(){
//     int h;
//     printf("Enter the number: ");
//     scanf("%d",&h);
//     int k=h/10;
//     printf("%d is the digit without its last digit",k);
//     return 0;
// }

// 3. Write a program to swap values of two int variables

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the number: ");
//     scanf("%d %d",&a,&b);//2 4
//     c=a;
//     a=b;
//     b=c;
//     printf("a=%d and b=%d swap values",a,b);
//     return 0;
// }

// 4. Write a program to swap values of two int variables without using a third variable.

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the number: ");
//     scanf("%d %d",&a,&b);//2 4
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("a=%d and b=%d swap values",a,b);
//     return 0;
// }

// 5. Write a program to input a three-digit number and display the sum of the digits.

// #include<stdio.h>
// int main(){
//     int a,sum=0,rem,k;
//     printf("Enter the three-digit number: ");
//     scanf("%d",&a);//321=>
//     k=a;
//     while(k>0){ //while(k!=0)
//         rem=k%10;
//         sum+=rem;
//         k=k/10;
//     }
//     printf("%d is the sum of the digit %d",sum,a);
//     return 0;
// }

// 6. Write a program which takes a character as an input and displays its ASCII code.

// #include<stdio.h>
// int main(){
//      char ch;
//     printf("Enter a character: ");
//     scanf("%c",&ch);
//     printf("The ASCII code of %c is %d",ch,ch);
//     return 0;
// }

// 7. Write a program to find the position of first 1 in LSB.

// #include<stdio.h>
// int main(){
//     printf("\"Hello, Ranita Saha\"");
//     return 0;
// }

// 8. Write a program to check whether the given number is even or odd using a bitwise operator.

// #include<stdio.h>
// int main(){
//     printf("\"Hello, Ranita Saha\"");
//     return 0;
// }

// 9. Write a program to print size of an int, a float, a char and a double type variable

// #include<stdio.h>
// int main(){
//     int a;
//     float b;
//     char c;
//     double d;
//     printf("\nSize of int:  %zu bytes", sizeof(a));
//     printf("\nSize of float: %zu bytes", sizeof(b));
//     printf("\nSize of char: %zu byte", sizeof(c));
//     printf("\nSize of double: %zu bytes", sizeof(d));
//     return 0;
// }

// 10. Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)

// #include<stdio.h>
// int main(){
//     printf("\"Hello, Ranita Saha\"");
//     return 0;
// }

// 11. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)

// #include<stdio.h>
// int main(){
//     int number,digit,result;
//     printf("Enter the number and digit which you want to append: ");
//     scanf("%d %d",&number,&digit);
//     result=number+Number(digit);
//     printf("%d is the number",result);
//     return 0;
// }

// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.

// #include<stdio.h>
// int main(){
//      float inr;
//     // inr == (76.23)/usd;
//     printf("Enter the amount in INR: ");
//     scanf("%f",&inr);
//     float usd=(76.23)*inr;
//     printf("The USD Price is %.2f",usd);
//     return 0;
// }

// 13. Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.

// #include<stdio.h>
// int main(){
//     int num,temp,rem,div;
//     printf("Enter a three digit number: ");
//     scanf("%d",&num);
//     temp=num;
//     if(num>99 && num<1000){
//         rem=num%10;
//         div=num/10;
//         int op=100*rem+div;
//         printf("%d is the number which is rotated by one position towards the right.",op);
//     }else{
//             printf("Not a three-digit number");
//     }
//     return 0;
// }

