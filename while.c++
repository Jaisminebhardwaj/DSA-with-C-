#include<iostream>
using namespace std;
int main(){
    //print and sum of all even numbers from 1 to N
    int N;
    cin>>N;
    // int sum=0;
    // int i=2;
    // while(i<=N){
       // cout<<i<<endl;
        // i=i+2;
        // if(N%2==0){
        //     cout<<i<<endl;
        // }
        // sum=sum+i;
        // i=i+2;
        // }

        //to check if a number is prime or not
        int i=2;
        while (i<N){
            if(N%i==0){
                cout<<N<<" is not a prime number"<<endl;
                break;
            }else{
                cout<<N<<" is a prime number"<<endl;
                break;
            }
            i=i+1;
        }
}