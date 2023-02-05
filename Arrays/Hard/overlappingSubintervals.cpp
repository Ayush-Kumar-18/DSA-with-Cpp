// https://practice.geeksforgeeks.org/problems/8a644e94faaa94968d8665ba9e0a80d1ae3e0a2d/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=overlapping_intervals

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    vector<vector<int>> mi;
    if (intervals.size() == 0)
    {
        return mi;
    }
    sort(intervals.begin(), intervals.end());
    vector<int> tempI = intervals[0];
    for (auto i : intervals)
    {
        // merging the intervals..
        if (i[0] <= tempI[1])
        {
            tempI[1] = max(i[1], tempI[1]);
        }
        else
        {
            mi.emplace_back(tempI);
            tempI = i;
        }
    }
    // adding last Interval
    mi.emplace_back(tempI);
    return mi;
}