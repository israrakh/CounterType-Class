// CounterType - Class-Project.cpp

#include <iostream>
#include "counterType.h"

using namespace std;

// Defalut constructor
counterType::counterType() {
	counter = 0;
}

// Constructor with client supplied value
counterType::counterType(int value) {
	if (value >= 0) {
		counter = value;
	}
	else {
		counter = 0; // If a negative value provided, set the counter to 0.
	}
}

// Increment the counter by 1
void counterType::increment() {
	counter++;
}

// Decrement the counter by 1
void counterType::decrement() {
	if (counter > 0) {
		counter--;
	}
}

// Reset the counter to 0
void counterType::reset() {
	counter = 0;
}

// Set the counter to a specific value
void counterType::setCounter(int value) {
	if (value >= 0) {
		counter = value;
	}
}

// Get the counter value
int counterType::getCounter() const {
	return counter;
}