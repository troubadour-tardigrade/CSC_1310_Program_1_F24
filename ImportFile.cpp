/*
 * Written by Jonathan Salvato
 * 9/23/24
 * Purpose: allows for importing data from files
 */
#include "Shelf.h"
#include <fstream>

// returns true on a successful read
bool importFile(std::string fileName, std::string type, Shelf &shelfMedia)
{
    // using a temp string and media var. to read data
    std::string input;
    Media temp;

    // defining and trying to open file
    std::ifstream inputFile;
    inputFile.open(fileName);

    // tests if the file opened and has data, if it doesn't function doesn't continue
    if (!inputFile.is_open())
    {
        return (false);
    }
    // discard first line per formatting
    getline(inputFile, input);
    if (input.length() == 0)
    {
        return (false);
    }

    // sets type of function
    shelfMedia.setType(type);

    do
    {
        // reading a row
        getline(inputFile, input, ','); // reading in the line up to the first comma (delimiter) as the title of the media object
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> Stashed changes
<<<<<<< Updated upstream
        if(input.at(0) == '\n'){
            input.erase(0, 1);
        }
=======
<<<<<<< HEAD
<<<<<<< Updated upstream
=======
        
        if(input.at(0) == '\n'){ //removing breaks if they exist
            input.erase(0, 1);
        }
        
>>>>>>> Stashed changes
=======
        if(input.at(0) == '\n'){
            input.erase(0, 1);
        }
>>>>>>> driver-case-statement
>>>>>>> Stashed changes
<<<<<<< Updated upstream
=======
>>>>>>> driver-case-statement
=======
>>>>>>> parent of 119a1c4 (complete program 1)
=======
>>>>>>> parent of 119a1c4 (complete program 1)
>>>>>>> Stashed changes
        temp.setTitle(input);
        getline(inputFile, input, ','); // reading between the first and second delimiter as the creator/publisher of the media object
        temp.setCreator(input);
        getline(inputFile, input, ','); // reading between the next two delimiters as the year of publishing/release for the media object
        temp.setYear(stoi(input));
        getline(inputFile, input, ','); // reading from the last delimiter to the end of the line as the arbituary file size of the media object
        temp.setSize(stod(input));



        // adding to media
        shelfMedia.addItem(temp);


    } while (!inputFile.eof()); // checking for end

    // closing and returning
    inputFile.close();
    return (true);
}