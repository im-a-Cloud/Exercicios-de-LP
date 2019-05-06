#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <cstring>

using namespace std;

class aluno
{
  private:
    int matricula;
    char sexo;
    string curso;
    string nivel;
    string nome;

  public:

    int get_matricula();
    char get_sexo();
    string get_curso();
    string get_nivel();
    string get_nome();

    void set_matricula(int mat);
    void set_sexo(char sex);
    void set_curso(string cur);
    void set_nivel(string niv);
    void set_nome(string nom);

    aluno(int mat, char sex, string cur, string niv, string nom);
    ~aluno();
	
};
#endif