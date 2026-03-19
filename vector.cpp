#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers = {20,30,40,50};

    for(int i=0;i<numbers.size();i++){ // prints elements of vectors
   // for(int val : numbers){
        cout<<numbers[i]<<" "<<endl;;
    }
    return 0;
}