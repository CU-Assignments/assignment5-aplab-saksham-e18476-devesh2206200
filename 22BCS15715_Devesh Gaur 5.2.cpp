#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min heap

    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop(); // Remove the smallest element if heap size exceeds k
        }
    }
    return minHeap.top(); // The kth largest element
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << "Kth Largest Element: " << findKthLargest(nums, k) << endl;
    return 0;
}
