#include<iostream>
#include<stdlib.h>

int main() {
   system("cls");
   int num = 1;
   std::cout << "digite o numero para a contagem regressiva: ";
   std::cin >> num;
   while (num >= 1)
   {
      std::cout << num << std::endl;
      num--;
   }
   std::cout << "feliz ano novo" << std::endl;

   return 0;
}