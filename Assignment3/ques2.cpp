int Solution::solve(int A, vector<vector<int> > &B) {
    map<int , vector<int> > mpp;
    for ( int i = 0 ; i < B.size() ; i++ ){
        mpp[B[i][0]].push_back(B[i][1]);
    }
    queue<int>q;
    int visited[A+1] = {0};
    int size;
    q.push(1);
    while(!q.empty()){
      size = q.size();
      for ( int i = 0 ; i < size ; i++){
          int a = q.front();
          q.pop();
          visited[a] ==1 ;
          if (a ==A) return 1;
           for ( int z = 0 ; z<mpp[a].size() ; z++){
               if(!visited[mpp[a][z]]){
                   q.push(mpp[a][z]);
               }
           }
      }
      
    }
    return 0;
}
