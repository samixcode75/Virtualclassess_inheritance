#include "customlist.h"

int main() {

    CustomList<int> obj(20);
    int choice, value, r;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Element\n";
        cout << "2. Display\n";
        cout << "3. Sum of Prime\n";
        cout << "4. Second Max Even\n";
        cout << "5. Second Min Odd\n";
        cout << "6. Print Duplicates\n";
        cout << "7. Rotate Clockwise\n";
        cout << "8. Rotate AntiClockwise\n";
        cout << "9. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            obj.addElementAtLastIndex(value);
        }

        else if (choice == 2) {
            obj.display();
        }

        else if (choice == 3) {
            cout << "Sum of Prime = "
                << obj.sum_ofPrime() << endl;
        }

        else if (choice == 4) {
            cout << "Second Max Even = "
                << obj.secondMaxEven() << endl;
        }

        else if (choice == 5) {
            cout << "Second Min Odd = "
                << obj.secondMinOdd() << endl;
        }

        else if (choice == 6) {
            obj.printDuplicates();
        }

        else if (choice == 7) {
            cout << "Enter rotations: ";
            cin >> r;
            obj.rotateClockwise(r);
        }

        else if (choice == 8) {
            cout << "Enter rotations: ";
            cin >> r;
            obj.rotateAntiClockwise(r);
        }

        else if (choice == 9) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 9);

    return 0;
}