#include<iostream>
using namespace std;
int main (){
    int m;
    cout<<"Enter number of rows & column (Should be odd number.) : ";
    cin>>m;
    int arr[m][m];
    cout<<"Enter elements of array : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==(m/2) || j==(m/2)){
                cout<<arr[i][j];
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}