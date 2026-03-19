#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec ;

    vec.push_back(25);
     vec.push_back(35);
     vec.push_back(45);

      cout<<"Size after push back = "<<vec.size()<<endl;

      vec.pop_back();

      for(int val :vec){
        cout<<val<<endl;
      }
      return 0;

}