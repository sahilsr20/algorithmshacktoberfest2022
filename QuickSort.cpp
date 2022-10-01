/*
Name - SAHIL SUCHARITA ROUT
ROLL NO. - 20051362
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int partition(vector<int> &a, int low, int high)
{
    int pivot = low;
    int i = (low + 1), j = high;

    while(i < j)
    {
        while(a[i] < a[pivot])
        {
            i++;
        }
        while(a[j] > a[pivot])
        {
            j--;
        }
        if(i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[pivot], a[j]);
    return j;
}

void quickSort(vector<int> &a, int low, int high)
{
    if (low < high)
    {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    vector<int> a = {2, 8, 1, -17, 32, 12, 36, 0, 19, 7};
    cout << "Array before sorting: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    quickSort(a, 0, 9);
    cout << "\nSorted array: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}