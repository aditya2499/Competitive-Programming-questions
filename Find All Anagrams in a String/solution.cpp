#include<iostream>
#include<vector>
using namespace std;
 vector<int> findAnagrams(string s, string p) {
        vector<int> cnt(128, 0);
        vector<int> res;
        for(int i = 0; i < p.size(); i++){
            cnt[p[i]]++;
        }
        int left = 0, right = 0;
        while(right < s.size()){
            cnt[s[right]]--;
            if(cnt[s[right]] < 0){
                while(left <= right && cnt[s[right]] < 0){
                    cnt[s[left]]++;
                    left++;
                }
            }
            if(right-left+1 == p.size()){
                res.push_back(left);
            }
            right++;
        }

        return res;
    }

    int main()
    {
       string s,x;
       cin>>s>>x;
       vector<int> ans;
       ans=findAnagrams(s,x);
       for(int i=0;i<ans.size();i++)
        cout<<v[i]<<" ";

    }
