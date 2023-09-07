//1.  Write a program to calculate the length of the string. (without using built-in method)
// #include <stdio.h>
// int main(){
//     char str[10]={'B','H','O','P','A','L'};
//     int i;
//     for(i=0;str[i];i++);
//     printf("%d",i);

//or
//     // int i,count=0;
//     // for(i=0;str[i];i++){
//     // count++;
//     // }
//     // printf("%d",count);
//     return 0;
// }

// 2. Write a program to count the occurrence of a given character in a given string.

// #include <stdio.h>
// int main(){
//     char str[10]="ranita";
//     int i,count=0;
//     char b='a';
//     for(i=0;str[i];i++){
//         if(str[i]==b)
//         count++;
//     }

//         printf("%d",count);
//     return 0;
// }

// 3. Write a program to count vowels in a given string

// #include <stdio.h>
// int main(){
//     char str[10]="ranita";
//     int i,count=0;
//     char b='a';
//     for(i=0;str[i];i++){
//         if( str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
//         count++;
//     }

//         printf("%d",count);
//     return 0;
// }

// 4. Write a program to convert a given string into uppercase

// #include <stdio.h>
// int main(){
//     char str[10]="ranita";
//     int i;
//     for(i=0;str[i];i++){
//         if( str[i]>='a' && str[i]<='z')
//         str[i]=str[i]-32;
//     }

//         printf("%s",str);
//     return 0;
// }

// 5. Write a program to convert a given string into lowercase

// #include <stdio.h>
// int main(){
//     char str[10]="RANIta";
//     int i;
//     for(i=0;str[i];i++){
//         if( str[i]>='A' && str[i]<='Z')
//         str[i]=str[i]+32;
//     }

//         printf("%s",str);
//     return 0;
// }

// 6. Write a program to reverse a string.

// #include <stdio.h>
// int main(){
//     char str[10]="RANIta";
//     int i=0,j=strlen(str)-1,temp;
//             while(i<=j){
//                 temp=str[i];
//                 str[i]=str[j];
//                 str[j]=temp;
//                 i++;
//                 j--;
//             }
      

//         printf("%s",str);
//     return 0;
// }

// 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.

// #include <stdio.h>
// int main(){
//     char str[10]="RANItaa12/";
//     int alphaCoun=0,digCoun=0,charCount=0;
//     int i,temp;
//     for(i=0;i<str[i];i++){
//         if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z' ))
//         alphaCoun++;
//         else if(str[i]>=0 && str[i]<=99)
//         digCoun++;
//         else charCount++;
//     }
//         printf("%d %d %d",alphaCoun, digCoun, charCount);
// }

// 8. Write a program in C to copy one string to another string.

// #include <stdio.h>
// int main(){
//     char str[10]="RANIta",c[10];
//     int i=0,temp;
//     for(i=0;i<str[i];i++)
//     c[i]=str[i];

//         printf("%s",c);
//     return 0;
// }

// 9. Write a C program to sort a string array in ascending order.

#include <stdio.h>
int main(){
    char str[10]="RANIta";
    int i=0,j,temp;
    for(i=0;str[i];i++){
        for(j=0;j<str[i];j++){
            if(str[i]>str[j]){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            }
        }
    }
        printf("%s",str);
    return 0;
}

// 10. Write a program in C to Find the Frequency of Characters.

// #include <stdio.h>
// int main(){
//     char str[10]="RANItaa";
//     int fre[150]={0};
//     int i=0,temp;
//     for(i=0;i<str[i];i++)
//         fre[str[i]]++;

//     for(i=0;i<150;i++)
//         if(fre[i]!=0)
//         printf("%c --> %d\n",i,fre[i]);
//     return 0;
// }