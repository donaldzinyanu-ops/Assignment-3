#include <iostream>
#include <vector>
 using namespace std;


int sumOfList(const std::vector<int>& numbers) {
    int total = 0;  
    
    
    for (int num : numbers) {
        total += num;
    }
    
    return total;
}


int main() {
    
    vector<int> numbers1 = {51, 92, 83, 44, 75};
    int sum1 = sumOfList(numbers1);
    cout << "List: ";
    for (int num : numbers1) std::cout << num << " ";
    cout << "\nSum: " << sum1 << endl << endl;
    
    
    vector<int> numbers2 = {10, -35, 93, -52, 97};
    int sum2 = sumOfList(numbers2);
    cout << "List: ";
    for (int num : numbers2) cout << num << " ";
    cout << "\nSum: " << sum2 << endl << endl;
    
    
    vector<int> numbers3 = {};
    int sum3 = sumOfList(numbers3);
    cout << "Empty list" << endl;
    cout << "Sum: " << sum3 << endl << endl;
    
    
    vector<int> numbers4 = {72};
    int sum4 = sumOfList(numbers4);
    cout << "List: ";
    for (int num : numbers4) cout << num << " ";
    cout << "\nSum: " << sum4 << endl << endl;
    
    
    vector<int> numbers5 = {-781, -92, -30, -24, -85};
    int sum5 = sumOfList(numbers5);
    cout << "List: ";
    for (int num : numbers5) cout << num << " ";
    cout << "\nSum: " << sum5 << endl << endl;
    
    
    vector<int> numbers6 = {1000, 6000, 3000};
    int sum6 = sumOfList(numbers6);
    cout << "List: ";
    for (int num : numbers6) std::cout << num << " ";
    cout << "\nSum: " << sum6 << std::endl << std::endl;
    

    vector<int> numbers7 = {90, 70, 80, 40};
    int sum7 = sumOfList(numbers7);
    cout << "List: ";
    for (int num : numbers7) cout << num << " ";
    cout << "\nSum: " << sum7 << endl;
    
    return 0;
}