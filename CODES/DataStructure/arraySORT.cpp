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
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "Array sorted \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }
    int ele, low, mid, high, chk = 0;
    low = 0;
    high = size - 1;
    cout << "Enter the number\n";
    cin >> ele;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
        {
            chk = 1;
            break;
        }
        else if (arr[mid] < ele)
        {
            low = mid + 1;
        }

        else if (arr[mid] > ele)
        {
            high = mid - 1;
        }
    }
    if (chk == 1)
    {
        cout<<"FOUND !\n";
    }
    else
    {
        cout<<"NOT FOUND !!\n";
    }

    return 0;
}