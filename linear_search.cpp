#include<iostream>
using namespace std;

int linear_search(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
        if(arr[i] == key)
            return i;
    return -1;
}

int main()
{
    int size;
    cout<<"Enter the size of the array: \n";
    cin>>size;
    int arr[size];
    cout<<"Enter the array: \n";
    for(int i = 0; i < size; i++)
        cin>>arr[i];
    int key;
    cout<<"Enter the value to find: \n";
    cin>>key;
    int &ref = arr[0];
    int result = linear_search(&ref, size, key);
    if(result == -1)
        cout<<"Element not found!";
    else
        cout<<"element found at index: "<<result;
    return 0;
}