class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        int fives = 0;
        int tens = 0;
        int twenties = 0;

        for (int i = 0; i < bills.size(); i++)
        {
            if (bills[i] == 5)
                fives++;
            else if (bills[i] == 10)
            {
                tens++;
                if (fives)
                    fives--;
                else
                    return false;
            }
            else
            {
                // Can repay 1 10 and 1 5
                if (tens && fives)
                {
                    tens--;
                    fives--;
                }
                // Can repay 3 5s
                else if (fives > 2)
                    fives -= 3;
                else
                    return false;
            }
        }

        return true;
    }
};