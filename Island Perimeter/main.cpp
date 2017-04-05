//
// Created by wzvoid on 2017/4/5.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
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
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{0,1,1,0}, {1,1,1,0},{0,1,0,0},{1,1,0,0}};
    cout<<s.islandPerimeter(grid);
    return 0;
}