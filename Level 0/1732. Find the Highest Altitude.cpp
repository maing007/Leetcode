class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int currentAltitude = 0;
        int maxAltitude = 0; 
        
        for (int v : gain) {
            currentAltitude += v;
            if (currentAltitude > maxAltitude) {
                maxAltitude = currentAltitude;
            }
        }
        
        return maxAltitude;
    }
};

// Saw the visual example of this problem as graph 
// applied conditionail apporach to solve it
