// 1. Write a program which takes the month number as an input and display number of days in that month.

// #include<stdio.h>
// int main(){
//     int x,days;
//     printf("Enter a no:");
//     scanf("%d",&x);
//     switch (x)
//     {
//     case 1:
//         printf("31 days");
//         break;
//      case 2:
//         printf("28/29 days");
//         break;
//      case 3:
//         printf("31 days");
//         break;
        
//     default:
//         printf("Invalid choice");
//     }
// }
// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int x,a,b;
//     printf("\n1. Addition");
//     printf("\n2. Subtraction");
//     printf("\n3. Multiplication");
//     printf("\n4. Division");
//     printf("\n5. Exit");
//     printf("Enter your choice:");
//     scanf("%d",&x);
//     switch (x)
//     {
//     case 1:
//         printf("Enter the number: ");
//         scanf("%d %d",&a,&b);
//         printf("%d",a+b);
//         break;
//      case 2:
//         printf("Enter the number: ");
//         scanf("%d %d",&a,&b);
//         printf("%d",a-b);
//         break;
//      case 3:
//         printf("Enter the number: ");
//         scanf("%d %d",&a,&b);
//         printf("%d",a*b);
//         break;
//     case 4:
//         printf("Enter the number: ");
//         scanf("%d %d",&a,&b);
//         printf("%d",a/b);
//         break;
//     case 5:
//         exit(0);
//     default:
//         printf("Invalid choice");
//     }
// }

// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter your no:");
//     scanf("%d",&x);
//     switch (x)
//     {
//     case 1:
//     printf("hello");
//     break;
//     case 2:
//     printf("hellos");
//     break;
//     case 3:
//     printf("helloss");
//     break;
//     case 4:
//     printf("hellomms");
//     break;
//     case 5:
//     printf("hello fri");
//     break;
//     case 6:
//     printf("hellos sat");
//     break;
//     case 7:
//     printf("hello sun");
//     break;
//     default:
//         printf("Invalid choice");
//     }
// }

// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit

    // #include<stdio.h>
    // #include<stdlib.h>
    // int main(){
    //     int x,a,b,c;
    //     while(1){
    //     printf("Enter your choice:");
    //     printf("\n1. Isos triangle");
    //     printf("\n2. Right -angled triangle");
    //     printf("\n3. Equilateral triangle");
    //     printf("\n4. Exit");
    //     scanf("%d",&x);
    //     printf("enter 3 nos:");
    //     scanf("%d %d %d ",a,b,c);
    //     switch (x)
    //     {
    //     case 1:
    //     if(a==b || b==c || c==a) printf("isos");
    //     else printf("not isos");
    //     break;
    //     case 2:
    //     if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) printf("right");
    //     else printf("not right");
    //     break;
    //     case 3:
    //     if(a*a==b && b==c)printf("equi");
    //     else printf("not equi");
    //     break;
    //     case 4: exit(0);
    //     default:
    //         printf("Invalid choice");
    //     }
    //     }
    // }

// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");

// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter your no:");
//     scanf("%d",&x);
//     switch (x)
//     {
//     case 1:
//         if(x==1) printf("good");
//         break;
//      case 2:
//         if(x==2) printf("better");
//         break;
//      case 3:
//         if(x==3) printf("best");
//         break;
//     default:
//         printf("Invalid choice");
//     }
// }

// 6. Program to check whether a year is a leap year or not. Using switch statement
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter your no:");
//     scanf("%d",&x);
//     switch (x%100==0)
//     {
//     case 1:
//         switch(x%400==0){
//             case 0: printf("leap yr");   break;
//             case 1:printf("not leap yr");  break;
//         }break;
//      case 0:
//         switch(x%4==0){
//             case 1: printf("leap yr");   break;
//             case 0:printf("not leap yr");  break;
//         }break;
//     default:
//         printf("Invalid choice");
//     }
// }

// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

// #include<stdio.h>
// int main(){
//     float x,amt=0,total=0;
//     printf("Enter your no:");
//     scanf("%d",&x);
//     switch (x<=50)
//     {
//     case 1://true
//         amt=x*0.5;
//         break;
//      case 0: switch(x<=150){
//         case 1: amt=x*0.75;
//         break;
//         case 0: switch(x>=150){

//         }
//      }
        
//     default:
//         printf("Invalid choice");
//     }
// }

// 8. Program to convert a positive number into a negative number and negative number into a positive number 
//using a switch statement.
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter your no:");
//     scanf("%d",&x);
//     switch (x>0)
//     {
//     case 1:
//     printf("%d",-x);
//     break;
//      case 0:
//      switch(x<0){
//         case 1:    printf("%d",-x);
//         break;
//      }
//     break;
//     }
// }

// 9. Program to Convert even number into its upper nearest odd number Switch Statement.
// #include<stdio.h>
// int main(){
//     int x;
//     printf("Enter your no:");
//     scanf("%d",&x);
//     switch (x%2==0)
//     {
//         case 1: 
//         printf("%d",x+1);
//         break;
//         case 0:
//         printf("%d",x);
//     }
// }

// 10. C program to find all roots of a quadratic equation using switch case