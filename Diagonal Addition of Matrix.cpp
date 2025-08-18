#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows for matrix :";
    cin>>m;
    cout<<"Enter the number of columns for matrix :";
    cin>>n;
    if(m!=n){
        cout<<"The matrix is not square, diagonal addition is not possible"<<endl;
        return 0;
    }   
    int mat[m][n];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the elements of the matrix 1:";
            cin>>mat[i][j];
        }
    }
    cout<<"The matrix is:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    int diagsum=0;
    for(int i=0;i<n;i++){
        diagsum+=mat[i][i];
    }
    cout<<"Sum of diagonal:"<<diagsum<<endl;
}