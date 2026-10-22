class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int week_start = 1;
        int daily_money = 1;
        for(int day = 1; day <= n; day++) {
            total += daily_money;
            if(day % 7 == 0) {
                week_start++;
                daily_money = week_start;
            } else {
                daily_money++;
            }
        }
        return total;
    }
};
