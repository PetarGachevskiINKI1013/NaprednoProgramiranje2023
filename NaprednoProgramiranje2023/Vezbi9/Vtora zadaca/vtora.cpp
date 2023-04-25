#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file;
    string recenica;
    cout << "Vneseteja vasata recenica:";
    getline(cin, recenica);
    file.open("text.txt", ios::app);
    if (file)
    {
        cout << "Fajlot veke e prisuten, se zapisuva recenicata sto ja zadadovte" << endl;
        file << recenica << endl;
        file.close();
    }
    else
    {
        file.open("text.txt", ios::out);
        cout << "Fajlot ne e prisuten, se kreira nov" << endl;
        file << recenica << endl;
        file.close();
    }   
    return 0;
}

