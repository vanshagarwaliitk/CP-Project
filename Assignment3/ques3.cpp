    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
          unordered_map<int , vector<int> > mpp;
           for ( int i = 0 ; i < edges.size() ; i++ ){
              mpp[edges[i][0]].push_back(edges[i][1]);
              mpp[edges[i][1]].push_back(edges[i][0]);
           }
           vector<int>visited(n,0);
           visited[s]=1;
           queue<int>q;
           int size ;
           q.push(s);
           while(!q.empty()){
                    int a = q.front();
                    q.pop();
                    if(a==d) return true;
                    for ( int j   = 0 ; j < mpp[a].size() ; j++){   
                        if(!visited[mpp[a][j]]){
                            q.push(mpp[a][j]);
                            visited[mpp[a][j]]=1;
                        }
                    
            }

           }
           return 0;
    }
