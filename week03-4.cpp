///week03-4.cpp
///M90H044 瘋狂程設不能打中文，會變亂碼
///程式貼到Codeblocks再寫註解
#include <stdio.h>
int main()
{
    int ans = 0; ///答案加到這裡面
    ///迴圈前面 ans 是 0
    int N; ///有一個整數 N
    scanf("%d", &N); ///讀入 N
    ///人類的迴圈，從1開始， <=
    for(int i=1; i<=N; i++){
        ans += i; ///迴圈中間 修改 ans
    }
    printf("%d", ans);
}///迴圈後面，印出 ans

