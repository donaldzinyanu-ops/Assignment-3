#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  


std::vector<std::string> sortStrings(const std::vector<std::string>& strings) {
    std::vector<std::string> result = strings;  
    
    
    std::sort(result.begin(), result.end());
    
    return result;
}


void printVector(const std::vector<std::string>& vec, const std::string& label) {
    std::cout << label << ": ";
    if (vec.empty()) {
        std::cout << "Empty";
    } else {
        for (size_t i = 0; i < vec.size(); i++) {
            std::cout << "\"" << vec[i] << "\"";
            if (i < vec.size() - 1) std::cout << ", ";
        }
    }
    std::cout << std::endl;
}


int main() {
    
    std::vector<std::string> strings1 = {"banana", "avocado", "cherry", "strawbeery"};
    std::vector<std::string> sorted1 = sortStrings(strings1);
    printVector(strings1, "Original list");
    printVector(sorted1, "Sorted list");
    std::cout << std::endl;
    
    
    std::vector<std::string> strings2 = {"date", "cashewnut", "coconut", "cocoa"};
    std::vector<std::string> sorted2 = sortStrings(strings2);
    printVector(strings2, "Original list");
    printVector(sorted2, "Sorted list");
    std::cout << std::endl;
    
    
    std::vector<std::string> strings3 = {"zebra", "yellow", "xray", "whale"};
    std::vector<std::string> sorted3 = sortStrings(strings3);
    printVector(strings3, "Original list");
    printVector(sorted3, "Sorted list");
    std::cout << std::endl;
    
    
    std::vector<std::string> strings4 = {"Apple", "blueberry", "apple", "banana"};
    std::vector<std::string> sorted4 = sortStrings(strings4);
    printVector(strings4, "Original list");
    printVector(sorted4, "Sorted list");
    std::cout << "(Note: Uppercase letters come before lowercase in ASCII)" << std::endl << std::endl;
    
    
    std::vector<std::string> strings5 = {};
    std::vector<std::string> sorted5 = sortStrings(strings5);
    printVector(strings5, "Original list");
    printVector(sorted5, "Sorted list");
    std::cout << std::endl;
    
    
    std::vector<std::string> strings6 = {"single"};
    std::vector<std::string> sorted6 = sortStrings(strings6);
    printVector(strings6, "Original list");
    printVector(sorted6, "Sorted list");
    std::cout << std::endl;
    
    
    std::vector<std::string> strings7 = {"lion", "zebra", "monkey", "eagle", "shark"};
    std::vector<std::string> sorted7 = sortStrings(strings7);
    printVector(strings7, "Original list");
    printVector(sorted7, "Sorted list");
    
    return 0;
}