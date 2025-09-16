#include <iostream>
#include <vector>
#include <string>

/*
TODO: 
-Hard kod noen ord for testing, ikke bruk json ennå [X]
-Få user input om bokstaver []
-Variabler for grønn, gul og grå i godt format [X]
-Filtrering av grønn, gul og grå bokstaver - for each løkke []
*/

using namespace std;

void containsLetter();




int main()
{
    containsLetter();
    return 0;
}


void containsLetter() {
    std::vector<std::string> wordlist =  {"apple, raise, crane, brown"};
    
    std::string greenLetter = "";
    std::vector<char> gray;
    std::vector<std::pair<char, int>> yellow;


    for (std::string word : wordlist) {
        std::cout << word << '\n';
    }

}