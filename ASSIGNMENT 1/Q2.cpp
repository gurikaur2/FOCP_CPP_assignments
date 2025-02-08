/* WAP that performs the following operations on an array:
i. Accept an integer array from the user (size determined at runtime)
ii. Reverse the array and display it 
iii. Find and display the second largest and second smallest elements in the array.  */

#include <iostream>

using namespace std;

void acceptArray(int arr[], int n) 
{
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }
}

void revArray(int arr[], int n) {
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void second(int arr[], int n) 
{
    if (n < 2) 
    {
        cout << "Array must contain at least two elements to find the second largest and second smallest elements." << endl;
        return;
    }

    for (int i = 0; i < n - 1; ++i) 
    {
        for (int j = 0; j < n - i - 1; ++j) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int secondSmallest = arr[1];
    int secondLargest = arr[n - 2];

    cout << "Second smallest element: " << secondSmallest << endl;
    cout << "Second largest element: " << secondLargest << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    acceptArray(arr, n);

    revArray(arr, n);

    second(arr, n);

    return 0;
}
