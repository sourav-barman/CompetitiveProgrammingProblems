#include <iostream>
using namespace std;

int peakIndexInMountainArray(int [], int);

int main()
{   
    int arr1[] = {3, 5, 3, 2, 0};
    cout << "arr1[] = {3, 5, 3, 2, 0} , Peak Index: ";
    cout << peakIndexInMountainArray(arr1, 5) << endl;

    int arr2[] = {1, 3, 4, 5, 7, 6};
    cout << "arr2[] = {1, 3, 4, 5, 7, 6} , Peak Index: ";
    cout << peakIndexInMountainArray(arr2, 6) << endl;

    int arr3[] = {0, 1, 2, 1, 0};
    cout << "arr3[] = {0, 1, 2, 1, 0} , Peak Index: ";
    cout << peakIndexInMountainArray(arr3, 5) << endl;

    return 0;
}

int peakIndexInMountainArray(int arr[], int n)
{
    int low = 0, up = n-1, mid;

    while(low < up)
    {
        mid = (low + up) / 2;
        if(arr[mid] < arr[mid+1])
            low = mid+1;
        else 
	        up = mid;
    }
    return low;
}