/*
Programa em linguagem C++ que solicita as notas das 3 unidades de usuario e informa o total e a media,
alem de dizer se sera reprovado (<12pontos), fara prova final (>=12 e <21) ou esta aprovado (>12pontos)
*/

//Adiciona a biblioteca <iostream>
#include<iostream>

//para poder usar palavras reservadas da biblioteca
using namespace std;

//inicia classe principal
int main()
{
	//declara as vari�veis
	float n1, n2, n3, media, total;
	//solicita do usu�rio as notas das unidades

	cout<< "\nInforme a nota da primeira unidade: ";
	cin>> n1;
	cout<< "\nInforme a nota da segunda unidade: ";
	cin>> n2;
	cout<< "\nInforme a nota da terceira unidade: ";
	cin>> n3;

	//atribui os valores as variaveis
	total = n1+n2+n3;
	media = total/3;

	//Informa a situa��o academica do aluno
	if(total<12){
		cout<< "\nAluno esta reprovado";
	}
	else{
		if(total>=21){
			cout<< "\nAluno ja esta aprovado, n�o precisa fazer prova final";
		}
		else{
			cout<< "\nAluno precisa fazer prova final";
		}
	}
cout<< "\n\n";
return 0;
}
