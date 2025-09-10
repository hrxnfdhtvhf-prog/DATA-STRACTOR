#ifndef CONSTRUCT_H
#define CONSTRUCT_H

#include <iostream>
#include <vector>
using namespace std;

class Construct
{
private:
    vector<int> arr;

public:

    void insertEnd(int value)
    {
        arr.push_back(value);
        display();
    }


    void insertAt(int pos, int value)
    {
        if (pos < 0 || pos > arr.size())
        {
            cout << "❌ Invalid position!\n";
            return;
        }
        arr.insert(arr.begin() + pos, value);
        display();
    }


    void removeEnd()
    {
        if (arr.empty())
        {
            cout << "❌ Array is empty!\n";
            return;
        }
        arr.pop_back();
        display();
    }


    void removeAt(int pos)
    {
        if (pos < 0 || pos >= arr.size())
        {
            cout << "❌ Invalid position!\n";
            return;
        }
        arr.erase(arr.begin() + pos);
        display();
    }


    void search(int value)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == value)
            {
                cout << "✅ Element " << value << " found at index " << i << endl;
                return;
            }
        }
        cout << "❌ Element not found!\n";
    }


    void edit(int pos, int newValue)
    {
        if (pos < 0 || pos >= arr.size())
        {
            cout << "❌ Invalid position!\n";
            return;
        }
        arr[pos] = newValue;
        display();
    }


    void display()
    {
        cout << "Array: ";
        for (int val : arr)
        {
            cout << val << " ";
        }
        cout << endl;
    }
};

#endif
