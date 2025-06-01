#include <iostream>
#include <fstream>
#include <cstdio>  // For remove()
using namespace std;

int main() 
{
    string taskid, taskname;
    int choice;

    cout << "Enter the task ID: ";
    cin >> taskid;
    cout << "Enter the task name: ";
    cin >> taskname;

    cout << "Choose an option:\n";
    cout << "1 - Create a file and insert your information\n";
    cout << "2 - Update the file (append information)\n";
    cout << "3 - Delete the file\n";
    cout << "Enter your choice: ";
    cin >> choice;

    string filename = "C:\\Users\\Admin\\Documents\\website\\file.txt";

    switch (choice)
    {
        case 1: {
            ofstream MyFile(filename); // overwrite or create new file
            if (MyFile.is_open()) {
                MyFile << "Task ID: " << taskid << "\n";
                MyFile << "Task Name: " << taskname << "\n";
                cout << "Task written to file successfully.\n";
                MyFile.close();
            } else {
                cout << "Error opening file.\n";
            }
            break;
        }

        case 2: {
            string add;
            cout << "Enter the information you want to add: ";
            cin.ignore(); // Flush newline character
            getline(cin, add); // Use getline to allow spaces
            ofstream MyFile(filename, ios::app); // open in append mode
            if (MyFile.is_open()) {
                MyFile << add << "\n";
                cout << "Information appended to file successfully.\n";
                MyFile.close();
            } else {
                cout << "Error opening file.\n";
            }
            break;
        }

        case 3: {
            if (remove(filename.c_str()) == 0)
                cout << "File deleted successfully.\n";
            else
                cout << "Error deleting the file.\n";
            break;
        }

        default:
            cout << "Invalid choice.\n";
            break;
    }

    return 0;
}
