#include<iostream>
#include<stdlib.h>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **pm_notas;
};

int main(){
int cantidad_estudiante=0,cantidad_notas=0;
float promedio=0,sumatoria_notas=0;
Estudiante estudiante;

cout<<"Numero de estudiantes a ingresar: ";
cin>>cantidad_estudiante;	
cout<<"Numero de notas a ingresar: ";
cin>>cantidad_notas;	
	estudiante.pm_notas = new  int *[cantidad_estudiante];
	estudiante.codigo = new int[cantidad_estudiante];
	estudiante.nombre = new string[cantidad_estudiante];
		//este for es para ingresar estudiantes
		
		for (int i=0; i<cantidad_estudiante;i++){
		estudiante.pm_notas[i] = new int[cantidad_notas]; 	
		}

	cout<<"--------------ingreso de notas--------------"<<endl;
	string nombre;

	for (int i=0;i<cantidad_estudiante;i++){
		cout<<"Codigo: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre:";
		getline(cin,estudiante.nombre[i]);
			//ingreso de notas 
			for (int ii=0;ii<cantidad_notas;ii++){
			cout<<"Ingrese Nota "<<ii + 1<<": ";
			cin>>*(*(estudiante.pm_notas+i)+ii);
			}
	cout<<"------------------------------------"<<endl;
	}
system("cls");
	cout<<"--------------Mostrar Notas--------------"<<endl;
	// aca se despliega codigos y nombres de estudiantes
	for (int i=0;i<cantidad_estudiante;i++){
		cout<<"Codigo: "<<estudiante.codigo[i]<<".\tEstudiante:"<<estudiante.nombre[i]<<"."<<endl;
		//en este for se despliegan las notas de los estudiantes
		for (int ii=0;ii<cantidad_notas;ii++){
			cout<<"Nota ["<<ii + 1 <<"]: "<<*(*(estudiante.pm_notas+i)+ii);
		
				
			cout<<endl;
			
		}
		
		cout<<"------------------------------------"<<endl;
	}
		// este for es para liberar espacio recervado en la memoria 
		for (int i=0;i<cantidad_estudiante;i++){
		delete [] estudiante.pm_notas[i];
		}

	delete [] estudiante.pm_notas;
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;

	system("PAUSE");
	return 0;
	
}





