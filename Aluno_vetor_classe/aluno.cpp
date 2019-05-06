#include <iostream>
#include <string>
#include "aluno.h"

using namespace std;

aluno::aluno(int mat, char sex,string cur, string niv, string nom)
{
  matricula = mat;
  sexo = sex;
  curso = cur;
  nivel = niv;
  nome = nom;
}

int aluno::get_matricula()
{
	return matricula;
}
void aluno::set_matricula(int mat)
{
	matricula = mat;
}
char aluno::get_sexo()
{
  return sexo;
}
void aluno::set_sexo(char sex)
{
  sexo = sex;
}
string aluno::get_curso()
{
  return curso;
}
void aluno::set_curso(string cur)
{
  curso = cur;
}
string aluno::get_nivel()
{
  return nivel;
}
void aluno::set_nivel(string niv)
{
  nivel = niv;
}
string aluno::get_nome()
{
  return nome;
}
void aluno::set_nome(string nom)
{
  nome = nom;
}
aluno::~aluno(){}