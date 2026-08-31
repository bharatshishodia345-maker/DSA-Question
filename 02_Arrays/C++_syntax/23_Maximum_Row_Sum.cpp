#include <iostream>
using namespace std;

void printmaxsum(int arr[][3], int row , int col){
    int maxsum = INT16_MIN;
    int Indexrow = 0;
    for(row = 0; row<3;row++){
        int sum = 0;
        for(col = 0; col<3;col++){
            sum += arr[row][col];

        }
        if(maxsum < sum){
            maxsum = sum;
            Indexrow = row;
        }
    }
    cout<<"The max sum is"<<maxsum<<endl;
    cout<<"The row number is"<<Indexrow<<endl;
}



int main(){

    int arr[3][3];

    cout<<"Enter array element"<<endl;
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    printmaxsum(arr, 3 , 3);
    

    

}