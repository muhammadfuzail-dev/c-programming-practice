#include <stdio.h>
#define SIZE 6
int main(){
    int ar[SIZE]={23,4,34,23,2,41};
    int total=0;
    printf(" the sum of array is given bellow \n");
    for(int i=0;i<SIZE;i++){
        total=total + ar[i];
    }
    printf(" The SUm is : %d ",total);
    
    return 0;
}