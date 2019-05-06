#include <iostream>
#include <vector>
#include "aluno.h"

using namespace std;

int main()
{
  vector<aluno> alunos;
	aluno a = aluno(1234, 'M', "TI", "Graduação", "Anderson");
  aluno b = aluno(1234, 'M', "TI", "Graduação", "Alvaro");
  aluno c = aluno(1234, 'M', "TI", "Graduação", "Rayan");
  aluno d = aluno(1234, 'M', "TI", "Graduação", "Shirley");
  aluno e = aluno(1234, 'M', "TI", "Graduação", "Daniel");
  alunos.push_back(a);
  alunos.push_back(b);
  alunos.push_back(c);
  alunos.push_back(d);
  alunos.push_back(e);
  for(int i = 0; i <= 4; i++)
  {
    auto om = alunos[i];
    cout << "Matricula: " << om.get_matricula() << endl;
    cout << "Sexo: " << om.get_sexo() << endl;
    cout << "Curso: " << om.get_curso() << endl;
    cout << "Nível: " << om.get_nivel() << endl;
    cout << "Nome: " << om.get_nome() << endl;
  }
	return 0;
}