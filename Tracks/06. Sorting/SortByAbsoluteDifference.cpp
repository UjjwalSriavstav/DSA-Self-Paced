// Rest of the code is already given

class Solution
{
    public:
    void sortABS(int A[], int N, int k)
    {
    stable_sort(arr, arr + n, [k](int a, int b)
    {
        if (abs(a - k) < abs(b - k))
            return true;
        else
            return false;
    }
                }
};
