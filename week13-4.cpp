//week13-4.cpp 寫昨天的挑戰提，用C++來寫
//LeetCode 3335.
//"a"會變"b","b"會變"c"..."z"會變2個字母"a"和"b"
class Solution {
public:
    int a[200000] ={}; // 很大的陣列,裡面都是0
    int helper(int t){ //使用函式呼叫函式
        if( a[t] >0 )return a[t];
        if( t<26) return 1; //還是1個字母
        a[t] = (helper(t-26)+helper(t-26+1)) % 1000000007;
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans = 0;
        for(char c : s) { //C++的語法,可以把每個數字取出來
            ans = (ans+helper(t+c-'a'))%1000000007;
        }
        return ans;
    }
};
