#include <iostream>
#include <limits>
using namespace std;

void waitForEnter() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
int main() {
    cout << "\nWelcome to the Left Behind.\nTo proceed within the game, press Enter.\n" << endl;
    waitForEnter();

    cout << "\n... \n" << endl;
    waitForEnter(); 

    cout << "\nYou wake up in a dark room. \n" << endl;
    waitForEnter();

    bool running = true;
    while (running) {
        cout << "\nWhat is your course of action?\n" << endl;
        cout << "1. Look around the room." << endl;
        cout << "2. Announce your presence by yelling." << endl;
        cout << "3. Try to remember how you got here." << endl;
        cout << "4. Proceed forward.\n" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n*You look around the room. It's got wooden walls and furniture, it's old and dusty. The only source of light is coming through a small window high up on one wall.*\n" << endl;
                break;
            case 2:
                cout << "\n*You yell and hope for a response, nothing...*\n" << endl;
                break;
            case 3:
                cout << "\n*You try to remember how you got here, but thinking in silence leads nowhere...*\n" << endl;
                break;
            case 4:
                cout << "\n*You decide to proceed forward.*\n" << endl;
                running = false; //Exits this action segment
                break;
            default:
                cout << "\n*Invalid choice.*\n" << endl;
                break;
        }
        if (running) waitForEnter();
    }

    cout << "\nYou head towards the door and try to open it. It's locked...\n" << endl;
    waitForEnter();

    return 0;
}