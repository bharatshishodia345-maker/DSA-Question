# include <iostream>
using namespace std;

void reverse(int arr[],int size){

    int start = 0;
    int end = size - 1;

    while(start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void printarray(int arr[],int size){
    for(int i = 0; i<=size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,0};
  int size = 9;
  reverse(arr, size);
  printarray(arr,size);
  
}