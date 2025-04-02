class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max_candy = *max_element(candies.begin(), candies.end());
        for(int candy : candies) {
            if(candy + extraCandies >= max_candy)
                result.push_back(true);
            else result.push_back(false);
        }

        return result;
    }
};