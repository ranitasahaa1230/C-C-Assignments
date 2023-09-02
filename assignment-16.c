// 1. Write a program to calculate the sum of two matrices each of order 3x3.

// #include <stdio.h>
// int matrix();
// int main(){
//     matrix();
//     return 0;
// }
// int matrix(){
//     int i,n,j,k;
//     int a[3][3]={1,2,3,4,5,7,8,9,10};
//     int b[3][3]={2,3,4,5,7,8,9,1,2};
//     int c[3][3];
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }   

//      for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//              printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }   
// }

// 2. Write a program to calculate the product of two matrices each of order 3x3.


// #include <stdio.h>
// int matrix();
// int main(){
//     matrix();
//     return 0;
// }
// int matrix(){
//     int i,sum=0,j,k;
//     int a[3][3]={1,2,3,4,5,7,8,9,10};
//     int b[3][3]={2,3,4,5,7,8,9,1,2};
//     int c[3][3];
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//             for(k=0;k<=2;k++){
//                 sum=sum+(a[i][k]*b[k][j]);
//             }
//             c[i][j]=sum;
//             sum=0;
//         }
//     }   

//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//                 printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }   
//     return 0;
// }
// 3. Write a program in C to find the transpose of a given matrix.

// #include <stdio.h>
// int matrix();
// int main(){
//     matrix();
//     return 0;
// }
// int matrix(){
//     int i,n,j,k;
//     int a[3][3]={1,2,3,4,5,7,8,9,10};
//     int b[3][3];
//     int c[3][3];
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//             b[i][j]=a[j][i];
//         }
//     }   

//      for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//              printf("%d ", b[i][j]);
//         }
//         printf("\n");
//     }   
// }

// 4. Write a program in C to find the sum of right diagonals of a matrix.
// #include <stdio.h>
// int matrix();
// int main(){
//     matrix();
//     return 0;
// }
// int matrix(){
//     int i,n,j,sum=0;
//     int a[3][3]={1,2,3,4,5,7,8,9,10};
//     int c[3][3];
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//             if(i==j)
//             sum+=a[i][j];
//         }
//     }   
//     printf("%d ",sum);
// }


// 5. Write a program in C to find the sum of left diagonals of a matrix.
// #include <stdio.h>
// int matrix();
// int main(){
//     matrix();
//     return 0;
// }
// int matrix(){
//     int i,n,j,sum=0;
//     int a[3][3]={1,2,3,4,5,7,8,9,10};
//     int c[3][3];
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//             if(i==j)
//             sum+=a[i][j];
//         }
//     }   
//     printf("%d ",sum);
// }

// 6. Write a program in C to find the sum of rows and columns of a Matrix.

// #include <stdio.h>
// int matrix();
// int main(){
//     matrix();
//     return 0;
// }
// int matrix(){
//     int i,n,j,sum=0;
//     int a[3][3]={1,2,3,4,5,7,8,9,10};
//     int c[3][3];
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//             sum+=a[i][j];
//         }
//         c[i][j]=sum;
//         sum=0;
//     }   
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//         printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }   
//     return 0;
// }

// 7. Write a program in C to print or display the lower triangular of a given matrix.

// #include <stdio.h>
// int matrix();
// int main(){
//     matrix();
//     return 0;
// }
// int matrix(){
//     int i,n,j,sum=0;
//     int a[3][3]={1,2,3,4,5,7,8,9,10};
//     int c[3][3];
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//             if(i>j)
//             a[i][j]=0;
//         }
//     } 

//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//         printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }   
//     return 0;
// }

// 8. Write a program in C to print or display an upper triangular matrix.

// #include <stdio.h>
// int matrix();
// int main(){
//     matrix();
//     return 0;
// }
// int matrix(){
//     int i,n,j,sum=0;
//     int a[3][3]={1,2,3,4,5,7,8,9,10};
//     int c[3][3];
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//             if(j>i)
//             a[i][j]=0;
//         }
//     } 

//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//         printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }   
//     return 0;
// }

// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

// #include <stdio.h>
// int matrix();
// int main(){
//     matrix();
//     return 0;
// }
// int matrix(){
//     int i,n,j,count=0;
//     int a[3][3]={1,2,3,4,5,7,8,9,10};
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//             if(count<(i*j)/2)
//             printf("sparse matrix");
//         else printf("dense matrix"); 
//         }
//     } 

//     return 0;
// }

// 10. Write a program in C to find the row with maximum number of 1s.

#include <stdio.h>
int matrix();
int main(){
    matrix();
    return 0;
}
int matrix(){
    int i,n,j,sum=0,max=0,index;
    int a[3][3]={1,1,1,4,5,7,8,9,10};
    int c[3][3];
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(a[i][j]==1)
            sum+=a[i][j];
        }
        if(sum>max){
            max=sum;
            index=i;
        }
        
    } 

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
        printf("%d ", index);
        }
        printf("\n");
    }   
    return 0;
}