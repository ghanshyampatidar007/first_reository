// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
void removee(char *str){
    char *q,*p=str;
    int n;
    char *r=str+strlen(str);
    while(p=strtok(p," ")){
        puts(p);
        int n=strlen(p);
        if(p+n<r){
            q=p+n+1;
        }
        else{
            q=p+n;
        }
        printf("%u %u %u\n",p,q,r);
        while(q=strstr(q,p)){
            printf("q1- "); 
            puts(q);
            if((*(q-1)==' ')&&(*(q+n)==' ')){
                printf("qin- %s\n",q); 
                memmove(q,q+n+1,strlen(q+n+1)+1);
                r-=(n+1);
           }
           else if((*(q-1)==' ') && (*(q+n)=='\0')){
                printf("qin- %s\n",q); 
                memmove(q,q+n,strlen(q+n)+1);
                r-=n;
           }
           else if((*(q-1)=='\0') && (*(q+n)==' ')){
                printf("qin- %s\n",q); 
                memmove(q,q+n+1,strlen(q+n+1)+1);
                r-=(n+1);
           }
           else if((*(q-1)=='\0') && (*(q+n)=='\0')){
                printf("qin- %s\n",q); 
                memmove(q,q+n,strlen(q+n)+1);
                r-=n;
           }
           else{
                q+=n;    
           }
           printf("q2- "); 
           puts(q);
        }
      
        if(p+n<r){
            *(p+n)=' ';
        }
        p=NULL;
    }
    
}
int main() {
      char str[100];
      puts("enter the string- ");
      fgets(str,100,stdin);
      str[strlen(str)-1]=0;
      
      puts(str);
      removee(str);
      printf("output- ");
      puts(str);
      
    return 0;
}



