//improved linear search algorithm
#include<iostream>
using namespace std;

void search(int arr[], int size, int element)
{
    int left = 0;
    int right = size - 1;
    int position = -1;
    while(left<=right)
    {
        //found with left side variable
        if(arr[left] == element)
        {
            position = left;
            cout<<"Element found at: "<<position + 1<<" at the  "<<left + 1<<"attempt";
            break;
        }

        //found from the right hand side of the array
        if(arr[right] == element)
        {
            position = right;
            cout<<"Element found at: "<<position + 1<<" at the "<<size - right<<" attempt";
            break;
        }
        left++;
        right--;
    }
    if(position == -1)
    {
        cout<<"Element not found\n";
    }
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
    search(arr, size, key);
    return 0;
}