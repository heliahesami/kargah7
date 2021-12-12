#include <iostream>

using namespace std;


int binarySearch(int arr[], int left, int right, int x)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;


        if (arr[mid] == x)
            return mid;


        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);


        return binarySearch(arr, mid + 1, right, x);
    }


    return -1;
}

int main()
{
    int arr[] = { 2, 3, 4, 8, 10, 18, 23, 31, 37, 40 };
    int x ;

    cout << "enter a accidental number from 2-40 --> ";
    cin >> x;


    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);

    (result == -1) ? cout << "Element is not present in array" << endl : cout << "Element is present at index " << result << endl;
    return 0;
}