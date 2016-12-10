#include <iostream>
#include <vector>
#include <string>
using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {
    int perimeter = 0;
    //auto row,column;
    unsigned long row,column;
    row = grid.size();//行数
    column = grid[0].size();//列数
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)
            if(grid[i][j]==1) {
                perimeter += 4;
                if(i!=0&&grid[i-1][j] == 1) perimeter -= 2;
                if(j!=0&&grid[i][j-1] == 1) perimeter -= 2;
            }
    return perimeter;
}

int main() {
    vector<vector<int>> grid = {{0,1,1,0}, {1,1,1,0},{0,1,0,0},{1,1,0,0}};
    cout<<islandPerimeter(grid);
    return 0;
}