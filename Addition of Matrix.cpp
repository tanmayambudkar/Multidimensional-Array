#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,m,o,p;
    cout<<"Enter Number of Rows for Matrix 1: ";
    cin>>n;
    cout<<"Enter Number of Columns for Matrix 1: ";
    cin>>m;
    int a[10][10];
    int b[10][10];
    int r[10][10];
    cout<<"Enter Matrix 1: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "Enter The Element[" << i << "][" << j << "] : ";
            cin>>a[i][j];
    }
    }
    cout<<"Matrix 1 Is: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Enter Number of Rows for Matrix 2: ";
    cin>>o;
    cout<<"Enter Number of Columns for Matrix 2: ";
    cin>>p;
    cout<<"Enter Matrix 2: ";
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            cout << "Enter The Element[" << i << "][" << j << "] : ";
            cin>>b[i][j];
    }
    }
    cout<<"Matrix 2 Is: \n";
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    if(n==o and m==p){
        for(int i=0;i<o;i++){
            for(int j=0;j<p;j++){
                r[i][j]=a[i][j]+b[i][j];
            }
        }
        cout<<"The resultant Matrix Is: \n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<r[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        cout<<"Addition is Not Possible";
    }
    return 0;
}
