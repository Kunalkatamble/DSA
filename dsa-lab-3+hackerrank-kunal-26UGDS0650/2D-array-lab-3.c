#include <stdio.h>

void LinearSearch(int m, int n, int a[m][n], int key){
    for(int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if(a[i][j]==key){
                printf("Key found at index %d %d\n",i,j);
                return;
            }
        }
    }
}


void MinMax(int m, int n, int a[m][n]){
    int min=a[0][0];
    int max=a[0][0];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]< min){
                min =a[i][j];
            }
                if (a[i][j]>max){
                     max=a[i][j];
            }
        }
    }
    printf("Minimum element: %d \n",min);
    printf("Maximum element: %d\n",max);
}

void sum(int m, int n, int a[m][n]){
    int sum=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum=sum+a[i][j];
        }
    }
    printf("sum of all elements: %d\n",sum);
}

void UpperTriangular(int m, int n, int a[m][n]){
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(j>=i){
                printf("%d",a[i][j]);
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}

void RowSum(int m, int n, int a[m][n]){
    for (int i = 0; i < m; i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            sum = sum + a[i][j];
        }
        printf("Sum of row %d: %d\n", i, sum);
    }
}


void LowerTriangular(int m, int n, int a[m][n]){
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(j<=i){
                printf("%d",a[i][j]);
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}

void ColSum(int m, int n, int a[m][n]){
    for (int j= 0; j < m; j++){
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum = sum + a[i][j];
        }
        printf("Sum of row %d: %d\n", j, sum);
    }
}



int main(){
    
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int key=5;
    
    LinearSearch(3, 3, a, key);
    MinMax(3, 3, a);
    sum(3,3,a);
    UpperTriangular(3,3,a);
    RowSum(3,3,a);
    LowerTriangular(3,3,a);
    ColSum(3,3,a);
    return;
}

