#include <iostream>
using namespace std;

void printsumrow(int arr[][3], int row , int col){
    for(row = 0; row<3;row++){
        int sum = 0;
        for(col = 0; col<3;col++){
            sum += arr[row][col];

        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
void printsumcol(int arr[][3], int row , int col){
    for(col = 0; col<3;col++){
        int sum = 0;
        for(row = 0; row<3;row++){
            sum += arr[row][col];

        }
        cout<<sum<<" ";
    }
    cout<<endl;
}


int main(){

    int arr[3][3];

    cout<<"Enter array element"k<<endl;
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    printsumrow(arr, 3 , 3);
    printsumcol(arr, 3 , 3);

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout <<" " <<endl;
    }

}