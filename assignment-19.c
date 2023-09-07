// 1. Write a program to find the number of vowels in each of the 5 strings stored in two
// dimensional arrays, taken from the user.

// #include <stdio.h>
// int main(){
//     char str[10][30];
//     int i,j,vowel=0;
//     for(i=0;i<5;i++){
//         // gets(str[i]);
//          fgets(str[i],30,stdin);
//     }

//     for(i=0;i<5;i++){
//         for(j=0;str[i][j]!='\0';j++){
//             if(str[i][j]=='a' || str[i][j]=='e' || str[i][j]=='i' || str[i][j]=='o' || str[i][j]=='u')
//             vowel++;
//         }
//         printf("%s = %d\n",str[i], vowel);
//         vowel=0;
//     }
//     return 0;
// }

// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
// the user.

// #include <stdio.h>
// #include<string.h>
// int main(){
//     char str[10][20], t[20];
//     int i,j;
//     for(i=0;i<3;i++){
//         gets(str[i]);
//         //  fgets(str[i],20,stdin);//beware of null comparison, it checks
//     }

//     for(i=0;i<2;i++){
//         for(j=i+1;j<3;j++){
//            if(strcmp(str[i],str[j])>0){
//             strcpy(t,str[i]);
//             strcpy(str[i],str[j]);
//             strcpy(str[j],t);
//            }
//         }
//     }

//     for(i=0;i<3;i++){
//         printf("%s \n",str[i]);
//     }
//     return 0;
// }

// 3. Write a program to read and display a 2D array of strings in C language.

// #include <stdio.h>
// #include<string.h>
// int main(){
//     char str[10][20], t[20];
//     int i,j;
//     for(i=0;i<3;i++){
//         gets(str[i]);
//         //  fgets(str[i],20,stdin);//beware of null comparison, it checks
//     }

//     for(i=0;i<2;i++){
//         for(j=i+1;j<3;j++){
//            if(strcmp(str[i],str[j])>0){
//             strcpy(t,str[i]);
//             strcpy(str[i],str[j]);
//             strcpy(str[j],t);
//            }
//         }
//     }

//     for(i=0;i<3;i++){
//         printf("%s \n",str[i]);
//     }
//     return 0;
// }

// 4. Write a program to search a string in the list of strings.

// #include <stdio.h>
// #include<string.h>
// int main(){
//     char str[10][20],t[10]="prratt";
//     int i;
//     for(i=0;i<3;i++){
//         gets(str[i]);
//         //  fgets(str[i],20,stdin);//beware of null comparison, it checks
//     }

//     for(i=0;i<3;i++){
//            if(strcmp(str[i],t)==0){
//                 printf("string found");
//                 break;
//             }else{
//                 printf("string not found");
//                 break;
//             }
//     }
//     return 0;
// }

// 5. Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.

// #include <stdio.h>
// #include<string.h>
// int main(){
//     char str[10][20],t[10]="prratt";
//     int i;
//     for(i=0;i<3;i++){
//         gets(str[i]);
//         //  fgets(str[i],20,stdin);//beware of null comparison, it checks
//     }

//     for(i=0;i<3;i++){
//            if(strchr(str[i],'@')==0){
//                 printf("%s \n",str[i]);
//             } 
//     }
//     return 0;
// }

// 6. Write a program to print the strings which are palindrome in the list of strings.

// 7. From the list of IP addresses, check whether all ip addresses are valid.

// #include <stdio.h>
// #include<string.h>
// int main(){
//     char str[10][20],t[10]="prratt";
//     int i;
//     for(i=0;i<3;i++){
//         gets(str[i]);
//         //  fgets(str[i],20,stdin);//beware of null comparison, it checks
//     }

//     for(i=0;i<3;i++){
//            if(strchr(str[i],'.')==0){
//                 printf("not all valid");
//                 break;
//             }else{
//                 printf("valid");
//                 break;
//             }
//     }
//     return 0;
// }

// 8. Given a list of words followed by two words, the task is to find the minimum distance
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
// word1 = “the”, word2 = “fox”, OUTPUT : 1 )

// 9. Write a program that asks the user to enter a username. If the username entered is
// one of the names in the list then the user is allowed to calculate the factorial of a
// number. Otherwise, an error message is displayed

// 10. Create an authentication system. It should be menu driven.