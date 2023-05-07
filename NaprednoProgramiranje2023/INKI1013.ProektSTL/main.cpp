#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Profil {
    int IDbroj;
    string Nickname;
    float nivo;

    bool operator < (const Profil& other) const {
        return Nickname < other.Nickname;
    }
};

int main() {
    vector<Profil> profili;
    profili.push_back({ 1, "Stefan", 3.5 });
    profili.push_back({ 2, "Ana", 4.2 });
    profili.push_back({ 3, "Goran", 2.7 });
    profili.push_back({ 4, "Jana", 4.8 });
    profili.push_back({ 5, "Zoran", 3.9 });


    cout << "Sodrzhina na vektorot:\n";
    for (const auto& profil : profili) {
        cout << "IDbroj: " << profil.IDbroj << ", Nickname: " << profil.Nickname << ", nivo: " << profil.nivo << endl;
    }


    sort(profili.begin(), profili.end());


    cout << "\nSortirana sodrzhina na vektorot:\n";
    for (const auto& profil : profili) {
        cout << "IDbroj: " << profil.IDbroj << ", Nickname: " << profil.Nickname << ", nivo: " << profil.nivo << endl;
    }


    ofstream out("INKI1013.Petar");
    if (out.is_open()) {
        for (const auto& profil : profili) {
            out << profil.IDbroj << "," << profil.Nickname << "," << profil.nivo << endl;
        }
        out.close();
        cout << "\nVektorot e zacuvan vo fajlot INKI1013.Petar" << endl;
    }
    else {
        cout << "\nError pri otvaranje na fajlot!" << endl;
    }

    return 0;
}

