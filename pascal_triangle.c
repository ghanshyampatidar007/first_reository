// Online C compiler to run C program online

/* 
pascal triangle
         1  
       1  1  
      1  2  1  
     1  3  3  1  
    1  4  6  4  1  
   1  5  10 10 5  1  
  1  6  15 20 15 6  1  
 1  7  21 35 35 21 7  1  
1  8  28 56 70 56 28 8  1  
*/

#include <stdio.h>
#include<stdlib.h>
int main() {
    // Write C code here
    int n;
    puts("enter the number- ");
    scanf("%d",&n);
    int *arr=(int *)calloc(n,sizeof(int));
    int k;
    for(int i=0;i<n;i++){
        arr[0]=1;
        k=0;
        for(int p=0;p<n-i-1;p++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            arr[j]=arr[j]+k;
            k=arr[j]-k;
            printf("%-2d  ",arr[j]); 
        }
        puts("");
        
    }
    return 0;
}
