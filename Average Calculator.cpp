#include <iostream>
#include <vector>

double calculateAverage(const std::vector<int>& numbers) {
    
    if (numbers.empty()) {
        return 0.0;
    }
    
    int sum = 0;
    
    for (int num : numbers) {
        sum += num;
    }
    
    return static_cast<double>(sum) / numbers.size();
}

int main() {

    std::vector<int> numbers1 = {18, 14, 23, 34, 55};
    double average1 = calculateAverage(numbers1);
    std::cout << "Average of {18, 14, 23, 34, 55} is: " << average1 << std::endl;
    
    std::vector<int> numbers2 = {15, 28, 44,76};
    double average2 = calculateAverage(numbers2);
    std::cout << "Average of {15, 28, 44,76} is: " << average2 << std::endl;
    
    std::vector<int> numbers3 = {};
    double average3 = calculateAverage(numbers3);
    std::cout << "Average of empty list is: " << average3 << std::endl;
    
    std::vector<int> numbers4 = {42,55,37,91};
    double average4 = calculateAverage(numbers4);
    std::cout << "Average of {42,55,37,91} is: " << average4 << std::endl;
    
    return 0;
}