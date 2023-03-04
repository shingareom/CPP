#include <iostream>
using namespace std;

int main()
{
    int size, temp;
    cout << "Enter the size of array\n";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element\n";
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "The min is " << min << "\n";

    return 0;
}