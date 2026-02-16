#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 40;
    int low = 0, high = 4, mid;
    int pos = -1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            pos = mid;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(pos != -1)
        cout << "Element found at index " << pos;
    else
        cout << "Element not found";

    return 0;
}
