#include <hw02.h>

std::string hw02(std::string input_str)
{

    for (int i = 0; i < input_str.length(); i++) {
        for (int j = i + 1; j < input_str.length(); j++) {
            if (input_str[i] == input_str[j]) {
                input_str.erase(j, 1);
                j--;
            }
        }
    }
    return input_str;
}
