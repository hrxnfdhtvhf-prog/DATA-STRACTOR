#include "Construct.h"

int main()
{
    Construct manager;
    int choice, value, pos;

    while (true)
    {
        cout << "\n--- Array Manager ---\n";
        cout << "1. Insert at end\n";
        cout << "2. Insert at position\n";
        cout << "3. Remove from end\n";
        cout << "4. Remove at position\n";
        cout << "5. Search element\n";
        cout << "6. Edit element\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            manager.insertEnd(value);
            break;

        case 2:
            cout << "Enter position and value: ";
            cin >> pos >> value;
            manager.insertAt(pos, value);
            break;

        case 3:
            manager.removeEnd();
            break;

        case 4:
            cout << "Enter position: ";
            cin >> pos;
            manager.removeAt(pos);
            break;

        case 5:
            cout << "Enter value to search: ";
            cin >> value;
            manager.search(value);
            break;

        case 6:
            cout << "Enter position and new value: ";
            cin >> pos >> value;
            manager.edit(pos, value);
            break;

        case 7:
            return 0;

        default:
            cout << "❌ Invalid choice!\n";
        }
    }
}
