#include <string>
#include <iostream>
#include <stdexcept>
#include <vector>

int minPieces(const std::vector<int>& original, const std::vector<int>& desired)
{
   // throw std::logic_error("Waiting to be implemented");
    int count = 0;
    for(int i = 0; i < desired.size(); i++){
        for(int j = 0; j < original.size();j++){
            if(desired[i] == original[j] && desired[i+1] == original[j+1]){
                while(desired[i] == original[j]){
                    i++; 
                    j++;
                }
            }
        }
        count++;

    }
    return count;
}

#ifndef RunTests
int main()
{
    std::vector<int> original = { 1, 4, 3, 2 };
    std::vector<int> desired = { 1, 2, 4, 3 };
    std::cout << minPieces(original, desired) << std::endl;
}
#endif