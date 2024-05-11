#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
        vector<pair<double, int>> workers;
        for (int i = 0; i < n; ++i) {
            // Calculate the wage to quality ratio for each worker
            workers.push_back({double(wage[i]) / quality[i], quality[i]});
        }
        // Sort the workers based on their wage to quality ratio
        sort(workers.begin(), workers.end());

        double minCost = numeric_limits<double>::max();
        int qualitySum = 0;
        priority_queue<int> maxHeap;

        for (auto& [ratio, qual] : workers) {
            qualitySum += qual;
            maxHeap.push(qual);

            // If we have more than k workers, remove the worker with the maximum quality
            if (maxHeap.size() > k) {
                qualitySum -= maxHeap.top();
                maxHeap.pop();
            }

            // If we have exactly k workers, calculate the total cost
            if (maxHeap.size() == k) {
                minCost = min(minCost, ratio * qualitySum);
            }
        }

        return minCost;
    }
};
