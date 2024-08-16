class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        // int l=arr.size();
        // for(int i=0;i<l-1;i++){
        //     int k=i;
        //     for(int j=i+1;j<l;j++){
        //         if(arr[j]<arr[i]){
        //             k=j;
        //         }
        //     }
        //     swap(arr[i],arr[k]);
        // }
        sort(arr.begin(),arr.end());
        sort(target.begin(),target.end());
        if(arr==target) return 1;
        else return 0;
    }
};