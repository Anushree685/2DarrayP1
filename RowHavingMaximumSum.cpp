#include<iostream>
using namespace std;
int main (){
    int m;
    cout<<"Enter the no. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no. of columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter Elements of array : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int max = 0,r;
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += arr[i][j];
        }
        if(max<sum) {
            max = sum;
            r = i;
        }

    }
    cout<<r+1<<" is the rows no of largest sum .";
}