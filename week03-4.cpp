///week03-4.cpp
///M90H044 �ƨg�{�]���ॴ����A�|�ܶýX
///�{���K��Codeblocks�A�g����
#include <stdio.h>
int main()
{
    int ans = 0; ///���ץ[��o�̭�
    ///�j��e�� ans �O 0
    int N; ///���@�Ӿ�� N
    scanf("%d", &N); ///Ū�J N
    ///�H�����j��A�q1�}�l�A <=
    for(int i=1; i<=N; i++){
        ans += i; ///�j�餤�� �ק� ans
    }
    printf("%d", ans);
}///�j��᭱�A�L�X ans

