if(i == 0){
      dp1[i] = a[i];
      dp2[i] = 0;
    }
    else{
      dp1[i] = dp2[i - 1] + a[i];
      dp2[i] = max(dp2[i - 1], dp1[i - 1]);
    } 