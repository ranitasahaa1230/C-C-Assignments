// 1.Write a function to find the greatest number from the given array of any size. (TSRS)

// #include <stdio.h>
// int greater();
// int main(){
//     int m,arr[10];
//     m=greater(arr);
//     printf("%d",m);
//     return 0;
// }
// int greater(){
//     int i,n,larger,arr[10];
//     printf("Enter a no:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter a no%d:",i+1);
//         scanf("%d",&arr[i]);
//         larger=arr[0];
//         if(larger<arr[i]) larger=arr[i];
//     }
//     return larger;
// }

// 2. Write a function to find the smallest number from the given array of any size. (TSRS)

// #include <stdio.h>
// int smaller();
// int main(){
//     int m,arr[10];
//     m=smaller(arr);
//     printf("%d",m);
//     return 0;
// }
// int smaller(){
//     int i,n,larger,arr[10];
//     printf("Enter a no:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter a no%d:",i+1);
//         scanf("%d",&arr[i]);
//         larger=arr[0];
//         if(larger>arr[i]) larger=arr[i];
//     }
//     return larger;
// }

// 3. Write a function to sort an array of any size. (TSRN)

// #include <stdio.h>
// int smaller();
// int main(){
//     int m,arr[10];
//     smaller(arr);
//     return 0;
// }
// int smaller(){
//     int i,n,j,larger,arr[10];
//     printf("Enter a no:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter a no%d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//             larger=arr[i];
//             arr[i]=arr[j];
//             arr[j]=larger;
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//     printf("%d ",arr[i]);
// }

// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

// #include <stdio.h>
// int smaller();
// int main(){
//     int m,arr[10];
//     smaller(arr,m);
//     return 0;
// }
// int smaller(){
//     int i,n,j,larger,arr[10],d,temp;
//     printf("Enter a no:");
//     scanf("%d %d",&n, &d);
//     for(i=0;i<=n-1;i++){
//         printf("Enter a no%d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     while(d!=0){
//         temp=arr[n-1];
//         for(i=n-1;i>0;i--){
//             arr[i]=arr[i-1];
//         }
//         arr[0]=temp;
//         d--;
//     }
//     for(i=0;i<=n-1;i++)
//     printf("%d ",arr[i]);
// }

// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.

// #include <stdio.h>
// int smaller();
// int main(){
//     int m,arr[10];
//     m=smaller();
//     printf("%d",m);
//     return 0;
// }
// int smaller(){
//     int i,n,j,larger,arr[10],d,temp;
//     printf("Enter a no:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter a no%d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<=n-1;i++){
//         if(arr[i]==arr[i+1])
//          return arr[i];
//     }    
// }
// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.

// #include <stdio.h>
// int smaller();
// int main(){
//     int m,arr[10];
//     smaller();
//     return 0;
// }
// int smaller(){
//     int i,n,j,larger,arr[10],d,temp;
//     printf("Enter a no:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter a no%d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(i=n-1;i>=0;i--){
//         printf("%d ",arr[i]);
//     }    
// }

// 7. Write a function in C to count a total number of duplicate elements in an array.

// #include <stdio.h>
// int smaller();
// int main(){
//     int m,arr[10];
//     smaller();
//     return 0;
// }
// int smaller(){
//     int i,n,j,larger,arr[10],d,count=0;
//     printf("Enter a no:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter a no%d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<=n-1;i++){
//         for(j=i+1;j<=n-1;j++){
//             if(arr[i]==arr[j])
//                 count++;
//         }
//     }   
//     printf("%d",count); 
// }

// 8. Write a function in C to print all unique elements in an array.

// #include <stdio.h>
// int smaller();
// int main(){
//     int m,arr[10];
//     smaller();
//     return 0;
// }
// int smaller(){
//     int i,n,j,larger,arr[10],d,count=0;
//     printf("Enter a no:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter a no%d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<=n-1;i++){
//         for(j=i+1;j<=n-1;j++){
//             if(arr[i]==arr[j])
//             count++;
//             else{
//             printf("%d ",arr[i]); 
//             }
//         }
//     }   
// }

// 9. Write a function in C to merge two arrays of the same size sorted in descending
// order.


//  #include <stdio.h>
// int smaller();
// int main(){
//     int m,arr[10];
//     smaller();
//     return 0;
// }
// int smaller(){
//     int i=0,n,j=0,c[10],k=0;
//     int arr[]={1,3,5,7,4};
//     int b[]={2,6,8,11,12};
//     for(k=0;k<10;k++){
//             if(i>=5){
//                 while(k<10){
//                     c[k]=b[j];
//                     j++;
//                     k++;

//                     if(k==10) break;
//                 }
//             }
//             else if(j>=5){
//                 while(k<10){
//                     c[k]=b[i];
//                     i++;
//                     k++;

//                     if(k==10) break;
//                 }
//             }
//             else if(arr[i]<b[j]){
//             c[k]=arr[i];
//             i++;
//             }
//             else{
//             c[k]=b[j];
//             j++;
//             }
//     }   
//     for(k=0;k<10;k++){
//         printf("%d ",c[k]);
//     }
// }

// 10. Write a function in C to count the frequency of each element of an array.
#include <stdio.h>
int smaller();
int main(){
    int m,arr[10];
    smaller();
    return 0;
}
int smaller(){
    int i,freq[100]={0};
    int arr[]={1,3,5,7,4,8,2,2,1};
    for(i=0;i<10;i++){
        freq[arr[i]]++;
    }

    // for(i=0;i<10;i++){
    //     printf("%d -> %d\n",arr[i],freq[arr[i]]);
    // }
     for(i=0;i<100;i++){
        if(freq[i]!=0)
        printf("%d -> %d\n",i,freq[i]);
    }
}