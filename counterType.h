class counterType {

private:
	int counter;

public:
	// Default constructor
	// Precondition: None
	// Postcondition: counter is initialized to zero
	counterType();
	// Constructor with client supplied value
	// Precondition: value >= 0
	// Postcondition: counter is initialized to client supplied value
	counterType(int value);
	// Increment the counter by one
	// Precondition: counter >= 0
	// Postcondition: counter is incremented by one
	void increment();
	// Decrement the counter by one
	// Precondition: counter > 0
	// Postcondition: counter is decremented by one, never goes to zero
	void decrement();
	// Reset the counter to zero
	// Precondition: None
	// Postcondition: counter is reset to zero
	void reset();
	// Set the counter to a specific value
	// Precondition: value >= 0
	// Postcondition: counter is set the specified value
	void setCounter(int value);
	// Get the counter value
	// Precondition: None
	// Postcondition: returns the value of the counter
	int getCounter() const;
};
