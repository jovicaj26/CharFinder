#include "charfinder.h"




int main()
{
    CharFinder finder;
    bool uspeh = 0;
    bool* succces = &uspeh;
    std::vector<char> vec{'1','a','3','4','b'};

    std::string recenica{"Some sentence"};
    char firstNonRepeatedCharacter = finder.firstNonRepeated(recenica, succces);

    if(uspeh)
    {
        std::cout << "First non repeated char is: " <<firstNonRepeatedCharacter << std::endl;
    }
    else
        std::cout << "There is no nonrepeating characters. " << std::endl;

    char repeatedCharacter = finder.repeatedElement(vec, succces);

    if(uspeh)
    {
        std::cout << "First repeated char is: " <<repeatedCharacter << std::endl;
    }
    else
        std::cout << "There is no repeating characters. " << std::endl;

    return 0;
}
