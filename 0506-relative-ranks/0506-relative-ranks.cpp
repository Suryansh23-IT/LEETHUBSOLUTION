class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int cnt=0,l=score.size();
        vector<int> rank(l);
        vector<string> ans(l);
        for(int i=0;i<l;i++){
            cnt=0;
            for(int j=0;j<l;j++){
                if(score[i]<score[j]) cnt++;
            }
            rank[i]=cnt;
        }
        vector<int> copy=rank;
        sort(copy.begin(),copy.end());
        for(int k=0;k<l;k++){
            if(rank[k]==copy[0]) ans[k]="Gold Medal";
            else if(rank[k]==copy[1]) ans[k]="Silver Medal";
            else if(rank[k]==copy[2]) ans[k]="Bronze Medal";
            else{
                ans[k]=to_string(rank[k]+1);
            }
        }
        return ans;
    }
};