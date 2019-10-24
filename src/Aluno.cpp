#include "Aluno.h"

Aluno::Aluno(nome, nomePai, nomeMae, dataNascimento, endereco)
{
    this.Setnome(nome);
    this.SetnomePai(nomePai);
    this.SetnomeMae(nomeMae);
    this.SetdataNascimento(dataNascimento);
    this.Setendereco(endereco);
}


Aluno::~Aluno()
{
    cout<<"Aluno Destruido";
}

