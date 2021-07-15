class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> umap;
        
        for(int i = 0; i < ransomNote.length(); i++)
            umap[ransomNote[i]]++;
        
        for(int i = 0;i < magazine.length(); i++)
            umap[magazine[i]]--;
        
        for(auto &p : umap)
            if(p.second > 0)
                return false;
        return true;
    }
};