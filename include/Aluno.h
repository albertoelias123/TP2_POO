#ifndef ALUNO_H
#define ALUNO_H


class Aluno
{
    public:
        Aluno(nome, nomePai, nomeMae, dataNascimento, endereco);
        virtual ~Aluno();

        string Getnome() { return nome; }
        void Setnome(string val) { nome = val; }
        string GetnomePai() { return nomePai; }
        void SetnomePai(string val) { nomePai = val; }
        string GetnomeMae() { return nomeMae; }
        void SetnomeMae(string val) { nomeMae = val; }
        string GetdataNascimento() { return dataNascimento; }
        void SetdataNascimento(string val) { dataNascimento = val; }
        string Getendereco() { return endereco; }
        void Setendereco(string val) { endereco = val; }

    protected:

    private:
        string nome;
        string nomePai;
        string nomeMae;
        string dataNascimento;
        string endereco;
};

#endif // ALUNO_H
