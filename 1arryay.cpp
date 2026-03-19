#include<iostream>
using namespace std;
int main(){
    int marks[6]= {99,100,54,36,88,77};
    int size = 6;

    cout<<sizeof(marks)<<endl;

    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}