#include <iostream>
#include <vector>
/*
{0, 1, 0, 0, 1}
{1, 0, 0, 0, 0}
{0, 0, 0, 1, 0}
{0, 0, 1, 0, 0}
{1, 0, 0, 0, 0}
*/
int getMinimumConnections(const std::vector<std::vector<bool>>& matrix)
{
    int count = 0;
    for(int i = 1; i < matrix.size(); i++){
        for(int j = 0; j <= i ; j++){
            if(matrix[j][i] == true){
                count++;
            }
        }
    }
    return (matrix.size() - 1) - count;
    throw std::logic_error("Waiting to be implemented");
}

#ifndef RunTests
int main()
{
    std::vector<std::vector<bool>> matrix {
        {false, true, false, false, true},
        {true, false, false, false, false},
        {false, false, false, true, false},
        {false, false, true, false, false},
        {true, false, false, false, false}
    };
    std::cout << getMinimumConnections(matrix) << std::endl; // should print 1
    return 0;
}
#endif
