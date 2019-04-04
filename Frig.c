#include<stdio.h>

int main(){
    char mix[]={"a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z"};
    char str[500]=("text here");
    int i=0;
    for(i=0; str[i] != '\0'; i++ ){
        if (str[i]!=32){
            if(str[i]==116){
                str[i]=97;
            }
            if(str[i]==97){
                str[i]=99;
            }
        }
    }
    
    
    
    printf("%s",str);
    return 0;
}