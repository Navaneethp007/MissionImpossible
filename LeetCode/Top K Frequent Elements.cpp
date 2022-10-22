class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        	mp[nums[i]]++;
        vector<pair<int,int>>vc;
        for(map<int,int>::iterator i=mp.begin();i!=mp.end();i++)
        	vc.push_back(pair(i->first,i->second));
        sort(vc.begin(),vc.end(),[](pair<int,int>p1,pair<int,int>p2){return p1.second>p2.second; });
        vector<int>op;
        for(int i=0;i<vc.size();i++)
        	{
        		if(k==0)
        			break;
        		k--;
        		op.push_back(vc[i].first);
        	}
        return op;
    }
};
