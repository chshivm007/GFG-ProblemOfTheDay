#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int> nums) {
        map<int, int> m1;
        for (int i = 0; i < nums.size(); ++i) {
            ++m1[nums[i]];
        }
        vector<int> ans;
        for (auto it : m1) {
            if (it.second == 1) ans.push_back(it.first); 
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}