class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;

        for(int asteroid : asteroids) {
            bool check = false;
            while(result.size() > 0 && result.back() > 0 && asteroid < 0 && !check){
                if(result.back() >= -asteroid) check = true;
                if(result.back() <= -asteroid) result.pop_back(); 
            }
            if(!check) result.push_back(asteroid);
        }
        return result;
    }
};