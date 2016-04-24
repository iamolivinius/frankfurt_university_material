#include <stdio.h>

struct addressbook_item {
    char vorname[30];
    char nachname[30];
    char telefon[30];
    char strassenname[40];
    char hausnummer[10];
    char postleitzahl[5];
    char ort[40];
};

int main() {
    struct addressbook_item adressbuch[50] = {
        {"Oliver", "Hoffmann", "+49123456789", "Schwalbacher Strasse", "19", "60326", "Frankfurt"},
        {"Anselm", "Buder", "+49123456789", "Werftstrasse", "19", "60327", "Gutleut"}
    };

    return 0;
}
