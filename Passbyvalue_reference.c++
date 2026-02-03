#include<iostream>
using namespace std;
//function to demonstrate pass by value
void changeX(int x){
    x = 20; //this change will not reflect outside this function
}

//function to demonstrate pass by reference
void changearr(int arr[] , int size){
    for(int i=0; i<size; i++){
        arr[i] = arr[i] * 2; //this change will reflect outside this function
        cout<<arr[i]<<" ";
    }
}
void changeY(int &y){
    y = 30; //this change will reflect outside this function
}
int main(){
    //pass by value 
    int x = 10;
    changeX(x);
    cout<<"Value of x is : "<<x<<endl;

    //pass by reference
    int y = 10;
    changeY(y);
    cout<<"Value of y is : "<<y<<endl;

    //pass array by reference
    int arr[5] = {1,2,3,4,5};
    changearr(arr, 5);
    cout<<"Array elements after modification are : ";

    return 0;
}