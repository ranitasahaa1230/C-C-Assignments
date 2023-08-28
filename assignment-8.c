// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(j>=6-i)
//             printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(j<=6-i)
//             printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5;j++){
//             if(j>=i)
//             printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }

//Q5.

#include<stdio.h>
int main(){
    int i, st=1,sp=5/2;
    for(i=1;i<=5;i++){
        for(int j=1;j<=sp;j++){
            printf(" ");
        }
        for(int j=1;j<=st;j++){
            printf("*");
        }
        if(i)
        printf("\n");
    }
}

 
