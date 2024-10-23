#include "counterType.h"
#include <iostream>

using namespace std;

int main() {
	// Defalut constructor
	counterType countr1;
	cout << "Counter value with default constructor: " << countr1.getCounter() << endl;

	// Constructor with client supplied value
	counterType countr2(10);
	cout << "Counter value with client supplied constructor: " << countr2.getCounter() << endl;

	// Increment
	countr2.increment();
	cout << "Counter value after increment: " << countr2.getCounter() << endl;

	// Decrement 
	countr2.decrement();
	cout << "Counter value after decrement: " << countr2.getCounter() << endl;

	// Reset
	countr2.reset();
	cout << "Counter value after reset: " << countr2.getCounter() << endl;
	
	// Test decrement after reset (it should still remain 0)
	countr2.decrement();
	cout << "Counter value after decrement & post reset: " << countr2.getCounter() << endl;

	// Set counter to 100 using setCounter
	countr2.setCounter(100);
	cout << "Counter value after setting it to new value: " << countr2.getCounter() << endl;
	
	return 0;
}