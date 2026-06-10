// INSERTING AN ELEMENT P AT A SPECIFIC POSITION IN ARRAY
#include <iostream>
using namespace std;
int main(){
    int k=5;
    int n=10;
    int p=2;
    int ar[n]={1,2,3,4,5};

    
    for(int i=k;i>=p;i--){
        ar[i]=ar[i-1];
    }
    ar[p]=12;
    
    
    for(int i=0;i<=k;i++){
        cout<<ar[i]<<" ";
    }

}