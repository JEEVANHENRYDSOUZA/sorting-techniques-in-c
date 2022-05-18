//binary sorting o(n^2)  technique
#include<iostream>
using namespace std;
void binary(int array[],int size){

    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
}
void print(int array[],int size){

    for(int i=0;i<=size-1;i++){
        cout<<array[i]<<endl;
    }
}

int main(){
    cout <<"this is binary sorting technique" <<endl;
   

    int array[10]={9,8,7,6,5,4,0,3,2,1};
    cout<<"array before sorting is "<<endl;
    print(array,10);
    binary(array,10);
    cout<<"array after sorting is "<<endl;


    print(array,10);

    return 0;
}
