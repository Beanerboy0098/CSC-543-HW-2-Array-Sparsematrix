/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std; 

int main()
{
   int rowid, colid, numofrows, numofcols, total;       /* I intiallized all the variables used throughout the method */
   
   cout << "To create a Sparse Matrix, we need some ingredients";
   
   
   
   cout << "\n First enter the number of rows you want for the Matrix: "; /* Asking for User input */
   

   cin >> rowid; /* the variable taking in what the user inputed*/
   
   while(rowid <= 0) {
       
       cout << "\n Please type in a nonzero input: ";
       cin >> rowid;
   }
   /* A check to prevent zero and negative numbers from being inputed by the user */
   
   
   cout << "\n Number of columns: ";
   
   cin >> colid;
   
   while(colid <= 0) {
       
       cout << "\n Please type in a nonzero input: ";
       cin >> colid;
   }
   
   int customsparsematrix[rowid][colid]; /* To create a matrix, I use a two array to first establish the size of the array and through these set guideline a matrix can be created */
   
   cout << "Now the we need the elements, type in a number and press enter to submit it, starting from cordinate 0,0 and going through each of the rows columns until reaching the max amount of rows set \n ";
   
   cout << "Let's began";
   
   for(numofrows = 0; rowid > numofrows; numofrows++) /* Having the program go through the various user inputs in order to create the matrix */
   {
       cout << "\n row: " << numofrows;
       
       for(numofcols = 0; colid > numofcols; numofcols++){
          
          cout << "\n column: " << numofcols;
          cout << "\n Insert number (press enter or type 0 for zero): ";
          cin >> customsparsematrix[numofrows][numofcols];
          
       }
       
   }
   
   
   
   for(numofrows = 0; rowid > numofrows; numofrows++)
   {
       
       for(numofcols = 0; colid > numofcols; numofcols++){
          
        if(customsparsematrix[numofrows][numofcols] == 0) {
            
            total++;
        }
           
       }
   } /* Checking if the matrix crated actually is a Sparse Matrix, by checking though each element in the array  */
   
   for(numofrows = 0; rowid > numofrows; numofrows++)
   {
       cout << "\n";
       
       for(numofcols = 0; colid > numofcols; numofcols++){
          
        cout << customsparsematrix[numofrows][numofcols] << " ";
           
       }
       
   }
   if (total > (rowid * colid)/2 ){
       
       cout << "\n The Matrix you created is a Sparse Matrix";
   }
   
   /* If a majority of elements of the created matrix are zero, it is a sparse matrix, if not then it is not. */
   else 
   {
       cout << "\n The Matrix you created is not a Sparse Matrix"; 
   }
}
