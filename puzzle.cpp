#include <iostream>
#include <stdlib.h> 

int main()
{
	int enigma1;
	int enigma2;
	int enigma3;
	int tentativas = 1;

		system("clear");

		std::cout << "MATHPUZZLE"  << '\n';		
		
		std::cout << '\n';
		
		while(enigma1 != 3){

			if(tentativas < 0){
				std::cout << "GAME OVER!"  << '\n';
				return 0;
			}
	
			std::cout << "Qual o resutado?"  << '\n';
			std::cout << "3 x 5 = 6"  << '\n';
			std::cout << "2 x 7 = 5"  << '\n';
			std::cout << "5 x 7 = 8"  << '\n';
			std::cout << "12 x 12 = 9"  << '\n';
			std::cout << "5 x 6 = ? ";
			std::cin >> enigma1;
			std::cout << '\n';
		
			if(enigma1 != 3){	
				std::cout << "Resposta errada!\n"  << '\n';
				std::cout  << "Você tem " << tentativas << " Chance(s)" << '\n';
				std::cout << '\n';
				tentativas--;
			}
			else{  
				std::cout << enigma1 << " Resposta correta!" << '\n';
				std::cout << "ENIGMA DESVENDADO!"  << '\n';
				std::cout << "\nMultiplicamos os números e somamos os algarismos do resultado."  << '\n';
			}	
		
		}	
		
		std::cout << '\n';
		
		while(enigma2 !=12){

			if(tentativas < 0){
			std::cout << "GAME OVER!"  << '\n';
			return 0;
			}

			std::cout <<"Descubra o Número que falta" << '\n';
			std::cout << "3"  << '\n';
			std::cout << "7  4"  << '\n';
			std::cout << "16 9 5"  << '\n';
			std::cout << "42 26 17 ? ";
			std::cin >> enigma2;
			std::cout << '\n';

			if(enigma2 != 12){	
				std::cout << "Resposta errada!\n"  << '\n';
				std::cout  << "Você tem " << tentativas << " Chance(s)" << '\n';
				std::cout << '\n';
				tentativas--;
			}
			else{
				std::cout << enigma2 << " Resposta correta!" << '\n';
				std::cout << "ENIGMA DESVENDADO!"  << '\n';
				std::cout << "\nO número da esquerda corresponde ao número da direita somado ao número que está acima."  << '\n';
			}
		
		}
		
		std::cout << '\n';

		while(enigma3 != 96){
			
			if(tentativas < 0){
				std::cout << "GAME OVER!"  << '\n';
			return 0;
			}	
			
			std::cout << "Descubra o número que falta"  << '\n';
			std::cout << "1 + 4 = 5"  << '\n';
			std::cout << "2 + 5 = 12"  << '\n';
			std::cout << "3 + 6 = 21"  << '\n';
			std::cout << "8 + 11  = ? ";
			std::cin >> enigma3;
			std::cout << '\n';

			if(enigma3 != 96){
				std::cout << "Resposta errada!\n"  << '\n';
				std::cout  << "Você tem " << tentativas << " Chance(s)" << '\n';
				std::cout << '\n';
				tentativas--;
			}
			else{
				std::cout << enigma3 << " Resposta correta!" << '\n';
				std::cout << "ENIGMA DESVENDADO!"  << '\n';
				std::cout << "\nPrimeiro, identificamos que pelo padrão faltam algumas operações:"  << '\n';
				std::cout << "4 + 7 = ? 5 + 8 = ? 6 + 9 = ? 7 + 10 = ?"  << '\n';
				std::cout << "Depois, podemos ver que cada resultado é somado na operação que está debaixo:"  << '\n';
				std::cout << "1 + 4 = 5" << '\n';
				std::cout << "5 + 2 + 5 = 12" << '\n';
				std::cout << "12 + 3 + 6 = 21" << '\n';
				std::cout << "21 + 4 + 7 = 32" << '\n';
				std::cout << "32 + 5 + 8 = 45" << '\n';
				std::cout << "45 + 6 + 9 = 60" << '\n';
				std::cout << "60 + 7 + 10 = 77" << '\n';
				std::cout << "77 + 8 + 11 = 96" << '\n';
			}
		
		}

		std::cout << '\n';

		std::cout << "VOCÊ VENCEU!"  << '\n';

		std::cout << '\n';

		return 0;
}



