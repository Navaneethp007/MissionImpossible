//timelimit exceeded
class Solution {
public:
    int maxArea(vector<int>& height) {
        long long int m=0;
        for(long long int i=0;i<height.size()-1;i++)
        {
            long long int j=i+1;
            while(j>i && j<height.size()){
            long long int a=min(height[i],height[j]);
            long long int b=abs((j+1)-(i+1));
            m=max(m,a*b);
            j++;
         }
        }
        return m;
    }
};

//optimal solution
class Solution {
public:
    int maxArea(vector<int>& height) {
        long long int m=0,i=0,j=height.size()-1;
        while(i<j)
        {
           long long int a=abs(i-j);
           long long int b=min(height[i],height[j]);
            m=max(m,a*b);
            if(height[i]<height[j]) i++;
            else if(height[i]>height[j]) j--;
            else
            {
                i++;
                j--;
            }
        }
        return m;
    }
};
