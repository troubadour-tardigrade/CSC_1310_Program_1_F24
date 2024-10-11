/* 
 * Written by Jonathan Salvato
 * 9/25/24
 * Purpose: Storage Data Type
 */
#include "Shelf.h"
class Storage{
    private:
        int size;
        Shelf** stg;
    public:
    //default constructor
    Storage(){
        size = 0;
        stg = new Shelf*[size];
    }
    //destructor
    ~Storage(){
        for(int i = 0; i < size; i++){
            delete stg[i];
        }
        delete stg;
    }
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> Stashed changes
<<<<<<< Updated upstream

=======
<<<<<<< HEAD
<<<<<<< Updated upstream
=======

    //function Prototypes
>>>>>>> Stashed changes
=======

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
    Storage(int);
    Storage(int, Shelf[]);
    void setMedia(int, Shelf&);
    void changeSize(int);
    void delShelf(int);
    Shelf* getS(int);
    Shelf getShelf(int);
    int getSize();
    void printStorage(bool showMediaType = false);
    void changeShelf(Shelf&, int i);
    void newShelf();
};