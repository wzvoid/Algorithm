#include <iostream>
#include <vector>
#include <string>
using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {
    int perimeter = 0;
    //auto row,column;
    vector<int>::size_type row,column;
    row = grid.size();//number of rows
    column = grid[0].size();//number of columns
    for (auto i = 0; i < row; ++i)
        for (auto j = 0; j < column; ++j)
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