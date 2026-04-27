// arrays of string contains a null character at the end...c

#include <stdio.h>
int main(){
    char ar[]={'a','b','c','d','e','\0'};
    for(int i=0;i<6;i++){
        printf("%c(%d)\n",ar[i],ar[i]);
    }
    return 0;
}