//week15-1.cpp
//LeetCode 2894.
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0 ,num2 = 0; //���䤣�㰣,�k��㰣
        for(int i=1;i<=n;i++){B
            if(i%m>0)num1+=i; //���㰣�A�[��num1
            else num2 += i; //�㰣�A�[��num2
        }
        return num1-num2;
    }
};
