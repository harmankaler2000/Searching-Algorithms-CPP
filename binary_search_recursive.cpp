#include<iostream>
#include<algorithm>
using namespace std;

//using recursion

int Binary_Search(int arr[], int left, int right, int value)
{
    if(right >= left)
    {
        int mid = left + (right - left) / 2;

        //if this element is present at the middle
        if(arr[mid] == value)
            return mid;
        
        //if element is smaller than mid then
        //go to the left
        if(arr[mid] > value)
            return Binary_Search(arr, left, mid - 1, value);
        
        //else go to the right side of the array
        return Binary_Search(arr, mid + 1, right, value);
    }

    //element not found
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
    sort(arr, arr + size);
    int result = Binary_Search(arr, 0, size - 1, key);
    (result == -1)?cout<<"Element is not present":cout<<"Element is present at: "<<result;
    return 0;
}