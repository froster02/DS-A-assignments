class Solution {
public:
    string reformatDate(string date) {
        unordered_map <string, string> um;
        
        um["Jan"] = "01", um["Feb"] = "02", um["Mar"] = "03", um["Apr"] = "04";
        um["May"] = "05", um["Jun"] = "06", um["Jul"] = "07", um["Aug"] = "08";
        um["Sep"] = "09", um["Oct"] = "10", um["Nov"] = "11", um["Dec"] = "12";
        
        string str = "";
        
        if(date.size() == 12) 
            date = '0' + date;
        str = date.substr(9,4) + '-' + um[date.substr(5,3)] + '-' + date.substr(0,2);
        
        return str;
    }
};