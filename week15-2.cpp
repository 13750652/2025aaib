///week15-2.cpp
///車牌數字重複機率多高
#include <stdio.h>
int helper(int n)
{
    int a[10]={}; ///統計表,裡面都是0
    while(n>0){ ///剝皮法
        int now = n%10; ///撥出一層皮
        a[now]++; ///多出現一次
        if(a[now]>1) return 1; ///找到重複數字
        n=n/10; ///剝皮法
    }
    return 0; ///都沒有提早結束,就是找不到重複數字
} ///helper() 回傳0代表沒有找到,回傳1代表有找到
int main()
{
    int ans = 0; ///有幾個重複數字
    for(int i=0;i<=9999;i++){ ///0000...9999
        if(helper(i)==1)ans++;
    }
    printf("%d",ans);
}
