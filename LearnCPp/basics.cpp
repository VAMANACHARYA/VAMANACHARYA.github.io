#include "basics.h"

void HowCharWorks()
{
    char cChar[50];
    memset(cChar, 0, sizeof(cChar));
    cout << "Enter Name" << endl;
    cin >> cChar;
    cout << cChar << endl;

    int iIntArySize = 0;

    cout << "Enter length of array" << endl;
    cin >> iIntArySize;

    int *iDynAry = new int[iIntArySize];

    for(int i=0; i < iIntArySize; i++)
    {
        cin >> iDynAry[i];
    }
    for(int i=0; i < iIntArySize; i++)
    {
        cout << iDynAry[i] << endl;
    }
    delete [] iDynAry;

    int iSize = 0;
    cout << "Enter length of array" << endl;
    cin >> iSize;
    char **sChar = new char*[iSize];

    for(int i=0; i < iSize; i++)
    {
        int iLen = 0;
        cout << "Enter length of char" << endl;
        cin >> iLen;
        sChar[i] = new char[iLen];
        cin >> sChar[i];
    }
    for(int i=0; i < iSize; i++)
    {
        cout << sChar[i] << endl;
    }
    for(int i = 0; i < iSize; i++)
        delete sChar[i];
    if(iSize)
        delete [] sChar;
}

void HowStringVectorWorks()
{
    //vector <string> sChars;
}