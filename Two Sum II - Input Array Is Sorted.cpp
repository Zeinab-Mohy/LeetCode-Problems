class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j=1;
        vector<int>v;
        for(int i=0;i<numbers.size();i++){
            if(binary_search(numbers.begin(),numbers.end(),
            (target-numbers[i]))==true){
                // v.push_back(i+1);
                if(lower_bound(numbers.begin(),numbers.end(),(target-numbers[i]))-numbers.begin()!=i){
                    v.push_back(i+1);
                    v.push_back(lower_bound(numbers.begin(),numbers.end(),(target-numbers[i]))-numbers.begin()+1);
                    break;
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};
