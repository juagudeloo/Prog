#include <iostream>
#include <string>
#include <vector>
#include <fstream>

struct Estudiante{
  std::string name, id;
  std::vector<double> notas;
};

void setup_notas (Estudiante & e, int NNOTAS);
void print_course(std::vector <Estudiante> & curso); 

const int N_EST = 1;
const int N_NOTAS = 4;

int main (void)
{
  std::vector <Estudiante> curso1(N_EST);
  for( auto & est: curso1){
    setup_notas (est, N_NOTAS);
  }

  curso1[0].name = "Est 1";
  curso1[0].id = "ID 1";
  curso1[0].notas[0] = 4.5;
  curso1[0].notas[1] = 3.5;
  curso1[0].notas[2] = 4.8;
  curso1[0].notas[3] = 4.2;
}

void setup_notas (Estudiante & e, int NNOTAS)
{ 
  e.notas.resize(NNOTAS); 
}

void print_course(std::vector<Estudiante> & curso)
{
  std::ofstream fout("curso.txt");
  fout << curso.size() << "\n";
  fout << curso[0].notas.size() << "\n";
  for(const auto & est : curso){
    fout << est.name << "\n";
    fout << est.name << "\n";
    for(const auto & grade : est.notas){
      fout << grade << "\t";
    }
    fout << "\n";
  } 
  fout.close();
}
