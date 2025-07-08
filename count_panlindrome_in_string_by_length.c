// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int check_panlindrome(char *p,char *q){
    while(p<q){
        if(*p!=*q){
            return 0;
        }
        p++;
        q--;
    }
    return 1;
}

void count_panlindrome(int *arr,int n,char *str)
{
    int *crr=(int *)calloc(n,sizeof(int));
    char *p,*q;
    q=str+strlen(str);
    
    for(int i=0;i<n;i++){
        p=str;
        while(p+arr[i]-1<q){
            if(check_panlindrome(p,p+arr[i]-1)){
                crr[i]++;
                p=p+arr[i];
            }
            else{
                p++;
            }
        }
        printf("%d len count- %d\n",arr[i],crr[i]);
    }
}
int main() {
    // Write C code here
    char str[100];
    int arr[]={2,3,4};
    printf("enter the string- \n");
    fgets(str,100,stdin);
    str[strlen(str)-1]=0;
    
    count_panlindrome(arr,3,str);

    return 0;
}
