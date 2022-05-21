class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int n=arr.size(),m=arr[0].size();
        bool row=false,col=false;
        for(int i=0;i<n;i++){
            if(arr[i][0]==0) row=true;
        }
        for(int j=0;j<m;j++){
            if(arr[0][j]==0) col=true;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==0){
                    arr[i][0]=0;arr[0][j]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((arr[i][0]==0 or arr[0][j]==0)and(i>0 and j>0)) arr[i][j]=0;
            }
        }
        //cout<<n<<" "<<m;
        /*for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((arr[i][0]==0 or arr[0][j]==0)and(i==0 or j==0)) arr[i][j]=0;
            }
        }*/
        if(row){
            for(int i=0;i<n;i++) arr[i][0]=0;
        }
        if(col){
            for(int i=0;i<m;i++) arr[0][i]=0;
        }
        
    }
};// TC : O(m*n)
