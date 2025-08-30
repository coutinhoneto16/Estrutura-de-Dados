#include <iostream>
#include <vector>
using namespace std;

struct Pessoa {
	string nome;
	int idade;
};

void cadastrarPessoa(vector<Pessoa>& pessoas, const string& nome, int idade){
	pessoas.push_back(Pessoa{nome, idade});
}

void mostrarPessoas(const vector<Pessoa>& pessoas){
    cout <<"\nLista de pessoas cadastradas:\n";
    for(const auto& pessoa : pessoas){
        cout << pessoa.nome << " - " << pessoa.idade << " anos\n";
    }
}

Pessoa maisVelho(const vector<Pessoa>& pessoas){
    Pessoa maisVelho = pessoas [0];
	for(const auto& pessoa : pessoas){
		if(pessoa.idade > maisVelho.idade){
			maisVelho = pessoa;
		}
	}
	return maisVelho;
}

int main(){
    vector<Pessoa> pessoas;

    cadastrarPessoa(pessoas, "Neto", 20);
    cadastrarPessoa(pessoas, "Maria", 32);
    cadastrarPessoa(pessoas, "João", 25);

    mostrarPessoas(pessoas);

    Pessoa velho = maisVelho(pessoas);
    cout << "\nPessoa mais velha: " << velho.nome 
         << " (" << velho.idade << " anos)\n";

}