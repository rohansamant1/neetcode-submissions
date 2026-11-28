class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        if(stones.size()==1)
        return stones[0];

        int i=stones.size()-1;
        
        while(i!=0)
        {
            sort(stones.begin(),stones.end());
            int j=i-1;
            int temp=stones[i]-stones[j];
            stones.pop_back();
            stones.back()=temp;
            i--;
        }
        

        return stones[0];
        
    }
};