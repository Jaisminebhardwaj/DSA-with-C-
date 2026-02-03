#include<iostream>
#include<climits>
#include <vector>
#include <algorithm>
using namespace std;

//time complexity: O(nlogn)(optimal approach)
vector<int>majorityElement(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());
     
    int freq = 1 , ans = nums[0];
    for ( int i=1 ; i< n ; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else {
            freq = 1 , ans = nums[i];
        }
        if (freq > n/2){
            return {ans};
        }
    }
    
}


//time complexity: O(n^2)
// vector<int>majorityElement(vector<int> &nums){
//     int n = nums.size();
//     for(int val: nums){
//         int freq = 0;
//         for( int el : nums){
//             if(el == val){
//                 freq++;
//             }
//         }
//         if (freq > n/2){
//             return {val};
//         }
//     }
//     return {};
// }
int main(){
    vector<int>nums = {5,5,5,1,2,3,5,4,5};
    vector<int> result = majorityElement(nums);
    cout<<"Majority Element: "<<result[0]<<endl;
    return 0;
}