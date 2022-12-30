#include <stdexcept>
#include <iostream>
#include <vector>


std::vector<std::string> transformDateFormat(const std::vector<std::string>& dates)
{
    std::vector<std::string> destination = dates;
    for(int i = 0; i < destination.size(); i++){
        for(int j = 0; j < destination[i].length(); j++){
            if(destination[i][j] == '/' || destination[i][j] == '-'  ){
                destination[i].erase(j, 1);
                // std::cout << result[n] << std::endl;
            }
        }
    }
    return destination;
    // throw std::logic_error("Waiting to be implemented");
}

#ifndef RunTests
int main()
{
    std::vector<std::string> dates = {"2010/02/20", "19/12/2016", "11-18-2012", "20130720"};
    std::vector<std::string> reformattedDates = transformDateFormat(dates);
    for (auto const& reformattedDate : reformattedDates)
    {
        std::cout << reformattedDate << std::endl;
    }
}
#endif
