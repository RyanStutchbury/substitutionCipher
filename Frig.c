#include<stdio.h>

int main(){
    char mix[]={" abcdefghijklmnopqrstuvwxyz"};
    char key1[]={"qwertyuiopasdfghjklzxcvbnm"};
    char str[500]=("lets hope this works");
    int i=0;
    for(i=0; str[i] != '\0'; i++ ){
        switch(str[i]){
        case(32):
            break;
        case('a'):
            str[i]='q';
            break;  
        case('b'):
            str[i]='w';
            break;
        case('c'):
            str[i]='e';
            break;
        case('d'):
            str[i]='r';
            break;
        case('e'):
            str[i]='t';
            break;
        case('f'):
            str[i]='y';
            break;
        case('g'):
            str[i]='u';
            break;
        case('h'):
            str[i]='i';
            break;
        case('i'):
            str[i]='o';
            break;
        case('j'):
            str[i]='p';
            break;
        case('k'):
            str[i]='a';
            break;
        case('l'):
            str[i]='s';
            break;
        case('m'):
            str[i]='d';
            break;
        case('n'):
            str[i]='f';
            break;
        case('o'):
            str[i]='g';
            break;
        case('p'):
            str[i]='h';
            break;
        case('q'):
            str[i]='j';
            break;
        case('r'):
            str[i]='k';
            break;  
        case('s'):
            str[i]='l';
            break;
        case('t'):
            str[i]='z';
            break;
        case('u'):
            str[i]='x';
            break;
        case('v'):
            str[i]='c';
            break;
        case('w'):
            str[i]='v';
            break;
        case('x'):
            str[i]='b';
            break;
        case('y'):
            str[i]='n';
            break;
        case('z'):
            str[i]='m';
            break;
        }

            }
    
    
    
    printf("%s",str);
    return 0;
}