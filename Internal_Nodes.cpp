#include <vector>
#include <set>
#include <stdexcept>
#include <iostream>
int countInternalNodes (const std::vector<int>& tree){
    std::set<int> s(tree.begin(), tree.end()); // Range Converter
    s.erase(-1);
    return s.size();
    // throw std::logic_error("Waiting to be implemented");
}
#ifndef RunTests
int main()
{
    std::vector<int> tree;
    tree.push_back(1);
    tree.push_back(3);
    tree.push_back(1);
    tree.push_back(-1);
    tree.push_back(3);
    std::cout << countInternalNodes(tree);
}
#endif
