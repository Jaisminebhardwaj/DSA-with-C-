#include<iostream>
#include<vector>
using namespace std;
int main(){

    //creating a vector
    vector<int> vec;
    vector<char> vec1 = {'a','b','c','d','e'}; //vector of size 5
    vector<int> vec2(5,10); //vector of size 5 and all elements are 10

    //for each loop to print vector elements
    for( char element : vec1){
        cout<<element<< " "<<endl;
    }

    //vector functions
    cout<<"Size of vec2 is "<< vec2.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    // cout<<"Size of vec after pushing elements is :"<<vec.size()<<endl;
    // vec.pop_back();
    // cout<<"Size of vec after popping an element is :"<<vec.size()<<endl;
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // cout<<vec.at(0)<<endl;

    //

    //how vectors are created dynamically
    cout<<"size of vec is : "<<vec.size()<<endl;
    cout<<"capacity of vec is : "<<vec.capacity()<<endl;


    return 0;

}
