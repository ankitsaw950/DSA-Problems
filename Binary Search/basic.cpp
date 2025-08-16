#include <iostream>
#include <vector>
using namespace std;

// int binarySearch(vector<int> arr, int target)
// {

//     int low = 0, high = arr.size() - 1;

//     while (low <= high)
//     {
//         // int mid = (low + high) / 2;
//         int mid = low + (high-low)/2;

//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (arr[mid] < target)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     return -1; // element not found in the array
// }

int binarySearch(vector<int> &arr, int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
    {
      return   binarySearch(arr, mid + 1, high, target);
    }

    else
    {
      return   binarySearch(arr, low, mid - 1, target);
    }
}

int main()
{
    vector<int> nums = {10, 12, 15, 17, 19};
    int target = 150;

    int result = binarySearch(nums, 0, nums.size() - 1, target);

    if (result == -1)
    {
        cout << "The element you are looking for is not present in the array.";
    }
    else
    {
        cout << "The element you are looking for is  present in the array at index :" << result << endl;
        ;
    }

    return 0;
}