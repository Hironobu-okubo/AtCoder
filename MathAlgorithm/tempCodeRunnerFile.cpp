rep(i,n){
    cout << i << ": {";
    rep(j,g[i].size()){
      cout << " " << g[i][j]; 
    }
    out(" }");
  }