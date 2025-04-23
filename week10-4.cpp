//week10-4
//LeetCode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count=0;//计参璸程琌瞷碭Ω
        int a[100]={}; //皚, 羆totalΤ瞷碭Ω
        for(int i=1;i<=n;i++){
            int total = 0,now=i;//癬ㄓ挡狦total,瞷计now
            while(now>0){
                total+=now%10; //рブ癬ㄓ
                now=now/10; // Чブ计碞跑
            }
            a[total]++; // 参璸挡狦total癬ㄓtotalㄓノ
            if(a[total]>max_count)max_count=a[total];//max_count程计
        }
        int ans=0;//程т氮ㄓ(瞷程Ω计Ω计,Τ碭计)
        for(int i=0;i<100;i++){//碝皚a[i]柑琌程max_count杠
            if(a[i]==max_count)ans++;//碞程计
        }
        return ans;
    }
};
