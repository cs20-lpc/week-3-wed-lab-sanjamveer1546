// TO DO: Implement the driver main() function to test your code.
#include <iostream>
#include <string>
#include "LinkedList.hpp"

using namespace std;

int main() {
    try {
        cout << "===== int list tests =====\n";
        LinkedList<int> nums;

        cout << "Initially empty? " << (nums.isEmpty() ? "true" : "false") << endl;
        cout << nums;
        cout << "Length: " << nums.getLength() << "\n\n";

        nums.append(10);
        nums.append(20);
        nums.append(30);

        cout << "After append(10), append(20), append(30):\n";
        cout << nums;
        cout << "Length: " << nums.getLength() << endl;
        cout << "Element at 0: " << nums.getElement(0) << endl;
        cout << "Element at 2: " << nums.getElement(2) << "\n\n";

        nums.replace(1, 99);
        cout << "After replace(1, 99):\n";
        cout << nums;
        cout << "Element at 1: " << nums.getElement(1) << "\n\n";

        // error case: invalid getElement
        try {
            cout << "Trying getElement(10)...\n";
            cout << nums.getElement(10) << endl;
        } catch (const string& e) {
            cout << "Caught exception: " << e << endl;
        }

        // error case: invalid replace
        try {
            cout << "Trying replace(-1, 5)...\n";
            nums.replace(-1, 5);
        } catch (const string& e) {
            cout << "Caught exception: " << e << endl;
        }

        cout << "\nClearing int list...\n";
        nums.clear();
        cout << nums;
        cout << "Length: " << nums.getLength() << endl;
        cout << "Empty now? " << (nums.isEmpty() ? "true" : "false") << "\n\n";

        cout << "===== string list tests =====\n";
        LinkedList<string> words;
        words.append("apple");
        words.append("banana");
        words.append("cherry");

        cout << words;
        cout << "Length: " << words.getLength() << endl;
        cout << "Element at 1: " << words.getElement(1) << endl;

        words.replace(2, "coconut");
        cout << "After replace(2, \"coconut\"):\n";
        cout << words;

        cout << "\nAll tests completed.\n";
    }
    catch (const string& e) {
        cout << "Unhandled exception: " << e << endl;
    }

    return 0;
}
