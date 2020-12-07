#ifndef CHARFINDER_H
#define CHARFINDER_H

#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>

class CharFinder
{
public:
    CharFinder();

    bool inMap(const char &letter, const std::unordered_map<char, int32_t>& map);
    std::unordered_map<char, int32_t> makeUnorderedMap(const std::string& word);

    void printMap(const std::unordered_map<char, int32_t>& map);

    char firstNonRepeated(const std::string& string, bool* const found = nullptr);
    char repeatedElement(const std::vector<char>& list, bool* const found = nullptr);

};

#endif // CHARFINDER_H
