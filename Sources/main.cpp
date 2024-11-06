#include <bits/stdc++.h>
#include <stdexcept>
#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;

int main() {

    // Declaração de domínios:

    Avaliacao avaliacao;

    Codigo codigo;
    Codigo *codigo_ptr;

    Data data;

    Dinheiro dinheiro;

    Duracao duracao;

    Horario horario;
    Horario *horario_ptr;

    Nome nome;
    Nome *nome_ptr;

    Senha senha;
    Senha *senha_ptr;


    // Declaração de entidades:

    Viagem viagem;

    Destino destino;

    Conta conta;
  
    Hospedagem hospedagem;


    // Testes:

    // Teste de classe de horario, usado durante desenvolvimento do codigo (sera removido na entrega final):
    cout << "Defina o horario: "  << endl;

    string horario_temp;
    cin >> horario_temp;

    if (horario.setHorario(horario_temp))
        cout << "Horario definido com sucesso: " << horario.getHorario() << endl;
    else
        cout << "Horario invalido. Por favor, digite o horario em formato HH:mm, entre 00:00 a 23:59." << endl;


    // Teste feito conforme o roteiro do projeto:
    if (horario.setHorario("23:59"))
        cout << "Horario = " << horario.getHorario() << endl;
    else
        cout << "Horario invalido" << endl;

    if (horario.setHorario("-1:59"))
        cout << "Horario = " << horario.getHorario() << endl;
    else
        cout << "Horario invalido" << endl;


    // Teste usando ponteiros, feito conforme o roteiro do projeto:

    horario_ptr = new Horario();

    if (horario_ptr->setHorario("00:00"))
        cout << "Horario = " << horario_ptr->getHorario() << endl;
    else
        cout << "Horario invalido" << endl;

    if (horario_ptr->setHorario("24:00"))
        cout << "Horario = " << horario_ptr->getHorario() << endl;
    else
        cout << "Horario invalido" << endl;

    delete horario_ptr;


    // Teste de classe de nome, usado durante desenvolvimento do codigo (sera removido na entrega final):
    cout << "Defina o nome: "  << endl;

    string nome_temp;
    cin >> nome_temp;

    if (nome.setNome(nome_temp))
        cout << "Nome definido com sucesso: " << nome.getNome() << endl;
    else
        cout << "Nome invalido. Por favor, digite um nome com ate 30 caracteres." << endl;

    // Teste feito conforme o roteiro do projeto:
    if (nome.setNome("Pedrinho Camarada"))
        cout << "Nome = " << nome.getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    if (nome.setNome("Pedro de Alcântara João Carlos Leopoldo Salvador Bibiano Francisco Xavier de Paula Leocádio Miguel Gabriel Rafael Gonzaga"))
        cout << "Nome = " << nome.getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    // Teste usando ponteiros, feito conforme o roteiro do projeto:

    nome_ptr = new Nome();

    if (nome_ptr->setNome("Pedrinho Camarada"))
        cout << "Nome = " << nome_ptr->getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    if (nome_ptr->setNome("Pedro de Alcântara João Carlos Leopoldo Salvador Bibiano Francisco Xavier de Paula Leocádio Miguel Gabriel Rafael Gonzaga"))
        cout << "Nome = " << nome_ptr->getNome() << endl;
    else
        cout << "Nome invalido" << endl;

    delete nome_ptr;


    // Teste feito conforme o roteiro do projeto:
    if(senha.setSenha("21348"))
        cout << "Senha = " << senha.getSenha() << endl;
    else
        cout << "Senha invalido" << endl;

    if(senha.setSenha("54321"))
        cout << "Senha = " << senha.getSenha() << endl;
    else
        cout << "Senha invalido" << endl;

    // Teste usando ponteiros, feito conforme o roteiro do projeto:

    senha_ptr = new Senha();

    if(senha_ptr->setSenha("21348"))
        cout << "Senha = " << senha_ptr -> getSenha() << endl;
    else
        cout << "Senha invalida " << endl;

    if(senha_ptr->setSenha("54321"))
        cout << "Senha = " << senha_ptr->getSenha() << endl;
    else
        cout << "Senha invalida" << endl;

    delete senha_ptr;


    cout << "Defina a data: "  << endl;

    string data_temp;
    cin >> data_temp;

    if (data.setData(data_temp))
        cout << "Data definida com sucesso: " << data.getData() << endl;
    else
        cout << "Data invalida. Por favor, digite uma data em formato DD-MM-AA" << endl;


    cout << "Defina o codigo:" << endl;

    string codigo_temp;
    cin >> codigo_temp;

    // Teste feito conforme o roteiro do projeto:
    if (codigo.setCodigo(codigo_temp))
        cout << "Codigo definido com sucesso: " << codigo.getCodigo() << endl;
    else
        cout << "Codigo invalido. Por favor, digite um codigo de 6 caracteres alfanumericos." << endl;

    if (codigo.setCodigo("A1B2C3"))
        cout << "Codigo = " << codigo.getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;
    if (codigo.setCodigo("1234567"))
        cout << "Codigo = " << codigo.getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;

    // Teste usando ponteiros, feito conforme o roteiro do projeto:

    codigo_ptr = new Codigo();

    if (codigo_ptr->setCodigo("XYZ789"))
        cout << "Codigo = " << codigo_ptr->getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;

    if (codigo_ptr->setCodigo("A!B#1C"))
        cout << "Codigo = " << codigo_ptr->getCodigo() << endl;
    else
        cout << "Codigo invalido" << endl;

    delete codigo_ptr;


    if(avaliacao.setAvaliacao(1))
        cout << "Valor = " << avaliacao.getAvaliacao() << endl;
    if (avaliacao.setAvaliacao(10))
        cout << "Valor = " << avaliacao.getAvaliacao() << endl;

    // Teste de Duracao e Dinheiro conforme o roteiro

    // Entrada de uma duração específica válida
    if (duracao.setDuracao(200)) {
        cout << "Duração = " << duracao.getDuracao() << endl;
    } else {
        cout << "Duração Inválida\n";
    }


    if (dinheiro.setDinheiro(200.00))
        cout << "Valor = " << dinheiro.getDinheiro() << endl;
    else
        cout << "Valor Inválido\n";


    // Testes com entidades:

    // Viagem:

    viagem.setCodigo(codigo);
    viagem.setNome(nome);
    viagem.setAvaliacao(avaliacao);


    cout<< viagem.getCodigo().getCodigo() <<endl;
    cout<< viagem.getNome().getNome() <<endl;
    cout<< viagem.getAvaliacao().getAvaliacao() <<endl;


    // Destino:

    codigo.setCodigo("A1B2CE");
    destino.setCodigo(codigo);

    nome.setNome("Batman");
    destino.setNome(nome);

    data.setData("01-01-01");
    destino.setDataInicio(data);

    data.setData("09-09-09");
    destino.setDataTermino(data);

    avaliacao.setAvaliacao(5);
    destino.setAvaliacao(avaliacao);

    cout << destino.getCodigo().getCodigo() << endl;
    cout << destino.getNome().getNome() << endl;
    cout << destino.getDataInicio().getData() << endl;
    cout << destino.getDataTermino().getData() << endl;
    cout << destino.getAvaliacao().getAvaliacao() << endl;

    // Conta

    conta.setCodigo(codigo);
    conta.setSenha(senha);

    cout << conta.getCodigo().getCodigo() << endl;
    cout << conta.getSenha().getSenha() << endl;

    // Hospedagem:

    hospedagem.setCodigo(codigo);
    hospedagem.setNome(nome);
    hospedagem.setDinheiro(dinheiro);
    hospedagem.setAvaliacao(avaliacao);


    cout<< hospedagem.getCodigo().getCodigo() <<endl;
    cout<< hospedagem.getNome().getNome() <<endl;
    cout<< hospedagem.getDinheiro().getDinheiro() <<endl;
    cout<< hospedagem.getAvaliacao().getAvaliacao() <<endl;


    return 0;
}
