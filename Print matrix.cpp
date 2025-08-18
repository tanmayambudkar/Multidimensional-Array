#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int mat[m][n];
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the elements of the matrix: ";
            cin>>mat[i][j];
        }
    }
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    

}