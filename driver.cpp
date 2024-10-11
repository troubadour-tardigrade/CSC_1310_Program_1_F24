/*
 * Contributors: J Seger, Nick Romsdal, Jonathan Salvato
 * 9/27/24
 * Driver file
 */

// Should:
// At launch, import a test case via cin. This will be in delimited form of data for a shelf, plus maybe commands to make changes? Ask
// Start CLI menu with options:
//   Import file (adds to existing shelf)
//   Export file (existing data to file -- automatic or no?)
//   View contents of a shelf
//       Options to do shelf options (delete element, etc) or edit element (Media obj get/set)

#include "Storage.h"

void printMainMenu(Storage &library);
void printShelfMenu(Shelf shelf);
void inpVer(int &out, int lowerBound, int upperBound, std::string qText = "Enter choice:   ", std::string invText = "Input invalid.");

<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> Stashed changes
<<<<<<< Updated upstream
int main()
{
=======
<<<<<<< HEAD
<<<<<<< Updated upstream
int main(){
    //main Storage class -- holds ptrs to shelves, which have ptrs to Media objects
=======
int main()
{
    //variable declerations
=======
int main()
{
>>>>>>> driver-case-statement
>>>>>>> Stashed changes
    std::string file_name;
    std::string media_file_type;
    std::string strTemp;
    int shelf_index;
    int userChoice;
    int temp_index;
    int lowerDelLimit;
    Shelf import_Shelf; // temp variable for importing a file to a shelf in the switch case

    // main Storage class -- holds ptrs to shelves, which have ptrs to Media objects
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
>>>>>>> Stashed changes
=======
>>>>>>> driver-case-statement
>>>>>>> Stashed changes
<<<<<<< Updated upstream
=======
=======
int main(){
    //main Storage class -- holds ptrs to shelves, which have ptrs to Media objects
>>>>>>> parent of 119a1c4 (complete program 1)
=======
int main(){
    //main Storage class -- holds ptrs to shelves, which have ptrs to Media objects
>>>>>>> parent of 119a1c4 (complete program 1)
>>>>>>> Stashed changes
    std::cout << "\n***Welcome to Media Library!***\n";

    Media A("The Wisdom of the Bullfrog", "Admiral Bill McRaven", 2023, 2799);

<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> Stashed changes
<<<<<<< Updated upstream
    Media arr1[] = {A};
=======
<<<<<<< HEAD
<<<<<<< Updated upstream
    Media arr1[] = {A, B};
    Media arr2[] = {C};
=======
    //default/base library
    Media arr1[] = {A};
>>>>>>> Stashed changes
=======
    Media arr1[] = {A};
>>>>>>> driver-case-statement
>>>>>>> Stashed changes
<<<<<<< Updated upstream
=======
=======
    Media arr1[] = {A, B};
    Media arr2[] = {C};
>>>>>>> parent of 119a1c4 (complete program 1)
=======
    Media arr1[] = {A, B};
    Media arr2[] = {C};
>>>>>>> parent of 119a1c4 (complete program 1)
>>>>>>> Stashed changes

    Shelf SA(arr1); // Initalizing Shelf Object A
    SA.setType("Books");

    Storage library(1); // Initalizing Storage Object with a size of 2 for the two shelves currently intialized

    library.setMedia(0, SA);

    // create menu

    do
    {
        printMainMenu(library);
        inpVer(userChoice, 1, 4);
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> Stashed changes
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< Updated upstream
<<<<<<< Updated upstream
=======
>>>>>>> driver-case-statement
=======
>>>>>>> parent of 119a1c4 (complete program 1)
=======
>>>>>>> parent of 119a1c4 (complete program 1)
>>>>>>> Stashed changes
        switch(userChoice){
            case 1: break; //edit shelf -- new menu w options to remove element/s, add element (need dialogue to create new Media),
                           //or edit individual element
            case 2: break; //input file name, call importFile()
            case 3: break; //iterate through shelves, input filename/ directory and call export file for each
            default: break;
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> Stashed changes
=======
=======
>>>>>>> driver-case-statement
>>>>>>> Stashed changes
        switch (userChoice)
        {
        // case 1 is for editing a shelf (Adding to an existing shelf, viewing the items on a shelf, etc.)
        case 1:

            // Printing all shelves that currently exist in the library
            library.printStorage();

            std::cout << std::endl
                      << "Enter the index for the shelf you wish to edit:\t";
            std::cin >> shelf_index;
            std::cin.ignore();
            std::cout << std::endl; // Creating a break between the lines of text for better readability

            do
            {
                printShelfMenu(*library.getS(shelf_index - 1));
                inpVer(userChoice, 5, 8);
                switch (userChoice)
                {
                case 5:
                    // print all titles of shelf content
                    for (int i = 0; i < library.getShelf(shelf_index - 1).getSize(); i++)
                    {
                        std::cout << "Item Index: " << i
                                  << "\tItem Title: " << library.getShelf(shelf_index - 1).getItem(i).getTitle()
                                  << std::endl;
                    }
                    break;

                case 6:
                    // Take in the index value of an item and return all of the information on that item
                    std::cout << "Enter the Item Index value for the item you want to look at:\t";
                    std::cin >> temp_index;

                    std::cout << "Item Index: " << temp_index
                              << "\tItem Title:\t" << library.getShelf(shelf_index - 1).getItem(temp_index).getTitle()
                              << "\tItem Creator:\t" << library.getShelf(shelf_index - 1).getItem(temp_index).getCreator()
                              << "\tYear of Publishing:\t" << library.getShelf(shelf_index - 1).getItem(temp_index).getYear()
                              << "\tNumber of Plays:\t" << library.getShelf(shelf_index - 1).getItem(temp_index).getNum()
                              << std::endl;

                    break;

                case 7:
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
                    // Take in the index, or range of indexes, and removes the item(s) from the library
=======
>>>>>>> driver-case-statement
>>>>>>> Stashed changes
                    std::cout << "How many items do you wish to delete from the shelf?" << std::endl;
                    std::cin >> temp_index;

                    if (temp_index > 1)
                    {
                        std::cout << "What is the index value of the first item in the range of items you wish to delete?\t";
                        std::cin >> lowerDelLimit;

                        strTemp = library.getShelf(shelf_index - 1).getItem(lowerDelLimit).getTitle();

                        library.getS(shelf_index - 1)->removeItem(lowerDelLimit, lowerDelLimit + temp_index);

                        std::cout << strTemp << " has been successfully deleted." << std::endl;
                    }

                    else if (temp_index == 1)
                    {
                        std::cout << "What is the index for the value you wish to delete?\t";
                        std::cin >> lowerDelLimit;
                        strTemp = library.getShelf(shelf_index - 1).getItem(lowerDelLimit).getTitle();
                        library.getS(shelf_index - 1)->removeItem(lowerDelLimit);

                        std::cout << strTemp << " has been successfully deleted." << std::endl;
                    }

                    // Ask the user if they want to delete one element or a range of elements
                    // Then ask for the index or lower and upper index values they wish to delete
                    // Then delete the indicies

                    break;
                default:
                    break;
                }
            } while (userChoice != 8);

            break; // edit shelf -- new menu w options to remove element/s, add element (need dialogue to create new Media),
                   // or edit individual element

        // case 2 is for importing data from a file to the library,  gives the option to create a new shelf for the new data.
        case 2:
            std::cin.ignore();

            // Asking the user for the file name of the file they wish to import
            std::cout << "Enter the name of the file you wish to import:\t";
            std::getline(std::cin, file_name);

            // Asking the user what media type they wish to import
            std::cout << "What type of media do you want to import?\t";
            std::getline(std::cin, media_file_type);

            // Asking the user what shelf they wish to import to
            std::cout << "Which shelf do you want to store this data on?";
            library.printStorage();
            std::cout << "To create a new shelf for the new information, please enter:\t" << library.getSize() + 1 << std::endl;
            inpVer(shelf_index, 1, library.getSize() + 1);
            std::cin.ignore();

            import_Shelf.removeItem(0, import_Shelf.getSize());
            if (importFile(file_name, media_file_type, import_Shelf))
            {
                library.changeShelf(import_Shelf, shelf_index - 1);
                std::cout << "\nImported " << library.getShelf(0).getSize() << " things\n";
                std::cout << "File successfully imported" << std::endl;
            }
            else
            {
                std::cout << "File was not able to be imported. Check to make sure the file you wish to import is in the same folder as this executable file and is correctly spelled before trying again."
                          << std::endl;
            }

            break;
        case 3:
            for (int i = 0; i < library.getSize(); i++)
            {
                file_name = "DATA/" + library.getShelf(i).getType() + ".txt";
                if(exportFile(file_name, library.getShelf(i)))
                {
                    std::cout << "Shelf " << i << " has been successfully exported to " << file_name << "." << std::endl;
                }
                else
                {
                    std::cout << "Shelf " << i << " failed to export." << std::endl;
                }
            }
            break; // iterate through shelves, input filename/ directory and call export file for each
        default:
            break;
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
>>>>>>> Stashed changes
=======
>>>>>>> driver-case-statement
>>>>>>> Stashed changes
<<<<<<< Updated upstream
=======
=======
>>>>>>> parent of 119a1c4 (complete program 1)
=======
>>>>>>> parent of 119a1c4 (complete program 1)
>>>>>>> Stashed changes
        }
    } while (userChoice != 4);

    return 0;
}

<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> Stashed changes
<<<<<<< Updated upstream
void printMainMenu(Storage &library)
{
=======
<<<<<<< HEAD
<<<<<<< Updated upstream
void printMenu(Storage library){
=======

// Function definition for printMainMenum, Prints the main menu also displaying the library
void printMainMenu(Storage &library)
{
>>>>>>> Stashed changes
=======
void printMainMenu(Storage &library)
{
>>>>>>> driver-case-statement
>>>>>>> Stashed changes
<<<<<<< Updated upstream
=======
=======
void printMenu(Storage library){
>>>>>>> parent of 119a1c4 (complete program 1)
=======
void printMenu(Storage library){
>>>>>>> parent of 119a1c4 (complete program 1)
>>>>>>> Stashed changes
    std::cout << "\nYour library contains:";

    for (int i = 0; i < library.getSize(); i++)
    {
        std::cout << "\n\nShelf " << i + 1 << " type: " << library.getShelf(i).getType();
    }
    std::cout << "\n\nOptions:";
    std::cout << "\n1. Edit a shelf";
    std::cout << "\n2. Import a file";
    std::cout << "\n3. Export to file (occurs automatically at end of program)";
    std::cout << "\n4. Exit program";
}

// Function definition for printShelfMenu which will
void printShelfMenu(Shelf shelf)
{
    /*
        Capabilities to be displayed:
        - View Shelf Content Titles
        - Select an element to view more information on the element
            - Increment number of times played by 1
        - Remove an element from the shelf
        - Exit Shelf
    */
    std::cout << "Information about this shelf." << std::endl
              << std::endl;
    std::cout << "Number of items on the shelf:\t" << shelf.getSize() << std::endl;
    std::cout << "Type of media on shelf:\t" << shelf.getType() << std::endl;

    std::cout << "Options:" << std::endl;
    std::cout << "5.\tView Shelf Content" << std::endl;
    std::cout << "6.\tView more information about an item on the shelf" << std::endl;
    std::cout << "7.\tDelete item(s) from the shelf" << std::endl;
    std::cout << "8.\tExit the shelf" << std::endl;
}
// From hsUtil

/*
    Name:       inpVer
    Args:       int& out, int lowerBound, int upperBound, string qText, string invText
    Purpose:    Take user input and ensure it is an int that is within given bounds. Takes optional prompt and invalid strings to personalize
*/
// Only for int input verification!
void inpVer(int &out, int lowerBound, int upperBound, std::string qText, std::string invText)
{
    bool works;
    do
    {
        works = false;
        std::cout << "\n"
                  << qText;
        std::cin >> out;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "\n"
                      << invText;
        }
        else if (out > upperBound || out < lowerBound)
        {
            std::cout << "\n"
                      << invText;
        }
        else
        {
            works = true;
        }
    } while (!works);
}