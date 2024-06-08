	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int x) 
	{
	    // code here
	    int visited[V]={0};
	    int level = 0;
	    queue<int>q;
	    int size; 
	    q.push(0);
	    while(!q.empty()){
	        size = q.size();
	        
	        for ( int i = 0 ; i < size ; i++){
	              int a = q.front();
	              q.pop();
	              visited[a]=1;
	        
	              if(a == x){
	                  return level;
	              }
	              for ( int j = 0 ; j < adj[a].size(); j++){
	                  if(!visited[adj[a][j]]){
	                         q.push(adj[a][j]);
	                  }
	              }
	        }

	        level++;
	    }
	    return -1;
	}
