#include <iostream>
#include <vector>
#include <string>


std::string findLongestString(const std::vector<std::string>& strings) {
    
    if (strings.empty()) {
        return "";  
    }
    
    
    std::string longest = strings[0];
    
    
    for (const std::string& str : strings) {
        
        if (str.length() > longest.length()) {
            longest = str;
        }
    }
    
    return longest;
}


int main() {
    
    std::vector<std::string> strings1 = {"apple", "banana", "cherry", "date"};
    std::string longest1 = findLongestString(strings1);
    std::cout << "List: ";
    for (const std::string& str : strings1) std::cout << "\"" << str << "\" ";
    std::cout << std::endl;
    std::cout << "Longest string: \"" << longest1 << "\"" << std::endl << std::endl;
    
    
    std::vector<std::string> strings2 = {"cat", "elephant", "dog", "giraffe"};
    std::string longest2 = findLongestString(strings2);
    std::cout << "List: ";
    for (const std::string& str : strings2) std::cout << "\"" << str << "\" ";
    std::cout << std::endl;
    std::cout << "Longest string: \"" << longest2 << "\"" << std::endl << std::endl;
    
    
    std::vector<std::string> strings3 = {"red", "cat", "dog", "sun"};
    std::string longest3 = findLongestString(strings3);
    std::cout << "List: ";
    for (const std::string& str : strings3) std::cout << "\"" << str << "\" ";
    std::cout << std::endl;
    std::cout << "Longest string: \"" << longest3 << "\" (first one found)" << std::endl << std::endl;
    
    
    std::vector<std::string> strings4 = {};
    std::string longest4 = findLongestString(strings4);
    std::cout << "Empty list test" << std::endl;
    std::cout << "Longest string: \"" << longest4 << "\"" << std::endl << std::endl;
    
    
    std::vector<std::string> strings5 = {"onlyone"};
    std::string longest5 = findLongestString(strings5);
    std::cout << "List: {\"onlyone\"}" << std::endl;
    std::cout << "Longest string: \"" << longest5 << "\"" << std::endl;
    
    return 0;
}