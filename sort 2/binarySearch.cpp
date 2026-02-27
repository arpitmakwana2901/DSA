#include<iostream>
using namespace std;

int sort(int arr[], int n){
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){

                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }

        } return arr[n];
    }

int main(){
    int n, key;


    cout<<"Enter number of elements:";
    cin>>n;

    int arr[n];


    cout<<"Enter elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter element to Search: "<<endl;
    cin>>key;

    sort(arr, n);
    cout<<"Sorted Array"<<endl;

    int start = 0;
    int end = n-1;
    bool found = false;
    
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == key){
            cout<<"Element found at position"<<mid + 1<<endl;
            found = true;
            break;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }
    }

    if(!found){
        cout<<"Element is not found";
    }
}