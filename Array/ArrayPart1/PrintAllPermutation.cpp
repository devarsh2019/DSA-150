#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    // Recursive function to generate permutations
    void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, vector<int> &freq) {
        // Base case: If the current permutation size matches the original array size, store it
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }

        // Iterate through the elements to generate all possible permutations
        for (int i = 0; i < nums.size(); i++) {
            if (!freq[i]) { // If the element is not already used in the current permutation
                ds.push_back(nums[i]);  // Add the element to the current permutation
                freq[i] = 1; // Mark as used

                recurPermute(ds, nums, ans, freq); // Recurse for the next position

                // Backtrack: Remove the element and mark it as unused
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

public:
    // Function to generate all permutations
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds; // Temporary list to store permutations
        vector<int> freq(nums.size(), 0); // Frequency array to track used elements

        recurPermute(ds, nums, ans, freq);
        return ans;
    }
};

// Driver code
int main() {
    Solution obj;
    vector<int> arr = {1, 2, 3};

    vector<vector<int>> permutations = obj.permute(arr);

    cout << "All permutations:\n";
    for (auto &perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
