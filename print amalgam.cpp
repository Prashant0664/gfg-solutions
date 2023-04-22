 vector<vector<string> > ans;
        unordered_map<string, vector<string>> mp;
        for(auto it:string_list){
            string temp = it;
            sort(it.begin(), it.end());
            mp[it].push_back(temp);
        }
        
        for(auto it: mp){
           ans.push_back(it.second); 
        }
        return ans;