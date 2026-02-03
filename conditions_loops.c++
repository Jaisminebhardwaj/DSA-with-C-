#include <iostream>
using namespace std;
int main(){
    // int a , b;
    // cin >> a >> b;
    // // a=cin.get(); // it will take only one character input
    
    // if(a > b){
    //     cout << "a is greater than b" << endl;
    // }
    // else{
    //     cout << "b is greater than a" << endl;
    // }
    // int a ;
    // cin>>a;
    // if(a>0){
    //     cout<<"a is positive"<<endl;
    // }
    // else if(a<0){
    //     cout<<"a is negative"<<endl;
    // }
    // else{
    //     cout<<"a is zero"<<endl;
    // }
    // int a = 9;
    // if(a==9){
    //     cout<<"a is 9"<<endl;
    // }
    // if(a>0){
    //     cout<<"a is positive"<<endl;
    // }
    // else{
    //     cout<<"a is negative"<<endl;
    // }

    // char ch;
    // cin>>ch;
    // if(ch>='a' && ch<='z'){
    //     cout<<"ch is lowercase letter"<<endl;
    // }
    // else if(ch>='A' && ch<='Z'){
    //     cout<<"ch is uppercase letter"<<endl;
    // }
    // else if(ch>='0' && ch<='9'){
    //     cout<<"ch is digit"<<endl;
    // }
    // else{
    //     cout<<"ch is special character"<<endl;
    // }

    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout<<sum<<endl;
}

