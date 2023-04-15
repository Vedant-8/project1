#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i=0; i<size; i++){

        if( arr[i] == key){

            return 1;
        }
    }
    return 0;
}



int main(){

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements: ";
    for( int i=0; i<size; i++){
        cin>> arr[i];
    }

    cout<<"Enter the key/number to be found: ";
    int key;
    cin>>key;

    bool found = search(arr, size, key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }

}