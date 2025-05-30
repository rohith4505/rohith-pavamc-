#include <iostream>
#include <string> 

using namespace std;

int main()
 {
    int n;
    int rollno;
    cout << "Enter number of students and rollno: ";
    cin >> n>>rollno;

    string* names = new string[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Enter student name[" << i << "]: ";
        cin >> names[i];
    }
    int* rnum = new int[rollno];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the rollno:["<<i<<"]:";
        cin>>rnum[i];
            }

    int key;
    cout << "Enter the roll num: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (rnum[i] == key) {
            cout << "roll num " << key << " found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "roll num " << key << " not found in the list." << endl;
    }

    delete[] names; 
    return 0;
}