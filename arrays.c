#include<stdio.h>
// to enter the aray elements and print them
// int main(){
//     int i,n,arr[10];
//     printf("Enter the number of array elemsnts:\n");
//     scanf("%d",&n);
//     printf("Enter the array elements:\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("The array elements are:\n");
//     for(i=0;i<n;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }
// to find the sum of array elements
// int main(){
//     int i,n,a[10],sum=0;
//     printf("Enter the number of array elements:\n");
//     scanf("%d",&n);
//     printf("Enter the array elements:\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         sum=sum+a[i];
//     }
//     printf("The sum of array elements is %d\n",sum);
//     return 0;
// }
// to find the largest element in the array
// int main(){
//     int i,n,a[10],max;
//     printf("Enter the number of array elements:\n");
//     scanf("%d",&n);
//     printf("Enter the array elements:\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     max=a[0];
//     for(i=1;i<n;i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     printf("The largest element in the array is %d\n",max);
//     return 0;
// to generate the fibonacci series using arrays 
// int main(){
//     int i,n,a[10];
//     printf("Enter the number of elements in the fibonacci series:\n");
//     scanf("%d",&n);
//     a[0]=0;
//     a[1]=1;
//     for(i=2;i<n;i++){
//         a[i]=a[i-1]+a[i-2];
//     }
//     printf("The fibonacci series is:\n");
//     for(i=0;i<n;i++){
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }
// to print and read 2d arrays
// #include <stdio.h>

// int main() {
//     int rows, cols;

//     // Input number of rows and columns
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter number of columns: ");
//     scanf("%d", &cols);

//     int arr[rows][cols];

//     // Input elements of the array
//     printf("Enter elements of the array:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("Enter element at [%d][%d]: ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     // Print the array
//     printf("\nThe array is:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// Sum of two matrixes 
// int main(){
//     int a[10][10],b[10][10],sum[10][10],i,j,r,c;
//     printf("Enter the number of rows and columns:\n");
//     scanf("%d%d",&r,&c);
//     printf("Enter the elements of the first matrix:\n");
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the elements of the second matrix:\n");
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             sum[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     printf("The sum of the two matrixes is:\n");
//     for(i=0;i<r;i++){
//         for(j=0;j<c;j++){
//             printf("%d ",sum[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
    // int main(){
    //     int i,n,arr[100];
    //     printf("Enter the number of elements in the array:\n");
    //     scanf("%d",&n);
    //     printf("Enter the array elements:\n");
    //     for(i=0;i<n;i++){
    //         scanf("%d", &arr[i]);
    //     }
    //     int found = -1;
    //     for(i=1; i<n-1; i++){
    //         if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
    //             found = arr[i];
    //             break;
    //         }
    //     }
    //     if(found != -1){
    //         printf("%d", found);
    //     } else if(n > 0 && arr[n-1] > arr[n-2]){
    //         printf("%d", arr[n-1]);
    //     } else {
    //         printf("-1");
    //     }
    //     return 0;
    // }
// binary search 
// int main(){
//     int i,n,arr[100],key;
//     printf("Enter the number of elements in the array:\n");
//     scanf("%d",&n);
//     printf("Enter the array elements:\n");
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the key element to be searched:\n");
//     scanf("%d",&key);
//     int low = 0, high = n-1, mid;
//     while(low <= high){
//         mid = (low + high)/2;
//         if(arr[mid] == key){
//             printf("Element found at index %d", mid);
//             return 0;
//         } else if(arr[mid] < key){
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
// }
//  sorting 
// bubble sort algorithm 
// int main(){
//     int i,n,j,arr[100],temp;
//     printf("Enter the number of elements in array:\n");
//     scanf("%d",&n);
//     printf("Enter the array elements:\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);

//     }
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 }
//         }
//     }
//     printf("The sorted array is:\n");
//     for(i=0;i<n;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }
int main(){
    int i,j,arr[100],min,temp,n;
    printf("Enter the no of array elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
      for(i=0; i<n-1; i++){
        min=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    printf("The sorted array is:\n");
for(i=0; i<n; i++){
    printf("%d\n",arr[i]);
}
}