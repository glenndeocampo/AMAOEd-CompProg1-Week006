/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

void pause() {
    fflush(stdin);
    getchar();
}

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

int integer;

cout << "Input Integer: ";
cin >> integer;

if (integer==0)
{
    cout << "Hello World" << endl;
}
else if(integer==1){
    cout << "I am Groot" << endl;
}
else if(integer==2){
    cout << "To the Top" << endl;
}
else if(integer==3){
    cout << "Where is the Horizon" << endl;
}
else if(integer==4){
    cout << "I do not Know" << endl;
}
else{
    cout << "Yeah, I will." << endl;
}    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    
    system("pause");

}
