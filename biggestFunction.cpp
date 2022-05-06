// biggestFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float biggest(float priceArray[], int arraySize);



int main()
{
    float price[] = { 2.5, 1.2, 4.3, 5.1 };
    cout << "The biggest in the array is: "<< biggest(price, 4)<< endl;
}

float biggest(float priceArray[], int arraySize) {
    int i;
    float big = 0;
    for (i = 0; i < arraySize; i++) {
        cout << "Price of product " << i << " is " << priceArray[i] << endl;
    }
    for (i = 0; i < arraySize; i++) {
        if (priceArray[i] > big) {
            big = priceArray[i];
        }
    }

    return big;
}
