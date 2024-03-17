 vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    intervals.push_back(newInterval); // Insert new interval
    sort(intervals.begin(), intervals.end()); // Sort intervals based on start points

    vector<vector<int>> mergedIntervals; // Result vector for merged intervals

    int n = intervals.size();
    int start = intervals[0][0];
    int end = intervals[0][1];

    for (int i = 1; i < n; ++i) {
        if (intervals[i][0] <= end) { // Check for overlapping intervals
            end = max(end, intervals[i][1]); // Merge intervals
        } else { // No overlap
            mergedIntervals.push_back({start, end}); // Store merged interval
            start = intervals[i][0]; // Update start of new interval
            end = intervals[i][1]; // Update end of new interval
        }
    }

    mergedIntervals.push_back({start, end}); // Store last merged interval

    return mergedIntervals;
}
