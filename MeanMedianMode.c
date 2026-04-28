#include <stdio.h>
#define SIZE 99



unsigned int meanofarray(unsigned int answer[],int size){
    printf("**********MEAN***********");
    puts("");
    long long int total=0;
    for(int i=0;i<size;i++){
        total+=answer[i];
    }
    double mean=(double)total/size;
    printf("\tMean = %f",mean);
    puts("\n");
}



void sortedarray(unsigned int b[],int size){
    for(int i=1;i<size;i++){
        for(int j=0;j<size -1;j++){
            if( b[j]>b[j+1]){
                int temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
}



void medianofarray(unsigned int answer[],int size){
    puts("**********MEDIAN***********");
    sortedarray(answer,size);
    int num=size/2;
    printf("\tMedian = %u",answer[num]);
    puts("\n");
}



void modeofarray(unsigned int answer[],unsigned int frequency[],int size){
    puts("**********Mode***********\n");
    for(int i=1;i<10;i++){
        frequency[i]=0;
    }
    for(int i=0;i<size;i++){
        ++frequency[answer[i]];
    }
    
    printf("ratings\tfrequency\t histogram\n");
    for(int i=0;i<10;i++){
        printf("%d\t%u\t\t",i,frequency[i]);
        for(int j=1;j<=frequency[i];j++){
            printf("@");
        }
        puts("");





    }
    int max=0;
    int mode;
    for(int i=0;i<10;i++){
        if(frequency[i]>max){
            max=frequency[i];
            mode=i;
        }
    }
    
    
    printf("Mode = %u(%u times)",mode,max);
}



int main(){
    unsigned int frequency[10]={0};
    unsigned int array[SIZE]={1,2,4,6,7,0,9,0,5,4,5,4,6,3,6,8,2,4,6,9,4,5,6,5,4,2,6,7,4,2,5,6,7,5,3,6,9,8,6,6,3,4,3,6,8,4,8,6,6,0,4,6,4,0,6,3,6,6,3,2,2,6,5,0,4,3,6,0,8,5,5,5,5,5,7,7,8,8,7,6,9,5,6,3,3,5,9,3,3,3,3,3,3,8,5,3,2,1,1};
    meanofarray(array,SIZE);
    medianofarray(array,SIZE);
    modeofarray(array,frequency,SIZE);

    return 0;
}