/* 
 * Written by Jonathan Salvato
 * 9/23/24
 * Purpose Dynamically allocate media types
 */
#ifndef SHELF_H
#define SHELF_H
#include "Media.h"
#include <vector>

struct Shelf{
    private:
        std::vector<Media> media;
        std::string type;
        int size;
    public:
        //default constructor
        Shelf(){
            size = 0;
            type = "Basic Media";
        }
        //overloaded constructor
        Shelf(std::string type){
            this->type = type;
        }
        //destructor
        ~Shelf(){
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> Stashed changes
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< Updated upstream
          media.clear();
=======
>>>>>>> Stashed changes
            media.clear();
=======
            media.clear();
        }
        //copy assignment operator - https://en.cppreference.com/w/cpp/language/copy_assignment
        Shelf& operator = (const Shelf& other){
            for(int i = 0; i < other.media.size(); i++){
                this->media.push_back(other.media.at(i)); 
            }
            this->size = other.size;
            this->type = other.type;
            return *this;
>>>>>>> driver-case-statement
        }
        //copy assignment operator - https://en.cppreference.com/w/cpp/language/copy_assignment
        Shelf& operator = (const Shelf& other){
            for(int i = 0; i < other.media.size(); i++){
                this->media.push_back(other.media.at(i)); 
            }
            this->size = other.size;
            this->type = other.type;
            return *this;
        }
=======
          media.clear();
        }
>>>>>>> parent of 119a1c4 (complete program 1)
        Shelf(Media arr[]);
        void setItem(Media, int);
        void setItem(std::string, std::string, int, double, int);
        void removeItem(int);
        void removeItem(int, int);
        void addItem(Media);
        void setType(std::string);
        Media getItem(int);
        std::string getType();
        int getSize();

    
};

bool importFile(std::string, std::string, Shelf&);

bool exportFile(std::string, Shelf);

#endif