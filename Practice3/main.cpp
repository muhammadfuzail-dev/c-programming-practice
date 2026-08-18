
#include <iostream>
using namespace std;
 struct DynamicArray{
    int *data;
    int size;
    void createArray(int n){
        size=n;
        data=new int[size];

    }
    void fillArray(DynamicArray& arr){
        cout<<"enter the size of Array: "<<arr.size<<"\nElements: ";
        for(int i=0;i<arr.size;i++){
            cin>>arr.data[i];
        }
    }
    DynamicArray deepcopy(DynamicArray& source){
        DynamicArray copy;
        copy.createArray(source.size);
        for(int i=0;i<source.size;i++){
            copy.data[i]=source.data[i];
        }
        return copy;


    }
    void display(DynamicArray& arr){
        for(int i=0;i<arr.size;i++){
            cout<<arr.data[i]<<" ";
        }
    }
 };
int main(){
    DynamicArray origional;
    origional.createArray(6);
    origional.fillArray(origional);
    DynamicArray copy=origional.deepcopy(origional);
    cout<<"\nOrigional Array: "<<endl;
    origional.display(origional);
    cout<<"\n Copy Array:"<<endl;
    copy.display(copy);
    origional.data[0]=111;
    cout<<"\nAfter modifying origional array:"<<endl;
    origional.display(origional);
    cout<<"\nCopy Array "<<endl;
    copy.display(copy);
    return 0;
}