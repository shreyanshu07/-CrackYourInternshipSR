class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size(),one=0,two=0,zero=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1) one++;
            else if (arr[i]==2) two++;
            else if (arr[i]==0) zero++;
        }
        for(int i=0;i<n;i++){
            if(i>=0 and i<zero) arr[i]=0;
            else if(i>=zero and i<(one+zero)) arr[i]=1;
            else if(i>=(zero+one)) arr[i]=2;
        }
    }
};
// 100% faster in TC - O(n) 
