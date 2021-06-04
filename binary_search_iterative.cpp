#include<iostream>
#include<algorithm>
using namespace std;

int Binary_Search(int arr[], int left, int right, int value)
{
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid] == value)
            return mid;
        if(arr[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
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