#include <iostream>

int main()
{
  int ammo{ 10 };

  // Define a lambda and store it in a variable called "shoot".
  auto shoot{
    // [ammo]() {
    // Illegal, ammo was captured as a const copy. as it treats copy as const
	
	// Added mutable after the parameter list.
    [ammo]() mutable {
      // We're allowed to modify ammo now
      --ammo;

      std::cout << "Pew! " << ammo << " shot(s) left.\n";
    }
  };

  // Call the lambda
  shoot();

  std::cout << ammo << " shot(s) left\n"; // Note this is still preserved

  return 0;
}