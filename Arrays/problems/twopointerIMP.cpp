 vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        vector<int>v;
        while(i<j){
            if(numbers[i]+numbers[j] == target)
            {
                return {i+1, j+1};//use tuple
                
            }
            else if(numbers[i]+numbers[j] > target)
                j--;
            else
                i++;
        }
        return v;