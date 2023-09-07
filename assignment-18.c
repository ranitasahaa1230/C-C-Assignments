//1. Write a function to calculate length of the string

// #include<stdio.h>
// int main(){
//     char a[10]="987ioppp";
//     int i;
//     for(i=0;a[i];i++);
//     printf("%d",i);
//     return 0;
// }

// 2. Write a function to reverse a string.

// #include<stdio.h>
// int upperCse();
// int main(){
//     upperCse();
//     return 0;
// }
// int upperCse(){
//     char a[10]="opppQUIO";
//     int i,j=strlen(a)-1,temp;
//     while(i<=j){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//                 i++;
//                 j--;
//             }
//     printf("%s",a);
// }

// 3. Write a function to compare two strings.

// #include<stdio.h>
// int upperCse();
// int main(){
//     upperCse();
//     return 0;
// }
// int upperCse(){
//     char a[10]="opppQUIO";
//     char b[10]="opppQUII";
//     int i,j;
//     for(i=0;a[i];i++){
//        for(j=0;j<b[j];j++){
//             if(a[i]==b[j]) break;;
//        }    
//     }
//     if(a[i]==b[j]) printf("strings equal");
//     else printf("strings not equal");
// }

// 4. Write a function to transform string into uppercase

// #include<stdio.h>
// int upperCse();
// int main(){
//     upperCse();
//     return 0;
// }
// int upperCse(){
//     char a[10]="987ioppp";
//     int i;
//     for(i=0;a[i];i++){
//         if(a[i]>='a' && a[i]<='z')
//             a[i]=a[i]-32;
//     }
//     for(i=0;a[i];i++);
//     printf("%s",a);
// }

// 5. Write a function to transform a string into lowercase

// #include<stdio.h>
// int upperCse();
// int main(){
//     upperCse();
//     return 0;
// }
// int upperCse(){
//     char a[10]="opppQUIO";
//     int i;
//     for(i=0;a[i];i++){
//         if(a[i]>='A' && a[i]<='Z')
//             a[i]=a[i]+32;
//     }
//     for(i=0;a[i];i++);
//     printf("%s",a);
// }

// 6. Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)

// #include<stdio.h>
// int upperCse();
// int main(){
//     upperCse();
//     return 0;
// }
// int upperCse(){
//     char a[10]="opppQUIO";
//     int i,j;
//     for(i=0;a[i];i++){
//         if(a[i]>='a' || a[i]<='z' || a[i]>='A' || a[i]>='Z' || a[i]>=0 || a[i]<=99)
//         printf("alpha");
//         else printf("not alpha");
//     }    
// }

// 7. Write a function to check whether a given string is palindrome or not.

// #include<stdio.h>
// int upperCse();
// int main(){
//     upperCse();
//     return 0;
// }
// int upperCse(){
//     char a[10]="madam";
//     int i,j;
//     while(i<=j){
//         if(a[i]!=a[j])
//         break;
//         i++;
//         j--;
//     }
//     if(i>j)
//     printf("palindrome");
//     else  printf("not palindrome");
// }

// 8. Write a function to count words in a given string

// #include<stdio.h>
// int upperCse();
// int main(){
//     upperCse();
//     return 0;
// }
// int upperCse(){
//     char a[10]="my name";
//     int i,j,count=0;
//     for(i=0;a[i];i++){
//         if(a[i]==' ' && a[i+1]!=' '){
//             count++;
//         }
//     }  
//     printf("%d",count);  
// }

// 9. Write a function to reverse a string word wise. (For example if the given string is
// “Mysirg Education Services” then the resulting string should be “Services Education
// Mysirg” )

#include <stdio.h>
int main(){
    char str[10]="RANItaa";
    int fre[150]={0};
    int i=0,temp;
    for(i=0;i<str[i];i++)
        fre[str[i]]++;

    for(i=0;i<150;i++)
        if(fre[i]!=0)
        printf("%c --> %d\n",i,fre[i]);
    return 0;
}

// 10. Write a function to find the repeated character in a given string.