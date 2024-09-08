#include<iostream>
using namespace std;
int main (){
    int m;
    cout<<"Enter the no. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no. of columns : ";
    cin>>n;
    int a[m][n];
    cout<<"Enter elements of array : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int I1,r1,I2,r2;
    cout<<"Enter I1 : ";
    cin>>I1;
    cout<<"Enter r1 : ";
    cin>>r1;
    cout<<"Enter I2 : ";
    cin>>I2;
    cout<<"Enter r2 : ";
    cin>>r2;
    int sum = 0;
    for(int i=I1;i<=I2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=a[i][j];
        }
    }
    cout<<"The sum of rectangle from (I1,r1) & (I2,r2) is "<<sum;
}