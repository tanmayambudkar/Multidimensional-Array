#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter Number of Rows: ";
    cin>>n;
    cout<<"Enter Number of Columns: ";
    cin>>m;
    int a[10][10];
    cout<<"Enter The Values: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "Enter The Element[" << i << "][" << j << "] : ";
            cin>>a[i][j];
    }
    }
    cout<<"The Matrix Is: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
