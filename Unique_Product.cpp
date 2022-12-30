#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>

std::string firstUniqueProduct(const std::vector<std::string>& products)
{
   // throw std::logic_error("Waiting to be implemented");
    for(int i=0; i<products.size(); i++){
        int count  = 1;
        for(int j =i+1; j<products.size(); j++){
            if(products[i] == products[j]){
                count = 0;
                continue;
            }
        }
        if(count == 1){
            return products[i];
        }
    }
    return "";
}

#ifndef RunTests
int main()
{
    std::vector<std::string> products = { "Apple", "Computer", "Apple", "Bag" };
    std::cout << firstUniqueProduct(products);
}
#endif
