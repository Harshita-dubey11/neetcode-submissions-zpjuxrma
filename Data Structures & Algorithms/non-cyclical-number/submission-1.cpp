class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            vector<int>m;
            vector<int>res;
            int sum=0;
            while(n!=0){
                int rev=n%10;
                m.push_back(rev);
                n/=10;
            }  
            reverse(m.begin(),m.end());
            for(auto x:m){
                int k=pow(x,2);
                res.push_back(k);
            }
            for(auto x:res){
                sum+=x;
            }
            n = sum;
        }
        if(n==1)
        {  return true;
        }
        return false;
    }
};