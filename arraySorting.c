// sorting of an array and modified an array...
#include <stdio.h>
#define SIZE 9


void modifiedarray(int a[],int size){
    for(int i=0;i<size;i++){
        a[i]*=5;
    }
}


int main(){
    int array[SIZE ]={8,2,-1,4,5,4,3,7,1};
    for(int i=0 ;i<SIZE;i++){
        for(int j=0;j<SIZE ;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }


    printf("**** The sorted array's elements are given bellow ****\n");
    puts("");
    for(int i=0;i<SIZE;i++){
        printf("\t\tarray[%d] = %d  \n",i,array[i]);
    }
    puts("");

    modifiedarray(array,SIZE);

    puts("**** *the modified array's elements are as under* **** ");
    puts("");
    for(int i=0;i<SIZE;i++){
        printf("\t\tarray[%d] = %d  \n",i,array[i]);
    }
    return 0;
}