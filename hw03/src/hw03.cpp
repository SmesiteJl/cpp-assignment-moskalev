#include <hw03.h>

#include <cstring>
void hw03(char* str, const char* pattern) {
    if (str == nullptr || pattern == nullptr) {
        return;
    }
    
    int strLength = strlen(str);
    int patternLength = strlen(pattern);
    
    if (strLength == 0 || patternLength == 0) {
        return;
    }
    
    char* match = strstr(str, pattern);
    
    if (match != nullptr) {
        memmove(match, match + patternLength, strLength - (match - str) - patternLength + 1);
    }
}
