#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  

using namespace std;
vector<string> reverseStrings(const vector<string>& strings) {
    vector<string> result; 
    
    
    for (const string& str : strings) {
        string reversed = str;  
        reverse(reversed.begin(), reversed.end());  
        result.push_back(reversed);  
    }
    
    return result;
}


void printVector(const vector<string>& vec, const string& label) {
    cout << label << ": ";
    if (vec.empty()) {
        cout << "Empty";
    } else {
        for (size_t i = 0; i < vec.size(); i++) {
            cout << "\"" << vec[i] << "\"";
            if (i < vec.size() - 1) cout << ", ";
        }
    }
    cout << endl;
}


int main() {
    
    vector<string> strings1 = {"big", "world", "programming", "test"};
    vector<string> reversed1 = reverseStrings(strings1);
    printVector(strings1, "Original list");
    printVector(reversed1, "Reversed list");
    cout << endl;
    
    
    vector<string> strings2 = {"radar", "level", "madam", "racecar"};
    vector<string> reversed2 = reverseStrings(strings2);
    printVector(strings2, "Original list");
    printVector(reversed2, "Reversed list");
    cout << "(Note: Palindromes remain the same when reversed)" << endl << endl;
    
    
    vector<string> strings3 = {"u", "b", "p", "d"};
    vector<string> reversed3 = reverseStrings(strings3);
    printVector(strings3, "Original list");
    printVector(reversed3, "Reversed list");
    cout << endl;
    
    
    vector<string> strings4 = {"", "big", "", "world"};
    vector<string> reversed4 = reverseStrings(strings4);
    printVector(strings4, "Original list");
    printVector(reversed4, "Reversed list");
    cout << endl;

    
    vector<string> strings5 = {};
    vector<string> reversed5 = reverseStrings(strings5);
    printVector(strings5, "Original list");
    printVector(reversed5, "Reversed list");
    cout << endl;
    
    
    vector<string> strings6 = {"Big World", "C++ Programming", "Reverse me!"};
    vector<string> reversed6 = reverseStrings(strings6);
    printVector(strings6, "Original list");
    printVector(reversed6, "Reversed list");
    cout << std::endl;
    
    
    vector<std::string> strings7 = {"183", "406", "700"};
    vector<std::string> reversed7 = reverseStrings(strings7);
    printVector(strings7, "Original list");
    printVector(reversed7, "Reversed list");
    
    return 0;
}