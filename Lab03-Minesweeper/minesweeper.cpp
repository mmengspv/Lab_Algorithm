#include<iostream>
using namespace std;

int main(){
    int w, h, n, q;
    cin >> w >> h >> n >> q;

    int adj_matrix[w][h];
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            adj_matrix[i][j] = 0;
        }
    }

    int r, c;
    for(int i = 0; i < n; i++){
        cin >> r >> c;
        adj_matrix[r][c] = 1;
    }
    int x, y, count = 0;
    
    for(int i = 0; i < q; i++){
        cin >> x >> y;
        if(adj_matrix[x][y] == 1){
            cout << "Bomb" << endl;
            continue;
        }
        if(y-1 >= 0){
            count += adj_matrix[x][y-1]; 
            if(x-1 >= 0){
                count += adj_matrix[x-1][y-1];
            }
            if(x+1 <= w-1){
                count += adj_matrix[x+1][y-1];
            }
        }
        if(x-1 >= 0){
            count += adj_matrix[x-1][y];
        }
        if(x+1 <= w-1){
            count += adj_matrix[x+1][y];
        }
        if(y+1 <= h-1){
            count += adj_matrix[x][y+1];
            if(x-1 >= 0){
                count += adj_matrix[x-1][y+1];
            }
            if(x+1 <= w-1){
                count += adj_matrix[x+1][y+1];
            }
        }

        cout << count << endl;
        count = 0;
    }
}