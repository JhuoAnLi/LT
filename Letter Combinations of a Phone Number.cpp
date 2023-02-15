class Solution {
private:
    const string arr[10]={
        "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz",
    };
public:
    vector <string> res;
    string s;
    void back_recursion(const string& digits,int index)
    {
        if(index == digits.size())
        {
            res.push_back(s);
            return;
        }
        int indexs = digits[index] -'0';
        string le =arr[indexs];
        for(int i=0;i<le.size();++i)
        {
            s.push_back(le[i]);
            back_recursion(digits,index+1);
            s.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        res.clear();
        s.clear();
        if(digits.size()==0) return res;
        back_recursion(digits,0);
        return res;
        
    }
};
