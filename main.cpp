#include <bits/stdc++.h>

using namespace std;

int getSum(vector<int> nums)
{
    return accumulate(nums.begin(), nums.end(), 0);
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Sum = " << getSum(nums) << endl;

    return 0;
}
