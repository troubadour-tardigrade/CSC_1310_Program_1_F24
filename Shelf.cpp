<<<<<<< HEAD
<<<<<<< Updated upstream
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< Updated upstream
<<<<<<< HEAD
=======
>>>>>>> parent of 119a1c4 (complete program 1)
>>>>>>> driver-case-statement
=======
>>>>>>> parent of 119a1c4 (complete program 1)
/* 
 * Written by Jonathan Salvato
 * 9/23/24
 * Purpose Dynamically allocate media types
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
=======
<<<<<<< HEAD
=======
=======
>>>>>>> Stashed changes
>>>>>>> driver-case-statement
=======
<<<<<<< HEAD
<<<<<<< Updated upstream
/* 
 * Written by Jonathan Salvato
 * 9/23/24
=======
/*
 * Contributors: Jonathan Salvato, Nick Romsdal
 * 9/23/24, 10/4/2024
>>>>>>> driver-case-statement
 * Purpose Dynamically allocate media types
=======
>>>>>>> Stashed changes
>>>>>>> driver-case-statement
/*
 * Contributors: Jonathan Salvato, Nick Romsdal
 * 9/23/24, 10/4/2024
<<<<<<< HEAD
=======
<<<<<<< Updated upstream
 * Purpose Dynamically allocate media types
=======
>>>>>>> driver-case-statement
 * Purpose: Dynamically allocate media types
>>>>>>> Stashed changes
=======
>>>>>>> parent of 119a1c4 (complete program 1)
<<<<<<< HEAD
=======
=======
>>>>>>> parent of 119a1c4 (complete program 1)
>>>>>>> Stashed changes
>>>>>>> driver-case-statement
 */
#include "Shelf.h"
Shelf::Shelf(Media arr[]){
    setType("Basic Media");
    size = sizeof(*arr)/sizeof(arr[0]);
    //media.resize(size);
    /*for(int i = 0; i < size; i++){
        media.push_back(arr[i]);
    }*/
   media.assign(arr, arr + size);
}

// +++++++++++++++++++++++++++++++
// Mutator Function definitions

void Shelf::setItem(Media value, int index){
    media.at(index) = value;
}
void Shelf::setItem(std::string name, std::string creator, int year, double size, int index){
    Media temp(name, creator, year, size);
    setItem(temp, index);
}

// increase the size of the shelf by one and insert the new media object to the back of the shelf list
void Shelf::addItem(Media item){
    size++;
    media.push_back(item);
}

// decrement shelf size by one and delete the object at the index provided in the argument
void Shelf::removeItem(int index){
    size--;
    media.erase(media.begin() + index);
}

// decrement shelf size by the difference between upper and lower arguments and delete everything between index lower and index upper
void Shelf::removeItem(int lower, int upper){
    size = size - (upper - lower);
    media.erase(media.begin() + lower, media.begin() + upper);
}

// set the media type of the shelf.  
void Shelf::setType(std::string type){
    this->type = type;
}

// ++++++++++++++++++++++++++++++++++++
// Accessor Function Definitions

// return the media object at the index provided in the argument as a Media object
Media Shelf::getItem(int index){
    return(media.at(index - 1));
}

// return the media type of the shelf as a string
std::string Shelf::getType(){
    return(type);
}

// return the size of the shelf as an integery
int Shelf::getSize(){
    size = media.size();
    return(size);
}
