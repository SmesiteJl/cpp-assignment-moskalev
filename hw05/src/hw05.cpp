#include <hw05.h>

using namespace std;
VecOfStr hw05(const VecOfStr& strings)
{
    VecOfStr answer;
    auto isPalindrome = [](string str) {
    string filteredStr;
    for (char c : str) {
        if (std::isalpha(c)) { // проверяем, является ли вимвол буквой  
            filteredStr += std::tolower(c); // переводим в нижний регистр, ведь нам важно сравнить сами буквы, а в разном регистре чары не равны
        }
    }

    bool isPalindrome = true;
    int left = 0;
    int right = filteredStr.length() - 1;

    while (left < right) {
        if (filteredStr[left] != filteredStr[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    return isPalindrome;
};

    for(std::string str: strings){
        if(isPalindrome(str)){
            answer.push_back(str);
        }
    }

    return answer; 
}
