class Solution {
public:
    string convertToTitle(int columnNumber) {
        string colName = "";
        while(columnNumber > 0){
            char ch = 'A' + (columnNumber - 1) % 26;
            colName = ch + colName;
            columnNumber = (columnNumber - 1) / 26;
        }
        return colName;
    }
};