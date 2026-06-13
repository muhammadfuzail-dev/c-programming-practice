// REVERSING AN ARRAY
#include <iostream>
#define SIZE 10
using namespace std;
int main(){
    int ar1[SIZE];
    int ar2[SIZE];
    cout<<"Enter the the elements of array 1\n";
    for(int i=0;i<SIZE;i++){
        cin>>ar1[i];
    }
    for(int i=0;i<SIZE;i++){
        cout<<ar1[i]  <<"\t";
    }
    cout<<endl;
    for(int i=0;i<SIZE;i++){
        ar2[SIZE-i-1]=ar1[i];
    }
    cout<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<ar2[i]  <<"\t";
    }

    return 0;
}