// 1. Write a program to print Hello Students on the screen.

#include<stdio.h>
int main(){
    printf("Hello");
    return 0;
}

// 2. Write a program to print Hello in the first line and Students in the second line.

#include<stdio.h>
int main(){
    printf("Hello\nStudents");
    return 0;
}

// 3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)

#include<stdio.h>
int main(){
    printf("\"MySirG\"");
    return 0;
}

// 4. WAP to find the area of the circle. Take radius of circle from user as input and print the
// result in below given format.

#include<stdio.h>
int main(){
    int r;
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    float A=3.14*r*r;
    printf("Area of circle is %.2f having the radius %d",A,r);
    return 0;
}

// 5. WAP to calculate the length of String using printf function.

// #include<stdio.h>
// int main(){
//     char Str[1000];
//     printf("Enter the string: ");
//     scanf("%s",&Str);
//     printf("Length of Str is %d",strlen(Str));
//     return 0;
// }

//OR 

#include<stdio.h>
int main(){
    int x=printf("Ranita Saha ");
    printf("Length of \"Ranita Saha \" is %d",x);
    return 0;
}


// 6. WAP to print the name of the user in double quotes.

#include<stdio.h>
int main(){
    printf("\"Hello, Ranita Saha\"");
    return 0;
}

// 7. WAP to print “%d” on the screen.

#include<stdio.h>
int main(){
    printf("%%d");
    return 0;
}

//OR

// #include<stdio.h>
// int main(){
//     char a='%',b='d';
//     printf("%c%c",a,b);
//     return 0;
// }

// 8. WAP to print “\n” on the screen.

#include<stdio.h>
int main(){
    printf("\\n");
    return 0;
}

// 9. WAP to print “\\” on the screen.

#include<stdio.h>
int main(){
    printf("\\\\");
    return 0;
}

// 10. WAP to take date as an input in below given format and convert the date format and
// display the result as given below.
// User Input date format – “DD/MM/YYYY” (27/11/2022)
// Output format –
// “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)

#include<stdio.h>
int main(){
    int d,m,year;
    printf("Enter date in dd/mm/yyyy: ");
    scanf("%d/%d/%d",&d,&m,&year);//=> '/' will ignore
    printf("Day – %d , Month – %d, Year – %d",d,m,year);
    return 0;
}

// 11. WAP to take time as an input in below given format and convert the time format and
// display the result as given below.
// User Input date format – “HH:MM”
// Output format – “HH hour and MM Minute”
// Example –
// “11:25” converted to “11 Hour and 25 Minute”

#include<stdio.h>
int main(){
    int h,m;
    printf("Enter time in HH:MM format: ");
    scanf("%d:%d",&h,&m);
    printf("%d:%d converted to %d Hours and %d Minute",h,m,h,m);
    return 0;
}

// 12. Find output of below code:

// int main()
// {
// int x = printf("ineuron");
// printf("%d",x);
// return 0;
// }

// Output is: 
ineuron7