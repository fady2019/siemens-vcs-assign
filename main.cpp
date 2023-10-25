#include <bits/stdc++.h>

using namespace std;

int getSum(vector<int> nums)
{
    return accumulate(nums.begin(), nums.end(), 0);
}

double getAverage(vector<int> nums)
{
    return getSum(nums) / ((double)nums.size());
}

int getMin(vector<int> nums)
{
    return *min_element(nums.begin(), nums.end());
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Sum = " << getSum(nums) << endl;
    cout << "Avg = " << getAverage(nums) << endl;
    cout << "Min = " << getMin(nums) << endl;

    return 0;
}
