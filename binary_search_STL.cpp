#include<iostream>
#include<algorithm>
using namespace std;

void show(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "\nThe array is : \n";
    show(arr, size);
    sort(arr, arr + size);
    cout << "\n\nThe array after sorting is : \n";
    show(arr, size);
    cout << "\n\nsearch for 2";
    if (binary_search(arr, arr + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    cout << "\n\nsearch for 10";
    if (binary_search(arr,arr + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
    return 0;
}