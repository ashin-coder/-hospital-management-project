

        struct medicalrecords *next; /*next is used to navigate through structures.*/
    int count;     /*count is used to input comments into array*/
    } medicalrecords;
medicalrecords *firstc,*currentc,*newc; /*pointers*/
/* firstc is used to point to first record in list
currentc points to current record in list
newc contains address of new structure/node
*/
int cnum = 0; /*gives unique account numbers*/
