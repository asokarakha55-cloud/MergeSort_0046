#include <iostream>
using namespace std;

int arr[20], B[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang Element Array : ";
        cin >> n;
        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n-------------------" << endl;
    cout << "\nInputkan isi element array" << endl;
    cout << "\n-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke-" << i << " : ";
        cin >> arr[i];
    }
}

void mergesort(int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;

    mergesort(low, mid);
    mergesort(mid + 1, high);

    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++;
    }

    while (j <= high)
    {
        B[k] = arr[i];
        i++;
        k++;
    }

    for (int x = low; x <= high; x++)
    {
        arr[x] = B[x];
    }
}

void output()
{
    cout << "\nData setekah diurutkan (Merge sort) : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
