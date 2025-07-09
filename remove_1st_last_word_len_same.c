// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
void check_first_last(char *str){
    char *t,*q=NULL,*r=NULL,*p=str;
    t=str+strlen(str);
    int n,m,l,flag=1;
    while(p=strtok(p," ")){
        n=strlen(p);
        if(flag){
            q=p;
            r=p;
            flag=0;
            m=strlen(q);
        }
        else{
            r=p;
        }
        
        if(p+n<t){
            *(p+n)=' ';
            p=p+n+1;
        }
        else{
            p=p+n;
        }
    }
    l=strlen(r);
    //printf("%d %d\n",m,l);
    
    if(m==l){
        memmove(r,r+l,strlen(r+l)+1);
        memmove(q,q+m,strlen(q+m)+1);
        //puts(q);
        //puts(r);
    }
    
}
int main() {
    // Write C code here
    char str[100];
    printf("enter the string- \n");
    fgets(str,100,stdin);
    str[strlen(str)-1]=0;
    
    check_first_last(str);
    puts(str);

    return 0;
}






