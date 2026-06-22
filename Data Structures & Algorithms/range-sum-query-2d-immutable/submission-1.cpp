class NumMatrix {
private: 
vector<vector<int>> sumMat ;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size() , cols = matrix[0].size();
        sumMat = vector<vector<int>>(rows+1 ,vector<int>(cols+1,0)) ;

        for(int r = 0 ; r < rows ; r++) {
            int prefix = 0 ;
            for(int c = 0 ; c < cols ; c++) {
                prefix += matrix[r][c] ;
                int above = sumMat[r][c+1] ;
                sumMat[r+1][c+1] = prefix + above ;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++ , row2++ , col1++ , col2++ ;

        int botr = sumMat[row2][col2] ;
        int botl = sumMat[row2][col1 - 1] ;
        int topr = sumMat[row1 - 1][col2] ;
        int topl = sumMat[row1 - 1][col1 - 1] ;

        return botr - topr + topl - botl ;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */