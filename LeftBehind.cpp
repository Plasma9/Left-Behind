#include <iostream>
#include <limits>
using namespace std;

void waitForEnter() {
    cout << "Press Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
int main() {
    using std::cout;
    using std::endl;
    using std::string;
    using std::cin;

    cout << "\n... \n" << endl;
    waitForEnter(); 

    cout << "\nYou awake in a dark room. \n" << endl;
    waitForEnter();

    cout << "\nWhat is your first course of action?\n" << endl;
    cout << "1. Look around the room." << endl;
    cout << "2. Announce your presence by yelling." << endl;
    cout << "3. Try to remember how you got here.\n" << endl;

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\n*You look around the room. It's got wooden walls and furniture, it's old and dusty. The only source of light is a small window high up on one wall.*\n" << endl;
            break;
        case 2:
            cout << "\n*You yell and hope for a response... nothing...*\n" << endl;
            break;
        case 3:
            cout << "\n*You try to remember how you got here, but thinking in silence leads nowhere...*\n" << endl;
            break;
        default:
            cout << "\n*Invalid choice.* \n" << endl;
            break;
    }

    return 0;
}