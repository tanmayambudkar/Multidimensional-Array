#include <iostream>
using namespace std;
int main(){
    int m,n,x,y;
    cout<<"Enter the number of rows for matrix 1:";
    cin>>m;
    cout<<"Enter the number of columns for matrix 1:";
    cin>>n;
    int mat[m][n];
    cout<<"Enter the number of rows for matrix 2:";
    cin>>x;
    cout<<"Enter the number of columns for matrix 2:";
    cin>>y;
    int mat2[x][y];
    if(n==x){
        cout<<"The matrices can be multiplied"<<endl;
    }else{
        cout<<"The matrices cannot be multiplied"<<endl;
        return 0;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the elements of the matrix 1:";
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<"Enter the elements of the matrix 2:";
            cin>>mat2[i][j];
        }
    }
    int mat3[m][y];
    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            mat3[i][j]=0;
            for(int k=0;k<n;k++){
                mat3[i][j]+=mat[i][k]*mat2[k][j];
            }
        }
    }
    cout<<"The matrix 1 is:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The matrix 2 is:"<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Final matrix is:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
}