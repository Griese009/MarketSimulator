// MarketSimulator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <iomanip>



#include "Person.h"

int main()
{
    std::cout << "Hello World!\n";
    Person buyer = Person("John", "Doe", 200.50);
    Person seller = Person("Max", "Mustermann", 100);

    seller.addItem(goods("PlayStation 5", 10.0));
    seller.addItem(goods("PlayStation X", 20.0));

    std::cout << buyer.getName() << " has " << std::fixed << std::setprecision(2) << buyer.getMoney() << " EUR\n";
    
    std::cout << seller.getName() << " has: ";
    seller.printItems(false);
    std::cout << " they are worth: " << seller.getGoodsValue() << " EUR" << "\n";
    
    try
    {
        buyer.addItem(goods("Papiertuch", -5.0));
    }
    catch (const std::invalid_argument&)
    {
        std::cout << "exptected error";
    }
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
