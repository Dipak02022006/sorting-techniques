#include <iostream>
using namespace std;
int main()
{
    int arr[50], n, i, j, temp;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter array elements:\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\nSorted array: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
