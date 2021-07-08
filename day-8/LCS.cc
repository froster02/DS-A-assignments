// class Solution {
// public:
//         string find_common(vector<string> &strs, int l, int r) {
//             if (l == r)
//                 return strs[l];
//             int mid = l + (r - l) / 2;
//             string s1 = find_common(strs, l, mid);
//             string s2 = find_common(strs, mid + 1, r);
//             int m = min(s1.size(), s2.size());
//             for (int i = 0; i < m; i++)
//                 if (s1.at(i) != s2.at(i))
//                     return s1.substr(0, i);
//             return s1.substr(0, m);
//         }
//           approach 3
//         string longestCommonPrefix(vector<string> &strs) {
//             return (find_common(strs, 0, strs.size() - 1));
//         }
// };




// class Solution {
// public:
// //     approach 2
//         string longestCommonPrefix(vector<string>& strs) {
//         sort(strs.begin(), strs.end());
//         int n = strs.size();
//         string s1 = strs[0];
//         string s2 = strs[n - 1];
//         string ans = "";
//         for(int i = 0; i < s1.size();i++) {
//             if(s1[i] == s2[i])
//                 ans += s1[i];
//             else 
//                 break;
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
// //     approach 1
//     string longestCommonPrefix(vector<string>& str) {
//         int slen = str.size();
//         string ans = "";
//         int minLenStr = INT_MAX;
        
//         for(int i = 0; i < slen; i++)
//             if(str[i].size() < minLenStr)    
//                 minLenStr = str[i].size();
        
//         for(int i = 0; i < minLenStr;++i) {
//             bool flag = false;
//             for(int j = 0; j < str.size() - 1; j++)
//                 if(str[j][i] != str[j+1][i])
//                     flag = true;
//             if(flag == false)
//                 ans = ans + str[0][i];
//             else
//                 return ans;
//         }
//         return ans;
//     }
// };