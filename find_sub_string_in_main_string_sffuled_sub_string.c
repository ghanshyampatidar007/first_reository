// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
void arr_init_zero(int *arr,int n){
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
}

int check_sub_string(char *str,char *sub,int n){
        int p,arr[n];
        arr_init_zero(arr,n);
        p=n;
        while(p--){
               for(int i=0;i<n;i++){
                   if(*str==sub[i]){
                       arr[i]=1;
                   }
               }
            str++;
        }    
        int x=1;
        for(int i=0;i<n;i++){
            x&=arr[i];
        }
        return x;
}

void find_sub_string(char *str,char *sub){
    int n=strlen(sub);
    int count=0;
    char *ptr=str+strlen(str)-n+1;
    while(str<ptr){
        if(check_sub_string(str,sub,n)){
            puts(str);
            if(str<ptr){
                str+=n;
                count++;
            }
            else{
                str++;
            }
        }
        else{
            str++;
        }
    }
    printf("count- %d\n",count);
}

int main() {
    // Write C code here
    char sub[]="abc";
    char arr[]="abccbabacsacdbbaccabeswacb";
    
    find_sub_string(arr,sub);

    return 0;
}
