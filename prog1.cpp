#include <iostream>
#include <vector>

using namespace std;

int linear_search(vector<int>& arr, int element)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;

    cout << "Enter the size of array : ";
    cin >> n;

    vector<int>arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter an element at " << i << " : ";
        cin >> arr[i];
    }
    int element;
    cout << "Enter element to search : ";
    cin >> element;
    int result = linear_search(arr, element);

    if (result != -1)
    {
        cout << "Element found at "<< result <<" index " ;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}
