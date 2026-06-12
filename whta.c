 printf("\n\nINTERSECTION:\n");



    
    for(i = 0; i < 2; i++) {
     for(j = 0; j < 3; j++) {
    for(k = 0; k < 2; k++) {
    for(int l = 0; l < 3; l++) {
    if(arr1[i][j] == arr2[k][l]) {
     printf("%d ", arr1[i][j]);
     k = 2; 
                        break;
                    }
                }
            }
        }
    }