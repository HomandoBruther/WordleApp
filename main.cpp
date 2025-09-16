#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

/*
TODO: 
-Hard kod noen ord for testing [X]
    -ikke bruk json ennå 
-Les word fra json []
-Få ord fra json []
-Integrer json inn i checkLetter []
-Få user input om bokstaver []
-Variabler for grønn, gul og grå i godt format [X]
-Få et daglig random Wordle ord [X]
-Refaktorere daglig random ord til egen funksjon []
-For each for å lese gjennom ord []
-For løkke for å sjekke bokstaver i posisjon []
-Få containsLetter() til å gå igjennom readWords() []
*/


/*
Lærepenger:
-.size gir unsigned, mens int gir signed type. skreve begge i for løkke, men da blander jeg typer som kan bare gi positive verdier (unsigned) med en som kan gi både positive og negative (signed). Kan gi uforventet resultater. Dermed bruk _size_t for å ikke blande.
'<<' er basically en append virker det som
*/



using namespace std;


void readWords();
void containsLetter();
void getRandomWord();


int main()
{
    containsLetter();
    return 0;
}


void getRandomWord() {

}


/* void readWords() {
    std::vector<std::string> wordlist =  {"apple, raise, crane, brown"};

    for (std::string word : wordlist) {
        std::cout << word << '\n';
    }
} */


std::string greenLetter = "";
std::vector<char> gray;
std::vector<std::pair<char, int>> yellow;


void containsLetter() {
    std::vector<std::string> wordlist =  {"apple", "raise", "crane", "brown"};

    std::srand(std::time(nullptr)); //seed list
    size_t randomIndex = std::rand() % wordlist.size();
    std::string randomWord = wordlist[randomIndex];


    std::cout << "Random word: " << randomWord << std::endl;


    for (size_t i = 0; i < randomWord.size(); i++) {
        char character = randomWord[i];
        std::cout << "Letter at position " << i << " is " << character << '\n';
    }


    for (size_t i = 0; i < wordlist.size(); i++) {
        //std::cout << wordlist[i] << std::endl;    // - print hele vector
        std::string word = wordlist[i];

        if (word[2] == 'p') {
            std::cout << word << " has letter 'p' in the third position of word" << std::endl;
        }
    }

}