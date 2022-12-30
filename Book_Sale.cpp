#include <vector>
#include <stdexcept>
#include <iostream>
int nthLowestSelling(const std::vector<int>& sales, int n){
    for(int i = 0; i < sales.size(); i++){
        int count = 1;
        for(int j = i + 1; j < sales.size(); j++){
            if(sales[j] == sales[i]){
                count++;
            }
        }
        if(count == n){
            return sales[i];
        }
    }
    throw std::logic_error("Waiting to be implemented");
}

#ifndef RunTests
int main(){
    std::vector<int> input;
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(2);
    input.push_back(1);
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(2);
    input.push_back(5);
    input.push_back(4);
    input.push_back(3);
    input.push_back(5);
    input.push_back(4);
    input.push_back(5);
    // {5, 4, 3, 2, 1, 5, 4, 3, 2, 5, 4, 3, 5, 4, 5}
    int x = nthLowestSelling(input, 2);
    std::cout << x;
}
#endif
