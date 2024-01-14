//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// CS 260 - Assignment 01 - Bag of marbles
// Author: Eduarda (Duda) Trevisan Reolon
// Description: This program represents different marbles as being members of a struct and a an array as the bag. This 
// program can perform the operation of adding a marble to the bag, removing a marble from the bag and displaying 
// what marbles are in the bag. This program also contains testings to ensure it is properly running. 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using std::cout;
using std::endl;

// Marble is the main object, but the struct allows all different colors to be under the same name 'Marble'
// Members are the variables inside the struct and will be the strings with the name of the colors
// The variables in the struct are public
struct Marble {
    std::string member;
};

// 'Marble bag[]' shows that the array bag must be of the struct Marble type declared on lines 17 to 19
// 'int&' allows the program to modify the original value of 'size' in the calling code
// 'const std::string color' shows that the color is not a pointer and that the string can not be modifies within the function
void addMarble (Marble bag[], int& size, const std::string color) { 
    size++;
    bag[size].member = color; 
    cout << "One marble of color " << color << " was added to the bag" << endl;
}

void removeMarble (Marble bag[], int& size, const std::string color) {
    int i = 0;
    if (size == 0) { // in case the bag is empty when you try to remove something from it
        cout << "There are no Marbles in the bag to be removed" << endl; 
    } else {
        // repeats until it has checked all variables in the array
        while(i<=size){
            if (bag[i].member == color) { 
                // once it finds the marble that needs to be removed, the marbles to the right of it will shift left one position on the array
                for(int j=i; j<=size-1; ++j){
                    bag[j]=bag[j+1]; //the marble that must be removed is overwritten by the marble on its right
                }
                size--; // after the for loop the last slot of the array is empty and must be deleted
                cout << "A marble of color " << color << " was removed from the bag" << endl;
                break; // once one marble is removed it breaks out of the function so that if there are two of the same only one is removed
            }
            i++;
            
        }
        

    }
} 

void displayBagContent (Marble bag[], int size) {
    int i = 0;   
    if (i == size) {
        cout << "There are no marbles in the bag" << endl;
    } else {
        cout << "The bag contains the following marbles:";
            // lists the colors from first in to last in
            while (i <= size) {
                cout << bag[i].member << " ";
                i++;
    }

    }

}

int main() {

    int maxMarbles = 100; //maximum amount of marbles that the array bag can hold

    //the syntax to declare an array on C++ is Type name[size]
    Marble bag[maxMarbles]; //this line declares an array named bag which content are of the type Marble defined on line 17 to 19
    int size = 0; //initial amount of marbles in the bag


    // TESTING SECTION:

    // SITUATION 1: Display bag content when there are 0 marbles in the bag
    displayBagContent(bag,size);
    cout << endl;
    // Output should be "There are no marbles in the bag"
    // Correct

    // SITUATION 2: Try to remove a marble when there are no marbles in the bag
    removeMarble(bag,size,"Blue");
    cout << endl;
    // Output should be "There are no Marbles in the bag to be removed"
    // Correct

    // SITUATION 3: Add a blue marble to the bag, then remove the blue marble and display the bag content
    addMarble(bag,size,"Blue");
    removeMarble(bag,size,"Blue");
    displayBagContent(bag,size);
    cout << endl;
    // Output should be:
    // One marble of color Blue was added to the bag 
    // A marble of color Blue was removed from the bag
    // There are no marbles in the bag
    // Correct

    //SITUATION 4: Add two blue marbles to the bag, then remove one of the blue marbles and display the bag content
    addMarble(bag,size,"Blue");
    addMarble(bag,size,"Blue");
    removeMarble(bag,size,"Blue");
    displayBagContent(bag,size);
    cout << endl;
    // Output should be:
    // One marble of color Blue was added to the bag
    // One marble of color Blue was added to the bag
    // A marble of color Blue was removed from the bag
    // The bag contains the following marbles: Blue 
    // Correct

    removeMarble(bag,size,"Blue"); // clean the bag from previous testing so it is empty to run situation 5

    // SITUATION 5: add a green, a red, and another green marble to the bag, then remove one of the green marbles, and display the bag content
    cout << endl;  
    addMarble(bag,size,"Green");
    addMarble(bag,size,"Red");
    addMarble(bag,size,"Green");
    removeMarble(bag,size,"Green");
    displayBagContent(bag,size);
    cout << endl;
    // Output should be:
    // One marble of color Green was added to the bag
    // One marble of color Red was added to the bag
    // One marble of color Green was added to the bag
    // A marble of color Green was removed from the bag
    // The bag contains the following marbles: Red Green 
    //Correct

    cout << endl;
    removeMarble(bag,size,"Red"); 
    removeMarble(bag,size,"Green"); // clean the bag from previous testing so it is empty to run situation 6
    cout << endl;

    // SITUATION 6: add a yellow marble and remove a purple marble, but there are no purple marbles in the bag
    addMarble(bag,size,"Yellow");
    removeMarble(bag,size,"Purple");   
    displayBagContent(bag,size);
    cout << endl;
    // Output should be:
    // One marble of color Yellow was added to the bag
    // The bag contains the following marbles: Yellow 
    // It will ignore the request to remove a Purple marble since there are no purple marbles in the bag
    // Correct

    // SITUATION 7: remove a 'yellow' not a 'Yellow' marble from the bag. Check for case sensitivity.
    cout << endl;    
    removeMarble(bag,size,"yellow");   
    displayBagContent(bag,size);
    cout << endl;
    // Output should be:
    // The bag contains the following marbles: Yellow 
    // It will ignore the request to remove a yellow marble since the program is case sensitive and it should have been a "Yellow" instead
    // Correct

    return 0;
}