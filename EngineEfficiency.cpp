// EngineEfficiency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Engine
{
public:

    virtual float GetEfficiency() = 0;

};
class InternalCombustineEngine :public Engine
{
public:
    float fEfficiency,fInput, fOutput;
    float GetEfficiency()
    {
        cout << "Enter Input : ";
        cin >> fInput;
        cout << "Enter Output : ";
        cin >> fOutput;
        fEfficiency = fOutput / fInput;
        cout << "Efficiency of InternalCombustineEngine is : " << fEfficiency;
        cout << endl;
        return fEfficiency;
    }
};
class ExternalCombustineEngine :public Engine
{
public:
    float fEfficiency;
    float fInput, fOutput;
    float GetEfficiency()
    {
        cout << "Enter Input : ";
        cin >> fInput;
        cout << "Enter Output : ";
        cin >> fOutput;
        fEfficiency = fOutput / fInput;
        cout << "Efficiency of ExternalCombustineEngine is : " << fEfficiency;
        cout << endl;
        return fEfficiency;
    }
};
class PetrolEngine :public Engine
{
public:
    float fEfficiency;
    float fInput, fOutput;
    float GetEfficiency()
    {
        cout << "Enter Input : ";
        cin >> fInput;
        cout << "Enter Output : ";
        cin >> fOutput;
        fEfficiency = fOutput / fInput;
        cout << "Efficiency of PetrolEngine is : " << fEfficiency;
        cout << endl;
        return fEfficiency;
    }
};
class DieselEngine :public Engine
{
public:
    float fEfficiency,fInput, fOutput;
    float GetEfficiency()
    {
        cout << "Enter Input : ";
        cin >> fInput;
        cout << "Enter Output : ";
        cin >> fOutput;
        fEfficiency = fOutput / fInput;
        cout << "Efficiency of DieselEngine is : " << fEfficiency;
        cout << endl;
        return fEfficiency;
    }
};
int main()
{

    int i;
    InternalCombustineEngine obj1;
    ExternalCombustineEngine obj2;
    PetrolEngine obj3;
    DieselEngine obj4;
    cout << "Enter 1 for InternalCombustineEngine Engine:" << endl;
    cout << "Enter 2 for ExternalCombustineEngine Engine:" << endl;
    cout << "Enter 3 for PetrolEngine Engine:" << endl;
    cout << "Enter 4 for DieselEngine Engine:" << endl;
    cin >> i;
    if (i == 1)
        obj1.GetEfficiency();
    else if (i == 2)
        obj2.GetEfficiency();
    else if (i == 3)
        obj3.GetEfficiency();
    else
        obj4.GetEfficiency();
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
