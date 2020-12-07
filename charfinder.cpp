#include "charfinder.h"

CharFinder::CharFinder()
{

}

bool CharFinder::inMap(const char &letter, const std::unordered_map<char, int32_t>& map)
{
    auto it = map.find(letter);

    if(it != map.end())
        return true;

    return false;
}


std::unordered_map<char, int32_t> CharFinder::makeUnorderedMap(const std::string& word)
{
    std::unordered_map<char, int32_t> map {};

    for(const char& letter : word)
    {
        if(inMap(letter, map))
            map[letter]++;

        map.insert(std::make_pair(letter, 1));
    }
    return map;
}


char CharFinder::firstNonRepeated(const std::string& word, bool* const found)
{
    if (found) *found = false;
    char ret_element {};

    std::unordered_map<char, int> map = makeUnorderedMap(word);
    printMap(map);

    for(const char& element : word)
        if(map.at(element) == 1)
        {
            ret_element = element;
            if (found) *found = true;
            break;
        }

    return ret_element;
}


char CharFinder::repeatedElement(const std::vector<char> &list, bool* const found)
{
    if (found) *found = false;

    char ret_char {};

    std::set<char> passed;
    std::pair<std::set<char>::iterator, bool> inSet;
    for (auto i_list = list.begin(); i_list != list.end(); ++i_list)
    {
        inSet = passed.insert(*i_list);
        if (inSet.second) continue;

        ret_char = *inSet.first;
        if (found) *found = true;
        break;
    }
    return ret_char;
}


void CharFinder::printMap(const std::unordered_map<char, int32_t>& map)
{
    for(const auto& elem : map)
        std::cout << elem.first << ": " << elem.second << std::endl;
}
