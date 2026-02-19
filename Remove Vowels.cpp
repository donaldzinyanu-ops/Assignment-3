#include <iostream>
#include <string>


std::string removeVowels(const std::string& sentence) {
    std::string result;
    std::string vowels = "aeiouAEIOU";
    
    
    for (char c : sentence) {
        
        if (vowels.find(c) == std::string::npos) {
            result += c;  
        }
    }
    
    return result;
}


int main() {
    
    std::string sentence1 = "The quick brown fox jumps over the lazy dog";
    std::string result1 = removeVowels(sentence1);
    std::cout << "Original: \"" << sentence1 << "\"" << std::endl;
    std::cout << "Without vowels: \"" << result1 << "\"" << std::endl << std::endl;
    
    
    std::string sentence2 = "Hello World! Programming is fun.";
    std::string result2 = removeVowels(sentence2);
    std::cout << "Original: \"" << sentence2 << "\"" << std::endl;
    std::cout << "Without vowels: \"" << result2 << "\"" << std::endl << std::endl;
    

    std::string sentence3 = "AEIOU aeiou";
    std::string result3 = removeVowels(sentence3);
    std::cout << "Original: \"" << sentence3 << "\"" << std::endl;
    std::cout << "Without vowels: \"" << result3 << "\"" << std::endl << std::endl;
    

    std::string sentence4 = "Why try my sly crypt?";
    std::string result4 = removeVowels(sentence4);
    std::cout << "Original: \"" << sentence4 << "\"" << std::endl;
    std::cout << "Without vowels: \"" << result4 << "\"" << std::endl;
    
    return 0;
}