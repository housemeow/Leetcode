class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for ( int i = 0 ; i < A.size() ; i++ )
        {
            flip( A[i] ) ;
            invert( A[i] ); 
        }
        
        return A;
    }
    
private:
    void flip( vector<int> &graph )
    {
      int temp = 0;
        
      for ( int i = 0; i < graph.size() / 2 ; i++ )
      {
        temp = graph[i];
        graph[i] = graph[graph.size()-i-1];
        graph[graph.size()-i-1] = temp;
      }
    }
    
    void invert( vector<int> &graph )
    {
      for ( int i = 0; i < graph.size() ; i++ )
          graph[i] = !graph[i];
    }
    
};
