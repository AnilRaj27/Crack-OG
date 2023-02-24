#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 6;
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    // Approach1: using pairs, return only count/members; TC: O(N*LogN), SC: O(N)
    pair<int, int> p[n + 1];
    for (int i = 0; i < n; i++)
    {
        p[i].first = end[i];
        p[i].second = start[i];
    }

    sort(p, p + n);

    int maxTime = p[0].first;
    int count = 1;
    vector<int> ans = {p[0].second};
    for (int i = 1; i < n; i++)
    {
        if (p[i].second > maxTime)
        {
            maxTime = p[i].first;
            count++;
            ans.push_back(p[i].second);
        }
    }

    for (auto x : ans)
        cout << x << " ";
    cout << endl;

    // Approach2: using struct & comparator
    // https://www.youtube.com/watch?v=II6ziNnub1Q&list=PLgUwDviBIf0p4ozDR_kJJkONnb1wdx2Ma&index=46&ab_channel=takeUforward

    return count;
}

// struct meeting {
//     int start;
//     int end;
//     int pos;
// };
// bool comparator(struct meeting m1, meeting m2)
// {
//     if (m1.end < m2.end) return true;
//     else if(m1.end > m2.end) return false;
//     else if(m1.pos < m2.pos) return true;
//     return false;
// }
// void maxMeetings(int s[], int e[], int n) {
//     struct meeting meet[n];
//     for(int i = 0;i<n;i++) {
//         meet[i].start = s[i], meet[i].end = e[i], meet[i].pos = i+1;
//     }

//     sort(meet, meet+n, comparator);

//     vector<int> answer;

//     int limit = meet[0].end;
//     answer.push_back(meet[0].pos);

//     for(int i = 1;i<n;i++) {
//         if(meet[i].start > limit) {
//             limit = meet[i].end;
//             answer.push_back(meet[i].pos);
//         }
//     }
//     for(int i = 0;i<answer.size();i++) {
//         cout << answer[i] << " ";
//     }

// }
