#include <iostream>
#include <math.h>

using namespace std;

void setNutrilevel(int Nutrilevel[], int numFood)
{
    for (int i=0; i<numFood; i++)
    {
        cin >> Nutrilevel[i];
    }
}

void calculatorNumMeal(int Nutrilevel[], int numFood)
{
    int numMeal= 0;

    for (int i=0; i<numFood; i++)
    {   
        for (int j=i+1; j<numFood; j++)
        {
            int SumNutrilevel= 0;
            
            SumNutrilevel= Nutrilevel[i] + Nutrilevel[j];
            
            for (int k=2; k<=(SumNutrilevel / 2); k=k*2)
            {
                if (SumNutrilevel == k)
                
                numMeal++;
            }
        }
    }

     cout << numMeal << endl;
}

int main () 
{
    int numDay;

    cin >> numDay;

    int numFood1;

    cin >> numFood1;

    int Nutrilevel1[numFood1];

    setNutrilevel(Nutrilevel1, numFood1);

    // int numFood2;

    // cin >> numFood2;

    // int Nutrilevel2[numFood2];

    // setNutrilevel(Nutrilevel2, numFood2);

    calculatorNumMeal(Nutrilevel1, numFood1);

    // calculatorNumMeal(Nutrilevel2, numFood2);

    return 0;
}
