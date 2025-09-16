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
-For each for å lese gjennom ord [X]
-For løkke for å sjekke bokstaver i posisjon [X]
-Få containsLetter() til å gå igjennom readWords() []
*/


/*
Lærepenger:
-.size gir unsigned, mens int gir signed type. skreve begge i for løkke, men da blander jeg typer som kan bare gi positive verdier (unsigned) med en som kan gi både positive og negative (signed). Kan gi uforventet resultater. Dermed bruk _size_t for å ikke blande.
'<<' er basically en append virker det som
'std::' virker til å gjøre så vi ikke blander standard sin vector f.eks med vår egen, ergo std:: skiller de to.
*/


using namespace std;


void readWords();
void containsLetter();
void getRandomWord();
std::string userInputGuesses();


int main()
{
    containsLetter();
    userInputGuesses();
    return 0;
}


void getRandomWord() {

}


std::string userInputGuesses() {
    std::string guess;
    std::cout << "Enter a 5 letter guess: " << std::flush;
    std::cin >> guess;

    while (guess.length() != 5) {
        std::cout << "Please enter a word that is exactly 5 letters: " << std::flush;
        std::cin >> guess; 
    }

    return guess;
}


/* void readWords() {
    std::vector<std::string> wordlist =  {"apple", "raise", "crane", "brown"};

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


    // Går igjennom hele random ordet sine bokstaver og hvilken posisjon de er i
    for (size_t index = 0; index < randomWord.size(); index++) {
        char character = randomWord[index];
        std::cout << "Letter at position " << index << " is " << character << '\n';
    }


    // Leter etter ord med spesifik bokstav i spesifik index
    for (size_t index = 0; index < wordlist.size(); index++) {
        //std::cout << wordlist[i] << std::endl;    // - print hele vector
        std::string word = wordlist[index];

        if (word[2] == 'p') {
            std::cout << word << " has letter 'p' in the third position of word" << std::endl;
        }
    }





}