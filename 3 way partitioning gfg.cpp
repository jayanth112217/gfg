class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      if(mat.size()==1){
        return mat[0][0];
      }
    int cnt=0;
    int sum1=0;
  for(int i=0;i<mat.size();i++){
      sum1 = sum1 + mat[i][cnt];  
      cnt++;
  }
  int cnt2 = mat.size()-1;
  for(int i=0;i<mat.size();i++){
      sum1 = sum1 + mat[i][cnt2];
      cnt2--;
  }
  if(mat.size()%2!=0){
    int temp = mat.size()/2;
    return sum1-mat[temp][temp];
  }
  return sum1;
    }
};