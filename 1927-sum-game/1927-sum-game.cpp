class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int a=n/2;
        int leftsum=0,leftqu=0,rightsum=0,rightqu=0;
        for(int i=0;i<a;i++){
            if(num[i]=='?')
            leftqu++;
            else
            leftsum+=num[i]-'0';
        }
        for(int i=a;i<n;i++){
            if(num[i]=='?')
            rightqu++;
            else
            rightsum+=num[i]-'0';
        }
        if((leftqu+rightqu)%2==1)
        return true;
        return leftsum-rightsum!=(rightqu-leftqu)*9/2;
    }
};