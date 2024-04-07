// Jemin Song
// CPSC 121L-02
// 4/06/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 9-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

#include "foodpantry.h"
#include "volunteer.h"

std::shared_ptr<FoodPantry> CreatePantry(const std::string &pantry_name) {
  return std::make_shared<FoodPantry>(pantry_name);
}

int main() {
  Volunteer jc("JC");
  Volunteer paul("Paul");
  std::shared_ptr<FoodPantry> tuffys_pantry = CreatePantry("Tuffy's Pantry");
  std::cout << tuffys_pantry.use_count() << std::endl;
  jc.AssignToPantry(tuffys_pantry);
  paul.AssignToPantry(tuffys_pantry);
  std::cout << tuffys_pantry.use_count() << std::endl;

  jc.AssignedPantry()->Donate("Mango", 5);
  paul.AssignedPantry()->Donate("Mango", 20);

  tuffys_pantry->DisplayPantryItems();

  std::shared_ptr<FoodPantry> csuf_pantry = CreatePantry("CSUF Pantry");
  jc.AssignToPantry(csuf_pantry);
  paul.AssignToPantry(csuf_pantry);

  std::cout << tuffys_pantry.use_count() << std::endl;

  tuffys_pantry = nullptr;
  std::cout << tuffys_pantry.use_count() << std::endl;

  std::cout << "TUFFY121L" << std::endl;
}
