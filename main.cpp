#include "funcs.cpp"

int main(){

    CACETINHO
    LIMPAR

    cout << "Bem vindo! Digite o seu nome: ";
    cin >> NomeDoEmpresario;

    LIMPAR

    cout << NomeDoEmpresario << "! vamos criar sua primeira empresa! " << endl;
    cout << "Digite o nome da empresa: ";

    cin >> op;
    criarEmpresa(op);

    criarEmpresa("Luiz3");
    criarEmpresa("BigodinhosRaspados Company");
    criarEmpresa("MessiDonald");

    while(op != "SAIR"){
        menu();
    }

    return 0;

}