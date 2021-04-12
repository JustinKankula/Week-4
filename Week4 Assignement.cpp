// Week4 Assignement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    //Display
    cout << "************************************************************" << endl;
    cout << "************ Welcome to my Letter Count Program ************" << endl;
    cout << "************************************************************" << endl;
    cout << endl;

    //File Variables
    fstream Filename;

    //Errors
    const string ERROR_SPECIFY_FILE = "Please Specify A File to Analyze";
    const string ERROR_OPENING_FILE = "Error Opening File ";


    //Arg Check
    if (argc < 2)
    {
        cout << ERROR_SPECIFY_FILE << endl;
        return 1;
    }

    //Opening the File
    Filename.open(argv[1]);
    if (!Filename)
    {
        cout << ERROR_OPENING_FILE << argv[1] << endl;
        return 1;
    }

    //Satus Print
    cout << "Analyzing file " << argv[1] << "..." << endl;
    cout << endl;

    // Totel Vowel Count Variables
    int A_Count = 0;
    int E_Count = 0;
    int I_Count = 0;
    int O_Count = 0;
    int U_Count = 0;
    int B_Count = 0;
    int C_Count = 0;
    int D_Count = 0;
    int Vowel_Total = 0;

    

    //EOF second Check
    char c;

    

    //Reading the File
    while (!Filename.eof() && Filename >> c)
    {
        c = toupper(c);
        switch (c)
        {
        case 'A':
            A_Count++;
            break;
        case 'E':
            E_Count++;
            break;
        case 'I':
            I_Count++;
            break;
        case 'O':
            O_Count++;
            break;
        case 'U':
            U_Count++;
            break;
        case 'B':
            U_Count++;
            break;
        case 'C':
            U_Count++;
            break;
        case 'D':
            U_Count++;
            break;
        }
    }

    //Vowel Totel
    Vowel_Total = A_Count + E_Count + I_Count + O_Count + U_Count;

    //Results
    cout << left << setw(60) << setfill('.') << "The number of A's: " << A_Count << endl;
    cout << left << setw(60) << setfill('.') << "The number of E's: " << E_Count << endl;
    cout << left << setw(60) << setfill('.') << "The number of I's: " << I_Count << endl;
    cout << left << setw(60) << setfill('.') << "The number of O's: " << O_Count << endl;
    cout << left << setw(60) << setfill('.') << "The number of U's: " << U_Count << endl;
    cout << left << setw(60) << setfill('.') << "The number of B's: " << B_Count << endl;
    cout << left << setw(60) << setfill('.') << "The number of C's: " << C_Count << endl;
    cout << left << setw(60) << setfill('.') << "The number of D's: " << D_Count << endl;
    cout << left << setw(60) << setfill('.') << "The vowel count is: " << Vowel_Total << endl;

    //Closing the File
    Filename.close();

    //Pausing
    system("pause");
    return 0;
    
}

