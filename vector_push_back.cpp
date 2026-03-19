#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec ;

    cout<<" size = "<<vec.size()<<endl;
    vec.push_back(56);
    vec.push_back(45);
    vec.push_back(77);

    cout<<"Size after pushback = "<<vec.size()<<endl;

    for(int val : vec){
        cout<<val<<endl;
    }
    return 0;
}
