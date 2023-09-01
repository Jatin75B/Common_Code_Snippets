/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/

class Solution
{
public:
    // remember 4 columns::: 0000 1111 21012112 2222
    void sortColors(vector<int> &a)
    {
        int low = 0, mid = 0, high = a.size() - 1;
        while (mid <= high)
        {
            if (a[mid] == 0)
            {
                swap(a[low++], a[mid++]);
            }
            else if (a[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(a[high--], a[mid]); // mistake prone
            }
        }
    }
};