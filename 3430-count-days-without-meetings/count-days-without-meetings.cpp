class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());

        int count = 0;
        int num = 1;  

        for (auto& meeting : meetings) {
            int start = meeting[0], end = meeting[1];

            if (start > num) {
                count += (start - num);   
            }
            num = max(num, end + 1);   
        }

     
        if (num <= days) {
            count += (days - num + 1);
        }

        return count;

    }
};