// by - jalee
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0) return true;
        string temp;
        for(char &i : s)
        {
            if(i>=65 && i<=90) i+=32;

            if((i>=97 && i<=122) || (i>=48 && i<=57)) temp+=i;
        }
        cout<<temp;
        int left = 0;
        int right = temp.size()-1;
        while(right > left )
        {
            if(temp[right] == temp[left])
            {
                right--;
                left++;
            }
            else
            {
                return false;
            }
        }
        return true;

    }
};
//hi
