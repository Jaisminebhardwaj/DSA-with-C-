#include<iostream>
#include<climits>
using namespace std;

//creating a function for reversing an array
void reverseArray(int arr[], int size){
    int start = 0 ;
    int end = size - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

int main(){
    // int arr[5];
    // for(int i=0;i<=4;i++){
    //     cout<<"enter values of "<<i<<">>";
    //     cin>>arr[i];
    // }
    // for(int i=0;i<=4;i++){
    //     cout<<"Array elements are : "<<arr[i]<<endl;
    // }
    

    //calculate the smallest and largest element in the array
    // int nums[] = {5,12,0,9,100};
    // int smallest = INT_MAX;
    // int largest = INT_MIN;
    // int min_index = 0;
    // int max_index = 0;
    //     for (int i=0 ; i<5 ; i++){
    //     smallest = min(smallest, nums[i]);
    //     largest = max(largest, nums[i]);
    // }
    // for (int i=0 ; i<5 ; i++){
    //     min_index = (nums[i] == smallest) ? i : min_index;
    //     max_index = (nums[i] == largest) ? i : max_index;
    // }
    // cout<<"Smallest element is : "<<smallest<<endl;
    // cout<<"Largest element is : "<<largest<<endl;

    // cout<<"Smallest element index is : "<<min_index<<endl;
    // cout<<"Largest element index is : "<<max_index<<endl;

    //linear search in an array
    // int arr[] = {10,23,45,70,88,90};
    // int size = sizeof(arr)/sizeof(int);
    // int key;
    // cout<<"Enter the key to be searched >> ";
    // cin>>key;

    // for (int i=0; i<size; i++){
    //     if(arr[i] == key){
    //         cout<<"Key found at index "<<i<< " with value " << arr[i] << endl;
    //         break;
    //     }
    //     return -1;
    // }

    //reverse an array
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);
    reverseArray(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
} 