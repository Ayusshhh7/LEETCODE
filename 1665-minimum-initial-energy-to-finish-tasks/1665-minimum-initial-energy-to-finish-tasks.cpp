class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(), [](auto &a, auto &b) {
            return a[1] - a[0] > b[1] - b[0];
        });

        int energy = 0, current = 0;

        for (auto &task : tasks) {
            energy = max(energy, current + task[1]);
            current += task[0];
        }

        return energy;
    }
};