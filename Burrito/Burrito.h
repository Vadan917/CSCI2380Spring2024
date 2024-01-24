#include "string"

using namespace std;

class Burrito
{
public:

	// Constructor. 
	// Creates a burrito with the specified ingredients.
	Burrito(string m, bool cheese);

	// Constructor. 
	// Creates a burrito with no (Nada) meat and no cheese.
	Burrito();

	// Changes the burrito's meat to the parameter meat.
	void change_meat(string m);

	// Adds/removes cheese to/from the burrito.
	void add_cheese();
	void remove_cheese();

	// Returns the burrito's current meat/cheese
	string meat();
	bool cheese();

	// Computes the price.
	// A burrito with no meat/cheese costs $2.
	// Cheese is $1 extra.
	// Meat costs $2, and Asada is $1 extra. 
	int price();

private:
	string meatType; // meatType could be any of these: Pollo, Asada, AlPastor, Nada, etc
	bool hasCheese;
};