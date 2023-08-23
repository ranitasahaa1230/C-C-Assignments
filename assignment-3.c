// 1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
int main(){
    int h;
    printf("Enter the number: ");
    scanf("%d",&h);
    if(h>=0){
        printf("%d is a Positive number",h);
    }else{
        printf("%d is a non-positive number",h);
    };
    return 0;
}

// 2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main(){
    int h;
    printf("Enter the number: ");
    scanf("%d",&h);
    if(h%5==0){
        printf("%d is divisible by 5",h);
    }else{
        printf("%d is not divisible by 5",h);
    };
    return 0;
}

// 3. Write a program to check whether a given number is an even number or an odd number.

#include<stdio.h>
int main(){
    int h;
    printf("Enter the number: ");
    scanf("%d",&h);
    if(h%2==0){
        printf("%d is an even number",h);
    }else{
        printf("%d is an odd number",h);
    };
    return 0;
}

// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.

#include<stdio.h>
int main(){
    int h;
    printf("Enter the number: ");
    scanf("%d",&h);
    // if((h&1)==0){
    if(( h >> 1) <<1==h){
        printf("%d is an even number",h);
    }else{
        printf("%d is an odd number",h);
    };
    return 0;
}

// 5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main(){
    int h;
    printf("Enter the number: ");
    scanf("%d",&h);
    if(h>=100 && h<1000){
        printf("%d is a three-digit number",h);
    }else{
        printf("%d is not a three-digit number",h);
    };
    return 0;
}

// 6. Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>
int main(){//2 5
    int h,k;
    printf("Enter the number: ");
    scanf("%d %d",&h,&k);
    if(h>k){
        printf("%d is greater",h);
    }else if(h==k){
        printf("%d both same",k);
    }else{
        printf("%d is greater",k);
    };
    return 0;
}

// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots

#include<stdio.h>
int main(){
    double a, b, c, discriminant;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    discriminant=b*b-(4*a*c);
    if(discriminant>0){
        printf("Roots are real and distinct");
    }else if(discriminant==0){
        printf("Roots are real and equal");
    }else{
        printf("Roots are imaginary");
    }
    return 0;
}

// 8. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year); 
    if(year%4==0 && year%100!=0){
        printf("Leap Year");
    }else if(year%400==0){
        printf("Leap Year");
    }else{
        printf("It's not a Leap Year");
    }
   return 0;
}

// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.

#include<stdio.h>
int main(){
    int h,k,l;
    printf("Enter the number: ");
    scanf("%d %d %d",&h,&k,&l);
    if(h>k){
        if(h>l)
        printf("%d is greater",h);
        else
        printf("%d is greater",l);
    }else{
        if(k>l)
        printf("%d is greater",k);
        else
        printf("%d is greater",l);
    };
    return 0;
}


// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.

#include <stdio.h>
int main()
{
    float cp, sp, profit, loss;
    float profitPercent, lossPercent;
    printf("Enter the Cost Price and SP of the product respectively: ");
    scanf("%d%d", &cp, &sp);
    profit=sp-cp;
    loss=cp-sp;
    if (sp > cp)
    {
        profitPercent = (profit/ cp) * 100;
        printf("Profit percentage is %f", profitPercent);
    }
    else if (sp < cp)
    {
        lossPercent = (loss/ cp) * 100;
        printf("LOss percentage is %f", lossPercent);
    }
    else
    {
        printf("No loss no profit");
    }
    return 0;
}

// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.

#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the marks of 5 subjects out of 100: ");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    if(a>=33 && b>=33 && c>=33 && d>=33 && e >= 33){
        printf("User passed the exam");
    }else{
        printf("User failed the exam");
    }
    return 0;
}

// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main(){
    char a;
    printf("Enter the alphabet: ");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
        printf("Alphabet is in Uppercase");
    else
        printf("Alphabet is in Lowercase");
    return 0;
}


// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%3==0 && a%2==0){
        printf("%d is divisible by 3 and divisible by 2",a);
    }else if(a%3==0){
        printf("%d is divisible by 3",a);
    }else if(a%2==0){
        printf("%d is divisible by 2",a);
    }else{
        printf("%d is not divisible by either 3 or by 2",a);
    }
    return 0;
}

// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%7==0){
        printf("%d is divisible by 7",a);
    }else if(a%3==0){
        printf("%d is divisible by 3",a);
    }else{
        printf("%d is not divisible by 7 or 3",a);
    }
    return 0;
}

// 15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>0){
        printf("%d is a Positive number",a);
    }else if(a<0){
        printf("%d is a Negative number",a);
    }else{
        printf("%d is zero",a);
    }
    return 0;
}

// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.

#include<stdio.h>
int main(){
    char a;
    printf("Enter the character: ");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
        printf("Character is in Uppercase");
    else if(a>='a' && a<='z')
        printf("Character is in Lowercase");
    else if(a>='0' && a<='9')
        printf("Character is a digit");
    else
        printf("Character is a special character");
    return 0;
}

// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.

#include<stdio.h>
int main(){
    int h,k,l;
    printf("Enter the number: ");
    scanf("%d %d %d",&h,&k,&l);
    if(h+k>l && h+l>k && l+k>h){
        printf("is a valid triangle");
    }else{
        printf("is not a valid triangle");
    };
    return 0;
}

// 18. Write a program which takes the month number as an input and display number of
// days in that month

#include<stdio.h>
int main(){
    int h;
    printf("Enter the month number: ");
    scanf("%d",&h);
    if(h==1 || h==3 || h==5 || h==7 || h==8 || h==10 || h==12){
        printf("31 days");
    }else if(h==2){
        printf("28/29 days");
    }else if(h==4 || h==6 || h==9 || h==11){
        printf("30 days");
    }else{
        printf("Invalid input");
    };
    return 0;
}