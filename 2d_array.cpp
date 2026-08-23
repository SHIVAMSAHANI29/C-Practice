#include<iostream>
using namespace std;

int main()
{
    int matrix[2][3] = {{1,2,3},{4,5,6}};

    
      // Outer loop for rows
    for (int i = 0; i < 2; i++) {
        // Inner loop for columns
        for (int j = 0; j < 3; j++) {
            cout<<matrix[i][j]<<" ";
          
        }
        cout<<endl;
    }
    return 0;
}