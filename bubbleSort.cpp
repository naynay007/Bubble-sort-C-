#include <iostream>;

using namespace std;
 
int main(){

    int size = 10;
    int arr[10] = {4, 1, 8, 12 ,3, 11, 0, 2, 20, 9};

    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            cout<<"index: "<< i+1 << " = "<< arr[i]<< '\n';
            }
        }
    }


    cout<<arr;

    for (int i = 0; i < 10; i++){
        cout<<"index: "<< i+1 << " = "<< arr[i]<< '\n';

    }

    

  
    return 0;
}