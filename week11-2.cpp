///week11-2.cpp
///��ƫŧi�A�禡�w�q�A�禡�I�s
#include <stdio.h>
int addnum(int a,int b)///�ŧi��ӰѼƪ��Ϊ��W�r
{///�e������ƪ��w�q
    printf("�{�b�i�J addnum()�禡��,a:%d b:%d\n",a,b);
    int x;
    x=a+b;
    printf("��Ƭۥ[��,�o��ƭ�%d �N return �^��\n",x);
    return x; ///�^�ǵ����s�Ϊ��a��
}

int main()
{
    int ans=addnum(10,30); ///�ڭ̨ϥ�/�I�s���ۭq�禡
    printf("%d",ans);
}

