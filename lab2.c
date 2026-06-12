#include <stdio.h>

int main() {
    int i, j, k;
    int arr1[2][3], arr2[2][3];
    int unionSet[12], uSize = 0;

    printf("Enter first set (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter second set (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    //union 
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            int found = 0;
            for(k = 0; k < uSize; k++) {
                if(unionSet[k] == arr1[i][j]) {
                    found = 1;
                    break;
                }
            }
            if(!found) {
                unionSet[uSize++] = arr1[i][j];
            }
        }
    }
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            int found = 0;
            for(k = 0; k < uSize; k++) {
                if(unionSet[k] == arr2[i][j]) {
                    found = 1;
                    break;
                }
            }
            if(!found) {
                unionSet[uSize++] = arr2[i][j];
            }
        }
    }

    printf("\nUNION SET:\n");
    for(i = 0; i < uSize; i++) {
        printf("{%d} ", unionSet[i]);
    }
    printf("\n\nINTERSECTION:\n");
    for(i = 0; i < 2; i++) {
     for(j = 0; j < 3; j++) {
    for(k = 0; k < 2; k++) {
    for(int l = 0; l < 3; l++) {
    if(arr1[i][j] == arr2[k][l]) {
     printf("{%d} ", arr1[i][j]);
     k = 2; 
                        break;
                    }
                }
            }
        }
    }

    printf("\n\nDIFFERENCE (A - B):\n");
    for(i = 0; i < 2; i++) {
    for(j = 0; j < 3; j++) {
            int found = 0;

            for(k = 0; k < 2; k++) {
                for(int l = 0; l < 3; l++) {
                    if(arr1[i][j] == arr2[k][l]) {
                        found = 1;
                    }
                }
            }

            if(!found) {
                printf("{%d} ", arr1[i][j]);
            }
        }
    }

//inverse
    printf("\n\nINVERSE (B - A):\n");
    for(i = 0; i < 2; i++) {
    for(j = 0; j < 3; j++) {
            int found = 0;

            for(k = 0; k < 2; k++) {
                for(int l = 0; l < 3; l++) {
                    if(arr2[i][j] == arr1[k][l]) {
                        found = 1;
                    }
                }
            }

            if(!found) {
                printf("{%d} ", arr2[i][j]);
            }
        }
    }
    return 0;
}