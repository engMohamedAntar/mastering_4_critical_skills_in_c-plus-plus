#include<iostream>
#include <vector>
#include <set>
using namespace std;
//My solution
vector<int> slidingWindow(vector<int> nums,int k)
{
  vector<int> sub_sum;
    if(k>nums.size())
        return sub_sum;
    set<int> st;
    for( int i=0;i<k;i++)
        st.insert(nums[i]);
    sub_sum.push_back(*st.rbegin()); //to access the last element of a set use rbegin() 
    for(int i=k;i<nums.size();i++)
    {
        //remove
        st.erase(nums[i-k]);
        st.insert(nums[i]);
        sub_sum.push_back(*st.rbegin());
    }
    return sub_sum;
}


// Mostafa Saad solution
/*vector<int> maxSlidingWindow(vector<int>& nums, int k) 
{
	vector<int> sub_max; //this is the vector that will have the max value of each window

	if ((int)nums.size() < k)
		return sub_max;

    multiset<int> mulset;
    for (int i = 0; i < k; ++i) 
		mulset.insert(-nums[i]);		 //the biggist number will be the first instead of the last (because of using "-")
	
    sub_max.push_back(-*mulset.begin()); // vector "ret" will contain the bigger number
	//continue
    for (int i = k; i < (int)nums.size(); ++i) 
	{
    	mulset.erase(mulset.find(-nums[i-k]));
    	mulset.insert(-nums[i]);
    	sub_max.push_back(-*mulset.begin());
	}
    return sub_max;
}*/

int main() {

	vector<int> a = {1,3,-1,-3,5,3,6,7};
	a = slidingWindow(a, 3);

	for (int x : a)
		cout<<x<<" ";

	return 0;
}
