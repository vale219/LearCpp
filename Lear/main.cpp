#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

void printEndOfGame(){

    cout << "You have completed all levels available in Lear at the time." << endl;
    cout << "You have become an expert at lie detection!" << endl;
    cout << "Thank you for playing";

}

void printDukeIs(){

    cout << "Duke is: (0 for knight, 1 for knave, 2 for undefined)" << endl;

}

void printEarlIs(){

    cout << "Earl is: (0 for knight, 1 for knave, 2 for undefined)" << endl;

}

void printFoolIs(){

    cout << "Fool is: (0 for knight, 1 for knave, 2 for undefined)" << endl;

}

void printLevel(int level){

    cout << "LEVEL " << level << endl;
    cout << endl;

}

void askLoop(int answer, int correct){
    while(answer != correct){
        cout << "Wrong answer, try again!" << endl;
        cin >> answer;
    }
}

void printGoodJob(){
    cout << "Good job!" << endl;
    cout << endl;
}

int main()
{
    while(1){
    // Variable declaration

    char s;
    int answer = 12;
    int level = 0;

    // Print front page with explanation of the game

    //Background and text color

    //system("Color 1A"); // Prints blue background and green text
    //system("Color 2B"); // Prints green background and light blue text
    //system("Color 3C"); // Prints turquose background and red text
    //system("Color 4D"); // Prints red background and pink text
    //system("Color 5E"); // Prints purple background and yellow text
    //system("Color 6F"); // Prints dark green background and white text
    system("Color 3F");

    cout << "Welcome to Lear!" << endl;
    cout << endl;

    cout << "This  game  is  based  on  the game  knights  and  knaves." << endl;
    cout << "The game of knights and knaves assumes that there are two" << endl;
    cout << "kind of people, those that always tell  the, true knights," << endl;
    cout << "and     those     that    always    lie,    the    knaves." << endl;
    cout << endl;

    cout << "The  characters  of  this  game  are the  Duke, the  Earl," << endl;
    cout << "and  the  Fool,  however,  do  not   assume  their  names " << endl;
    cout << "determine  their  levels  of   honesty. Your  job  is  to " << endl;
    cout << "determine which character if  a  character  is  a  knight " << endl;
    cout << "or a knave When you can't determine  which  is  a  knight" << endl;
    cout << "and which character is a knave, or the  character  cannot " << endl;
    cout << "be classified as either knight or knave, select undefined." << endl;
    cout << endl;

    cout << "If   you   would   like  to  start,  press  S  and  enter" << endl;
    cin >> s;

    // Clear the screen

    system("CLS");

    // Check if s + enter was pressed

    if((s == 'S')||(s == 's')){

        //Level 1

        level++;
        printLevel(level);

        // Print out dialog
        concatS("Duke says: ", "\"I am a knight\"");
        //cout << "Duke says: \"I am a knight\"" << endl;
        cout << "Fool says: \"The Duke is a knave\"" << endl;
        cout << endl;

        // Ask about first character
        printDukeIs();
        cin >> answer;

        askLoop(answer,1);

        printGoodJob();

        printFoolIs();
        cin >> answer;

        askLoop(answer, 0);

        printGoodJob();

        // Clear Screen

        system("CLS");

        // Level 2

        level++;
        printLevel(level);

        cout << "Duke says: \"The fool is lying\"" << endl;
        cout << "Fool says: \"The Duke is a knave\"" << endl;
        cout << endl;

        printDukeIs();
        cin >> answer;

        askLoop(answer,2);

        printGoodJob();

        printFoolIs();
        cin >> answer;

        askLoop(answer, 2);

        printGoodJob();

        system("CLS");

        // Level 3

        level++;
        printLevel(level);

        cout << "Duke says: \"The fool was at the party, I saw him\"" << endl;
        cout << "Fool says: \"The Duke went to the party, but I did not\"" << endl;
        cout << endl;

        printDukeIs();
        cin >> answer;

        askLoop(answer,0);

        printGoodJob();

        printFoolIs();
        cin >> answer;

        askLoop(answer,1);

        printGoodJob();

        system("CLS");

        //Level 4

        level++;
        printLevel(level);

        cout << "Duke says: \"The Fool is a knight\"" << endl;
        cout << "Fool says: \"The Duke is a knave\"" << endl;
        cout << endl;

        printDukeIs();
        cin >> answer;

        askLoop(answer,1);

        printGoodJob();

        printFoolIs();
        cin >> answer;

        askLoop(answer,0);

        printGoodJob();

        system("CLS");

        //Level 5

        level++;
        printLevel(level);

        cout << "Duke says: \"Of the Fool and I, exactly one is a knight\"" << endl;
        cout << "Fool says: \"Only a knave would say that the Duke is a knave\"" << endl;
        cout << endl;

        printDukeIs();
        cin >> answer;

        askLoop(answer,0);

        printGoodJob();

        printFoolIs();
        cin >> answer;

        askLoop(answer,1);

        printGoodJob();

        system("CLS");

        //Level 6

        level++;
        printLevel(level);

        cout << "Duke says: \"We are all knaves\"" << endl;
        cout << "Earl says: \"One of us is a knave\"" << endl;
        cout << "Fool says: Does not say anything" << endl;
        cout << endl;

        printDukeIs();
        cin >> answer;

        askLoop(answer,1);

        printGoodJob();

        printEarlIs();
        cin >> answer;

        askLoop(answer,0);

        printGoodJob();

        printFoolIs();
        cin >> answer;

        askLoop(answer,1);

        printGoodJob();

        system("CLS");

        //Level 7

        level++;
        printLevel(level);

        cout << "Duke says: \"The Earl is a knave\"" << endl;
        cout << "Earl says: \"The Duke and the Fool are the same type\"" << endl;
        cout << "Fool says: Does not say anything" << endl;
        cout << endl;

        printDukeIs();
        cin >> answer;

        askLoop(answer,2);

        printGoodJob();

        printEarlIs();
        cin >> answer;

        askLoop(answer,2);

        printGoodJob();

        printFoolIs();
        cin >> answer;

        askLoop(answer,1);

        printGoodJob();

        system("CLS");

        //Level 8

        level++;
        printLevel(level);

        cout << "Duke says: \"Either I am a knave, or 2 + 3 = 5\"" << endl;
        cout << endl;

        printDukeIs();
        cin >> answer;

        askLoop(answer,0);

        printGoodJob();

        system("CLS");

        //Level 9

        level++;
        printLevel(level);

        cout << "Earl says: \"I am a knight and I am not a knight\"" << endl;
        cout << endl;

        printEarlIs();
        cin >> answer;

        askLoop(answer,1);

        printGoodJob();

        system("CLS");

        //Level 10

        level++;
        printLevel(level);

        cout << "Fool says: \"I am a knave\"" << endl;
        cout << endl;

        printFoolIs();
        cin >> answer;

        askLoop(answer,2);

        printGoodJob();

         system("CLS");

        //Level 11

        level++;
        printLevel(level);

        cout << "Duke says: \"Neither of us is a knight\"" << endl;
        cout << "Fool says: Does not say anything" << endl;
        cout << endl;

        printDukeIs();
        cin >> answer;

        askLoop(answer,1);

        printGoodJob();

        printFoolIs();
        cin >> answer;

        askLoop(answer,0);

        system("CLS");

        //Level 12

        level++;
        printLevel(level);

        cout << "Duke says: \"I am a knave, or the Earl is a knight\"" << endl;
        cout << "Earl says: Does not say anything" << endl;
        cout << endl;

        printDukeIs();
        cin >> answer;

        askLoop(answer,2);

        printGoodJob();

        printEarlIs();
        cin >> answer;

        askLoop(answer,2);

        printGoodJob();

        system("CLS");

        printEndOfGame();

        system("CLS");

    }

    } // End of first endless loop

    return 0;
}
