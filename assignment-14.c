// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.

// #include<stdio.h>
// int main(){
//     int arr[10],sum=0;
//     for(int i=0;i<=9;i++){
//         printf("Enter a no:");
//         scanf("%d",&arr[i]);
//         sum+=arr[i];
//     }
//     printf("sum is %d",sum);
//     return 0;
// }

// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
// #include<stdio.h>
// int main(){
//     int arr[10],sum=0,avg;
//     for(int i=0;i<=9;i++){
//         printf("Enter a no:");
//         scanf("%d",&arr[i]);
//         sum+=arr[i];
//         avg=sum/10;
//     }
//     printf("avg is %d",avg);
//     printf("\n");
//     return 0;
// }

// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

// #include<stdio.h>
// int main(){
//     int arr[10],even=0,odd=0;
//     for(int i=0;i<=9;i++){
//         printf("Enter a no:");
//         scanf("%d",&arr[i]);
//         if(arr[i]%2==0) even+=arr[i];
//         else odd+=arr[i];
//     }
//     printf("sum of even is %d",even);
//     printf("sum of odd is %d",odd);
//     printf("\n");
//     return 0;
// }

// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.

// #include<stdio.h>
// int main(){
//     int arr[10],largest;
//     for(int i=0;i<=9;i++){
//         printf("Enter a no:");
//         scanf("%d",&arr[i]);
//         largest = arr[0];
//         if(largest<arr[i]) largest=arr[i];
//     }
//     printf("%d",largest);
//     return 0;
// }

// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.

// #include<stdio.h>
// int main(){
//     int arr[10],smallset;
//     for(int i=0;i<=9;i++){
//         printf("Enter a no:");
//         smallset = arr[0];
//         scanf("%d",&arr[i]);
//         if(smallset>arr[i]) smallset=arr[i];
//     }
//     printf("%d",smallset);
//     return 0;
// }

// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.

// #include<stdio.h>
// int main(){
//     int arr[10],i,j,temp;
//     for(i=0;i<10;i++){
//         printf("Enter a no:");
//         scanf("%d ",&arr[i]);
//     }
//     for(i=0;i<9;i++){
//         for(j=i+1;j<10;j++){
//             if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(i=0;i<10;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// 7. Write a program to find second largest in an array.Take array values from the user.

// #include<stdio.h>
// int main(){
//     int arr[10],i,j,temp;
//     for(i=0;i<=9;i++){
//         printf("Enter a no:");
//         scanf("%d ",&arr[i]);
//     }
//     for(i=0;i<8;i++){
//         for(j=i+1;j<9;j++){
//             if(arr[i]>arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//         printf("%d ",arr[i-1]);
//     return 0;
// }

//or optimised
// #include<stdio.h>
// int main(){
//     int arr[10],i,j,largest,second_largest=0,n;
//     printf("Enter a no:");
//     scanf("%d",&n);
//     for(i=0;i<=n-1;i++){
//         printf("Enter a no:");
//         scanf("%d",&arr[i]);
//     }
//     largest=arr[0];
//         for(i=0;i<=n-1;i++){
//             if(largest<arr[i]){
//             second_largest=largest;
//             largest=arr[i];
//             }
//             else{
//                 if(arr[i]>second_largest)
//                 second_largest=arr[i];
//             }
//         }
//         printf("%d ",second_largest);
//     return 0;
// }

// 8. Write a program to find the second smallest number in an array.Take array values
// from the user.

// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

// #include<stdio.h>
// int main(){
//     int arr[100],n,reverse, i;
//     printf("Enter a no:");
//     scanf("%d",&n);
//     for(i=0;i<=n-1;i++){
//         printf("Enter a no%d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(i=n-1; i>=0 ;i--){
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }

// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.

// #include<stdio.h>
// int main(){
//     int arr[10],str[10],i,n;
//     printf("Enter a no:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter a no%d:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++){
//         str[i]=arr[i];
//         printf("the nos are %d\n",str[i]);
//     }
//     return 0;
// }