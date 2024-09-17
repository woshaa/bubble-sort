#include <iostream>
using namespace std;


int main() {
	//Declarations
	int UnsortedNumbericalNumbers[] = {2,1,5,3,4,9,10,23,10,90,46,123,53}; // Unsorted Array of numbers.
	int MaxIndexOfArray = sizeof(UnsortedNumbericalNumbers) / sizeof(int); // Gets the lenght of the array.
	

	for (int index = 0; index < MaxIndexOfArray; index++) { // Loops through the array.
		bool swapped = false;
		for (int Compare = 0; Compare < MaxIndexOfArray - 1; Compare++) // Honestly dont know what this does and only did it because my brain told me so.
		{
			if (UnsortedNumbericalNumbers[Compare] > UnsortedNumbericalNumbers[Compare + 1]) // Checks if the interger greater than the next.
			{
				// Swaps the elements
				int temporary = UnsortedNumbericalNumbers[Compare]; //Stores the interger
				UnsortedNumbericalNumbers[Compare] = UnsortedNumbericalNumbers[Compare + 1]; // Replaces the interger before it.
				UnsortedNumbericalNumbers[Compare + 1] = temporary; // Then places the stored number to the other.
				swapped = true; 
			}
		}
		if (!swapped) {
			break; // checks if the array is sorted, if no elements were swapped then the array is sorted.
		}

	}
	

	// Prints the sorted array.
	for (int i = 0; i < MaxIndexOfArray; i++)
	{
		cout << UnsortedNumbericalNumbers[i] << " ";
	}

		return 0;
}