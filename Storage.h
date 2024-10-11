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
    Storage(){
        size = 1;
        stg = new Shelf*[size];
    }
    ~Storage(){
        delete stg;
    }
<<<<<<< HEAD
<<<<<<< Updated upstream
<<<<<<< HEAD
=======

    //function Prototypes
>>>>>>> Stashed changes
=======

=======
<<<<<<< HEAD
<<<<<<< Updated upstream
=======

    //function Prototypes
>>>>>>> Stashed changes
=======

>>>>>>> driver-case-statement
>>>>>>> Stashed changes
>>>>>>> driver-case-statement
=======
>>>>>>> parent of 119a1c4 (complete program 1)
    Storage(int);
    Storage(int, Shelf[]);
    void setMedia(int, Shelf&);
    void changeSize(int);
    void delShelf(int);
    Shelf getShelf(int);
    int getSize();
    void printStorage();
};