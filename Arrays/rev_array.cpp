// Program to reverse an array.

#include <iostream>
using namespace std;

void rev_array(int arr[], int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void print_array(int arr[], int size)
{
    for(int i=0; i < size; i++)
    cout<<arr[i]<<" ";

    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++)
    cin>>arr[i];
    print_array(arr, n);
    rev_array(arr, 0, n-1);

    cout<<"Reversed array is "<<endl;
    print_array(arr, n);
    return 0;
}
