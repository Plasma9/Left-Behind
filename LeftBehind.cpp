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

    cout << "\n*You awake in a dark room.* \n" << endl;
    waitForEnter();

    

    return 0;
}