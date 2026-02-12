#include <iostream>
using namespace std;
int main()
{
    int arr[50], n, i, j, pos, temp;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[pos])
            {
                pos = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
    cout << "\nSorted array: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
