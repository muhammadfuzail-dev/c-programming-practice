#include <iostream>
#define SIZE 10
using namespace std;
int main(){
    int ar1[SIZE]={1,2,3,5,5,5,6,7,9,9};
    int ar2[SIZE];
    int unique =0;
    cout<<"printing the origional array\n";
    for(int i =0;i<SIZE ;i++){
        cout<<ar1[i]<<"    ";
    }
    cout<<endl;
    for(int i=0;i<SIZE ; i++){
        bool isdoblicate =false;
        for(int j=0;j<unique;j++){
            if(ar2[j]==ar1[i]){
                isdoblicate=true;
                break;

            }
        }
        if(!isdoblicate){   
            ar2[unique]=ar1[i];
            unique++;
        }
    }
    cout<<"printing array 2 without doblicate \n";
    for(int i =0;i<unique ;i++){
        cout<<ar2[i]<<"    ";
    }
    
}