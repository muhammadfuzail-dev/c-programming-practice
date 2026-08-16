#include <iostream>
#define PI 3.14
#define Greeting "Hello this is fuzail"
using namespace std;
#include "functions.h"
extern int sharedCounter;
int main(){
    int a=9;
    int &b=a;
    b=23;
    cout<<"         Aliasing"<<endl;
    cout <<"a = "<<a << endl;
    cout<<"     Reference parameter"<<endl;
    int num = 5;
    cout << doubled(num) << endl;
    cout<<"     Define Macro"<<endl;
    cout<<"Greeting : "<<Greeting<<endl;
    cout<<"PI : "<<PI<<endl;
    cout<<"     Extern keyword"<<endl;
    cout<<sharedCounter<<endl;
    cout<<"     Function Pointer"<<endl;
    int (*addptr)(int ,int )=&add;
    cout<<addptr(5,10)<<endl;
    return 0;
}