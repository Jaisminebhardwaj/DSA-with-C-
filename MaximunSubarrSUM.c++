#include<iostream>
#include<climits>
#include <vector>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,5};

    //print all the subarrays in the array
    // int n=5;
    // for(int st=0;st<n;st++){
    //     for(int end=st;end<n;end++){
    //         for(int k=st;k<=end;k++){
    //             cout<<arr[k];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    //maximum subarray sum
    vector<int> arr1 = {1,2,3,4,5};
    int n = 5;
    int maxSum = INT_MIN;
    for(int st=0 ; st<n ; st++){
        int currSum=0;
        for(int end=st; end<n; end++){
            currSum += arr[end];
            maxSum = max(maxSum , currSum);
        }
    }
    cout<<"Maximum Subarray Sum is : "<<maxSum<<endl;
    return 0;
}