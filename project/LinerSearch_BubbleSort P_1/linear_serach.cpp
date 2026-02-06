// QUESTION --- Using Linaer Search Algorithm find max and min value

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

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Max value: " << max << endl;
    cout << "Min value: " << min << endl;

    cout<<"Enter element to Search: ";
    cin>>key;

    bool found = false;
    char choice = 'y';

    while(choice == 'y' || choice == 'Y'){
        found = false;
        for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout<<"Element found at position: "<< i+1 <<endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout<<"Element is not found: "<<endl;
    }

    cout<<"Search for second time(y/n):  ";
    cin>>choice;
}
}