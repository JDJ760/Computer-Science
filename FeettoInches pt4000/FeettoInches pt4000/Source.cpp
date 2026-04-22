// LAB CODE: GOOD MED
// JASON JOHNSON



#pragma once
#include <iostream>


using namespace std;

class FeetInches
{
private:
    int feet;        // To hold a number of feet
    int inches;      // To hold a number of inches
    void simplify() {
        
        feet += inches;
        inches = inches % 12;

        if (inches < 0) {
            feet--;
            inches += 12;
        }
    }
        // Defined in FeetInches.cpp
public:
    // Constructor
    FeetInches() {
        inches = 0;
        feet = 0;
    }

    FeetInches(int f = 0, int i = 0);

    // Mutator functions
    void setFeet(int f)
    {
        feet = f;
    }

    void setInches(int i) {
        inches = i;
    }


    // Accessor functions
    int getFeet() const
    {
        return feet;
    }

    int getInches() const
    {
        return inches;
    }

    // Overloaded operator functions
    FeetInches operator + (const FeetInches& second)const {
        FeetInches temp;
        
        temp.feet = feet + second.feet;
        temp.inches = inches + second.inches;

        temp.simplify();

        return temp;


    }
        // Overloaded +
    FeetInches operator - (const FeetInches& second)const;
        
        // Overloaded -
    FeetInches operator ++ () {
        return ++inches;
    }
        
        // Prefix ++
    FeetInches operator ++ (int) {
        return inches++;
    
    }
        // Postfix ++
    bool operator > (const FeetInches& second) {
      
        return feet > second.feet;
    }
        
        // Overloaded >
    bool operator < (const FeetInches& second) {

        return feet < second.feet;
    }
        
        // Overloaded <
    bool operator == (const FeetInches& second) {
        return inches == second.inches;
    }
        
        
        // Overloaded ==
   
    // Friends
    friend ostream& operator << (ostream& stream, const FeetInches& first) {

        stream << "Inches: " << first.inches << endl;
        stream << "Feet: " << first.feet << endl;


    }



    friend istream& operator >> (istream& stream, FeetInches& second) {

        stream >> second.inches;
        stream >> second.feet;

    }


  

   
};





void FeetInches::simplify() {

    feet += inches;
    inches = inches % 12;

    if (inches < 0) {
        feet--;
        inches += 12;
    }
}


FeetInches::FeetInches(int f = 0, int i = 0) {
    feet = f;
    inches = i;

    simplify();

    }

    // Overloaded operator functions
    FeetInches operator + (const FeetInches& second)const {
        FeetInches temp;

        temp.feet = feet + second.feet;
        temp.inches = inches + second.inches;

        temp.simplify();

        return temp;


    }
    // Overloaded +
    FeetInches operator - (const FeetInches& second)const {

        FeetInches temp;

        temp.feet = feet - second.feet;
        temp.inches = inches - second.inches;

        temp.simplify();

        return temp;


    }

    // Overloaded -
    FeetInches operator ++ () {
        return ++inches;
    }

    // Prefix ++
    FeetInches operator ++ (int) {
        return inches++;

    }
    // Postfix ++
    bool operator > (const FeetInches& second) {

        return feet > second.feet;
    }

    // Overloaded >
    bool operator < (const FeetInches& second) {

        return feet < second.feet;
    }

    // Overloaded <
    bool operator == (const FeetInches& second) {
        return inches == second.inches;
    }


    // Overloaded ==

// Friends
    friend ostream& operator << (ostream& stream, const FeetInches& first) {

        stream << "Inches: " << first.inches << endl;
        stream << "Feet: " << first.feet << endl;


    }



    friend istream& operator >> (istream& stream, FeetInches& second) {

        stream >> second.inches;
        stream >> second.feet;

    }













// This program demonstrates the << and >> operators, 
// overloaded to work with the FeetInches class.

int main()
{
    FeetInches first, second;  // Define two objects.

    // Get a distance for the first object.
    cout << "Enter a distance in feet and inches.\n";
    cin >> first;

    // Get a distance for the second object.
    cout << "Enter another distance in feet and inches.\n";
    cin >> second;

    // Display the values in the objects.
    cout << "\nThe values you entered are:\n\n";

    cout << first << " and " << second << endl << endl;

    if (first > second)
    {
        cout << "First is longer than the second.\n\n";
    }
    else
    {
        cout << "The second is longer than the first.\n\n";
    }


    if (first < second)
    {
        cout << "The Second is longer than the second.\n\n";
    }
    else
    {
        cout << "The First is longer than the first.\n\n";
    }

    if (first == second)
    {
        cout << "Both lengths are the same\n\n";
    }
    else
    {
        cout << "length are not the same.\n\n";

    }


    cout << "Adding first to second " << first + second << endl << endl;;

    cout << "Subtracting first from second " << first - second << endl << endl;

    cout << "Incrementing first " << ++first << endl << endl;

    cout << "Incrementing second " << ++second << endl << endl;

    cout << "Incrementing first " << first++ << endl << endl;

    cout << "Incrementing second " << second++ << endl << endl;



    return 0;
}

//================ = Output ====================== =
//
//Enter a distance in feet and inches.
//Feet: 1
//Inches : 13
//Enter another distance in feet and inches.
//Feet : 1
//Inches : 14
//
//The values you entered are :
//
//2 feet, 1 inches and 2 feet, 2 inches
//
//The second is longer than the first.
//
//The Second is longer than the second.
//
//length are not the same.
//
//Adding first to second 4 feet, 3 inches
//
//Subtracting first from second 0 feet, 1 inches
//
//Incrementing first 2 feet, 2 inches
//
//Incrementing second 2 feet, 3 inches
//
//Incrementing first 2 feet, 3 inches
//
//Incrementing second 2 feet, 4 inches
//
//
//C : \Users\med\source\repos\sample\x64\Debug\sample.exe(process 32508) exited with code 0.
//To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
//Press any key to close this window . . .

