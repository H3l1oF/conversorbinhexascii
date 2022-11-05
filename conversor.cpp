// Conversor de string 

#include <iostream>
#include <bitset>

using namespace std;

// Conversor de Binário
void binario(string a) {
	cout << endl;
	cout << "Bin:\n";
    for (int i = 0; i < a.length(); ++i) { 
        bitset<8> bs4(a[i]);
        cout << bs4 << " ";
        if (i % 6 == 0 && i != 0)
            cout << endl;
    }
    cout << endl;
};

// Conversor ASCII
void ascii(string a) {

	cout << "\nAscii(Decimal):\n";
	for (char c : a) // esta condição corre todas as letras de uma string numa variavel char ate atingir a ultima.
		cout << int(c) << " "; // aqui com o int(c) cada caracter da string passa a numero inteiro.
 	cout << endl;
};

// Conversor Hex
void hex(string a) {
    cout << "\nHex:\n";
    for (char c : a) 
        cout << hex << int(c) << dec << " "; // mostra com o hex o numero e o dec volta tudo ao normal.
    cout << endl;
};

int main()
{
	string t="s";
	while (t=="s" || t=="S")
	{

		cout << "\033[2J\033[1;1H"; // faz o clear na tela para apagar todo o texto
		cout << "\n	Conversor de Texto\n";
		cout << "\nInsira o texto que deseja converter:\n";
		getline(cin, t);  // usei o getline porque nao me considerava a tecla "espaço" com o cin >>
 
    	while (t.length() == 0)  // se o utilizador nao digitar nada.
    	{
        	cin.clear();
        	cout << "\033[2J\033[1;1H";
        	cout << "\nNao inseriu qualquer texto! tente de novo.\n";
        	cout << "\nInsira o texto que deseja converter:\n";
        	getline(cin, t);
    	}
 	
    ascii(t);
	binario(t);
	hex(t);

	cout << endl;
	cout << "Deseja continuar a converter (prima S):\n";
	cin >> t;
	cin.ignore(); // sem este ignore no loop ao responder que sim nao parava no primeiro getline
	} 
	
	cout << "\nBye, Have a great time!\n";

}