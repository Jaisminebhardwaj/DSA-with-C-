#include<iostream>
#include<climits>
#include <vector>
using namespace std;

//time complexity: O(n)
vector<int> pairSum(vector<int> &arr , int target){
    vector<int>ans;
    int n =arr.size();
    int i=0 , j=n-1;
    while(i<j){
        int psum = arr[i] + arr[j];
        if(psum>target){
            j--;
        }
        else if(psum<target){
            i++;
        }
        else{
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            return ans;
        }
    }

}

//time complexity: O(n^2)
// vector<int> pairSum(vector<int> &arr, int target){
//     vector<int> ans;
//     int n = arr.size();
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i] + arr[j] == target){
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]);
//                 return ans;
//             }
//         }
//     }
//     return ans; // return empty if no pair found
// }
int main(){
    vector<int>arr = {1,2,3,4,5};
    int target = 8;
    vector<int> result = pairSum(arr, target);
    if(result.size() == 2){
        cout<<"Pair found: ("<<result[0]<<", "<<result[1]<<")"<<endl;
    }        
    else{
        cout<<"No pair found"<<endl;
    }
    
    return 0;

}