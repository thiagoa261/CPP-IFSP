#include <iostream>
#include <string>
using namespace std;

class Endereco {
    private:
        string rua;
        string cidade;
        int cep;
    
    public:
        Endereco() {
            this->rua = "";
            this->cidade = "";
            this->cep = 0;
        }
        Endereco(string rua, string cid, int cep) {
            this->rua = rua;
            this->cidade = cid;
            this->cep = cep;
        }
        string getRua() { return this->rua; }
        string getCid() { return this->cidade; }
        int getCep() { return this->cep; }
};

class Pessoa {
    private:
        string nome;
        Endereco endereco;
    
    public:
        Pessoa(string nome, Endereco end) {
            this->nome = nome;
            this->endereco = end;
        }
        Pessoa(string nome, Pessoa &obj) {
            this->nome = nome;
            this->endereco = obj.endereco;
            
        }
        void ExibePessoa() {
            cout << this->nome << endl;
            cout << this->endereco.getRua() << endl;
            cout << this->endereco.getCid() << endl;
            cout << this->endereco.getCep() << endl;
            cout << "\n";
        }
};

int main()
{
    Endereco end("Rua Exemplo", "Salvador", 123);
    
    Pessoa p1("Thiago", end);
    Pessoa p2("Ana", p1);
    Pessoa p3("Roberto", p1);
    
    
    p1.ExibePessoa();
    
    p2.ExibePessoa();
    
    p3.ExibePessoa();
    
    return 0;
}
