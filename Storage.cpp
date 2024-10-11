<<<<<<< HEAD
<<<<<<< Updated upstream
<<<<<<< HEAD
/* 
=======
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> Stashed changes
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< Updated upstream
=======
>>>>>>> parent of 119a1c4 (complete program 1)
/* 
=======
/*
>>>>>>> driver-case-statement
 * Written by Jonathan Salvato
=======
>>>>>>> Stashed changes
/*
<<<<<<< HEAD
>>>>>>> driver-case-statement
=======
<<<<<<< Updated upstream
=======
>>>>>>> driver-case-statement
=======
/* 
>>>>>>> parent of 119a1c4 (complete program 1)
>>>>>>> Stashed changes
>>>>>>> driver-case-statement
 * Written by Jonathan Salvato
 * 9/25/24
 * Purpose: Storage Data Type functions and other
 */
#include "Storage.h"

// Storage function to create a dynamically allocated array with a max index of integer size
Storage::Storage(int size){
    this->size = size;
    stg = new Shelf*[size];
}

// Overloaded function for storage to allow for already existing shelf arrays to be dynamically allocated
Storage::Storage(int size, Shelf arr[]){
    this->size = size;
    stg = new Shelf*[size];
    
    //writing array data to Storage obj
    for(int i = 0; i < size; i++){
        *(stg + i) = &arr[i];
    }
}

// Function defintion for setMedia.  
void Storage::setMedia(int index, Shelf& obj){
    //checks to ensure data falls within bounds
    if(index < size && index >= 0){
        *(stg + index) = &obj;
    }
    else
        return;
}

// Functio definition for changeSize of the vector.  
void Storage::changeSize(int newSize){

    //defining a temporary array
    Shelf** temp = new Shelf*[newSize];

    //write old array data to new
    for(int i = 0; i < newSize; i++){
        if(i < size){
            *(temp + i) = *(stg + i);
        }else if(i >= size){
            *(temp + i) = NULL;
        }
    }

    //set stg to temp
    stg = temp;

    //clear temp
    delete[] *temp;
}

// Function defintion for delShelf 
void Storage::delShelf(int index){
    // Deleting the element at a given index and shifting all elements back one to fill in the gap. 
    for(int i = index; i < size - 1; i++){
        *(stg + index) = *(stg + (index + 1));
    }
    //resize array
    changeSize(size - 1);
}

<<<<<<< HEAD
<<<<<<< Updated upstream
<<<<<<< HEAD
<<<<<<< HEAD
// Function definition for getShelf which will return the current shelf content
=======
// Function definition for getS which will return A POINTER to the current shelf content
=======
=======
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> Stashed changes
<<<<<<< Updated upstream
>>>>>>> driver-case-statement
// Function definition for getS which will return the a pointer to the current shelf content
=======
<<<<<<< HEAD
<<<<<<< Updated upstream
// Function definition for getShelf which will return the current shelf content
=======
// Function definition for getS which will return A POINTER to the current shelf content
=======
// Function definition for getS which will return the a pointer to the current shelf content
>>>>>>> driver-case-statement
>>>>>>> Stashed changes
>>>>>>> driver-case-statement
Shelf* Storage::getS(int index)
{
    return (stg[index]);
}

<<<<<<< HEAD
// Function definition for getShelf which will return the Shelf obj at a given index
>>>>>>> Stashed changes
=======
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
// Function definition for getShelf which will return the Shelf obj at a given index
>>>>>>> Stashed changes
=======
>>>>>>> driver-case-statement
>>>>>>> Stashed changes
<<<<<<< HEAD
=======
<<<<<<< Updated upstream
=======
>>>>>>> driver-case-statement
>>>>>>> driver-case-statement
=======
// Function definition for getShelf which will return the current shelf content
>>>>>>> parent of 119a1c4 (complete program 1)
<<<<<<< HEAD
=======
=======
// Function definition for getShelf which will return the current shelf content
>>>>>>> parent of 119a1c4 (complete program 1)
>>>>>>> Stashed changes
>>>>>>> driver-case-statement
Shelf Storage::getShelf(int index){
    return(*stg[index]);
}

// Function definition for getSize to return the current size of the library.
int Storage::getSize()
{
    return size;
}

// Function definition for printStorage to return the media type of each shelf currently in the library
void Storage::printStorage()
{
    std::cout << std::endl;  // Create a line break to allow for better readability in the CLI
    for (int i = 0; i < getSize(); i++)
    {
<<<<<<< HEAD
        std::cout << "Shelf " << i << " media type:\t" << getShelf(i).getType() << std::endl;  // print each shelf's media type
=======
<<<<<<< Updated upstream
        std::cout << "Shelf " << (i + 1);
=======
        std::cout << "Shelf " << i << " media type:\t" << getShelf(i).getType() << std::endl;  // print each shelf's media type
    }
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< Updated upstream
<<<<<<< HEAD
=======
}
>>>>>>> Stashed changes

        if (showMediaType)
        {
            std::cout << " media type:\t" << getShelf(i).getType() << std::endl; // print each shelf's media type
        }
        else
        {
            std::cout << std::endl;
        }
>>>>>>> driver-case-statement
    }
<<<<<<< HEAD
<<<<<<< Updated upstream
<<<<<<< HEAD
=======
}

// Function definition for changeShelf that will exchange or add shelf content to the array
=======
}


=======
<<<<<<< HEAD
<<<<<<< Updated upstream
=======
}

// Function definition for changeShelf that will exchange or add shelf content to the array
=======
}


>>>>>>> driver-case-statement
>>>>>>> Stashed changes
>>>>>>> driver-case-statement
void Storage::changeShelf(Shelf& newObj, int i)
{
    if(i >= size){
        changeSize(i + 1);
    }
    stg[i] = new Shelf;
    *stg[i] = newObj;
}

<<<<<<< HEAD
// Function definition for newShelf
void Storage::newShelf(){
    changeSize(size);
    stg[size] = new Shelf();
=======
<<<<<<< Updated upstream
void Storage::newShelf(){
    changeSize(size);
    stg[size] = new Shelf();
=======
<<<<<<< HEAD
// Function definition for newShelf
void Storage::newShelf(){
    changeSize(size);
    stg[size] = new Shelf();
>>>>>>> Stashed changes
=======
void Storage::newShelf(){
    changeSize(size);
    stg[size] = new Shelf();
>>>>>>> driver-case-statement
>>>>>>> driver-case-statement
>>>>>>> Stashed changes
<<<<<<< HEAD
=======
>>>>>>> parent of 119a1c4 (complete program 1)
=======
<<<<<<< Updated upstream
=======
=======
>>>>>>> parent of 119a1c4 (complete program 1)
=======
>>>>>>> parent of 119a1c4 (complete program 1)
>>>>>>> Stashed changes
>>>>>>> driver-case-statement
}