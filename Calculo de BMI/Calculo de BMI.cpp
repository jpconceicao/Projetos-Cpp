#include <iostream>

int main() {

  double height, weight, bmi;

  // Ask user for their height

  std::cout << "Type in your height (m): ";
  std::cin >> height;

  // Now ask the user for their weight and calculate BMI
  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;

  //Calculando e mostrando na tela
  bmi = weight/(height*height);
  std::cout << "Seu BMI é: " << bmi << ".\n";

  return 0;

}
