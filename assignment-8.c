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

 #include<stdio.h>
int main(){
    int st=(5/2+1),sp=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i+j==6||i==j){
            printf("*");
            }
            else {
                printf(" ");

            }
        }
        printf("\n");
    }
}

