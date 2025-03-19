#include <iostream>
#include <vector>
using namespace std;
int longestSubArrayLen(vector<int> num, int s)
{
    int n = num.size();
    int len = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + num[j];
            if (sum == s)
                len = max(len, j - i + 1);
        }
    }
    return len;
}
int main()
{
    vector<int> num = {15, -2, 2, -8, 1, 7, 10, 23};
    int k = 0;
    int ans = longestSubArrayLen(num, k);
    cout << "Length of Longest Subarray with sum 3 : " << ans;
}