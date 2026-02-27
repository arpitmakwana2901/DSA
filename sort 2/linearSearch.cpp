#include<iostream>
using namespace std;

int main(){
    int n, key;
    int arr[100];

    cout<<"Enter number of elements:";
    cin>>n;

    cout<<"Enter elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter element to Search: ";
    cin>>key;

    bool found = false;
    char choice = 'y';

    while(choice == 'y' || choice == 'Y'){
        for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout<<"Element found at position"<<i+1<<endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout<<"Element is not found: ";
    }

    cout<<"Search for second time(y/n):  ";
    cin>>choice;
}
}