zzclass Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int row= matrix.size();
    

    vector<vector<int>> ans(row,vector <int> (row,0));


    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            ans[j][row-i-1]=matrix[i][j];


        }
    
    }
    for(int i=0; i<row; i++){
            for(int j=0; j<row; j++){
                matrix[i][j] = ans[i][j];
            }
        }   
    }
};