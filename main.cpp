#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <windows.h>


void menu();
void contrasena();
void cambiarContrasena();

using namespace std;


class one{
public:
	virtual void get() = 0;
	virtual void mostrar() = 0;
};


class infoDeCita:public one{
public:
	char nombre[50], esp[50];
	int num, edad;
	void get(){
		system("cls");
		cin.sync();
		cout<<"\n Ingrese el nombre del paciente: ";
		cin.getline(nombre, 50);
		cout<<"\n ingrese la especialidad: ";
		cin.getline(esp, 50);
		cout<<"\n ingrese la edad: ";
		cin>>edad;
		cout<<"\n ingrese el numero de cita: ";
		cin>>num;		
	}
	
	void mostrar(){
		cout<<"\nNombre: "<<nombre;
		cout<<"\nEspecialidad: "<<esp;
		cout<<"\nEdad: "<<edad;
		cout<<"\nNumero de cita: "<<num;

	}
};


class citaMedico:public infoDeCita{
	
public:
	infoDeCita a1;
	
	void get(){
		system("cls");
		ofstream out("medico1.txt", ios:: app|ios::binary);
		a1.get();
		out.write((char*)&a1,sizeof(infoDeCita));
		out.close();
		cout<<"se registro la cita con el medico1";
		getch();
		menu();
	}
		
	void mostrar(){
		ifstream in("medico1.txt");
		if(in.peek()==EOF){
			cout<<"\nel medico1 no tiene citas";
			cout<<"\n\n\t\t presione una tecla para continuar";
			getch();
			menu();
		}
		else{
			while(!in.eof()){
				in.read((char*)&a1,sizeof(a1));
				a1.mostrar();
			}
			in.close();
			getch();
			menu();
		}
	}
};

class medico:public one{
public:
	char all[999];
	char nombre[50];
	char edad[20];
	char dni[10];
	char especialidad[100];
	char dir[100];
	char tel[20];
	char email[50];
	char ciudad[20];
	char codigom[300];
	char contraseniam[20];
	char turno[10];
	
	void get(){
		ofstream out("medico.txt",ios::app);{
			system("cls");
			cin.sync();
			cout<<"\n Nombre: ";
			cin.getline(nombre,50);
			cout<<"\n Edad: ";
			cin.getline(edad,50);
			cout<<"\n DNI: ";
			cin.getline(dni,50);
			cout<<"\n Especialidad: ";
			cin.getline(especialidad,50);
			cout<<"\n Direccion: ";
			cin.getline(dir,50);
			cout<<"\n Telefono: ";
			cin.getline(tel,50);
			cout<<"\n E-Mail: ";
			cin.getline(email,50);
			cout<<"\n Ciudad: ";
			cin.getline(ciudad,50);
			cout<<"\n Codigo del medico: ";
			cin.getline(codigom,50);
			cout<<"\n Contrasenia: ";
			cin.getline(contraseniam,50);
			cout<<"\n Turno(M/T): ";
			cin.getline(turno,50);
		}
		out<<"\nCodigo: "<<codigom<<"\nNombre: "<<nombre<<"\nEspecialidad: "<<especialidad;
		out.close();
		cout<<"\n\nse guardo la informacion del medico, \n\t\t\tpresiona una tecla para continuar ";
		getch();
		menu();
	}
		void mostrar(){
			ifstream in("medico.txt");
			if(!in){
				cout<<"error al abrir el archivo";
			}
			while(!(in.eof())){
				in.getline(all,999);
				cout<<all<<endl;
			}
			in.close();
			cout<<"\n\n\t\t\t presione una tecla para continuar";
			getch();
			menu();
		}
};

class paciente:public one{
public:
	char all[999];
	char nombre[50];
	char edad[20];
	char dni[8];
	char dir[100];
	char tel[20];
	char email[50];
	char ciudad[20];
	char codigop[300];
	char contraseniap[20];
	
	void get(){
		ofstream out("paciente.txt",ios::app);{
			system("cls");
			cin.sync();
			cout<<"\n Nombre: ";
			cin.getline(nombre,50);
			cout<<"\n Edad: ";
			cin.getline(edad,50);
			cout<<"\n DNI: ";
			cin.getline(dni,50);
			cout<<"\n Direccion: ";
			cin.getline(dir,50);
			cout<<"\n Telefono: ";
			cin.getline(tel,50);
			cout<<"\n E-Mail: ";
			cin.getline(email,50);
			cout<<"\n Ciudad: ";
			cin.getline(ciudad,50);
			cout<<"\n Codigo del paciente: ";
			cin.getline(codigop,50);
			cout<<"\n Contrasenia: ";
			cin.getline(contraseniap,50);
		}
		
		out<<"\nNombre del paciente: "<<nombre;
		out<<"\nEdad del paciente: "<<edad;
		out.close();
		cout<<"\n\ntu informacion fue salvada: \n\t\t\tpresiona cualquiera para continuar ";
		getch();
		menu();
	}
		void mostrar(){
			ifstream in("paciente.txt");
			if(!in){
				cout<<"error al abrir el archivo";
			}
			while(!(in.eof())){
				in.getline(all,999);
				cout<<all<<endl;
			}
			in.close();
			cout<<"\n\n\t\t\t presione una tecla para continuar";
			getch();
			menu();
		}
};

class administrador:public one{
public:
	char all[999];
	char nombre[50];
	char edad[20];
	char dni[8];
	char dir[100];
	char tel[20];
	char email[50];
	char ciudad[20];
	char codigoa[300];
	char contraseniaa[20];
	
	void get(){
		ofstream out("administrador.txt",ios::app);{
			system("cls");
			cin.sync();
			cout<<"\n Nombre: ";
			cin.getline(nombre,50);
			cout<<"\n Edad: ";
			cin.getline(edad,50);
			cout<<"\n DNI: ";
			cin.getline(dni,50);
			cout<<"\n Direccion: ";
			cin.getline(dir,50);
			cout<<"\n Telefono: ";
			cin.getline(tel,50);
			cout<<"\n E-Mail: ";
			cin.getline(email,50);
			cout<<"\n Ciudad: ";
			cin.getline(ciudad,50);
			cout<<"\n Codigo del administrador: ";
			cin.getline(codigoa,50);
			cout<<"\n Contrasenia: ";
			cin.getline(contraseniaa,50);
		}
		
		out<<"\nNombre del paciente: "<<nombre<<"\nEdad del paciente: "<<edad;
		out.close();
		cout<<"\n\n se guardo la informacion del paciente, \n\t\t\tpresiona cualquiera para continuar ";
		getch();
		menu();
	}
	void mostrar(){
		ifstream in("administrador.txt");
		if(!in){
			cout<<"error al abrir el archivo";
		}
		while(!(in.eof())){
			in.getline(all,999);
			cout<<all<<endl;
		}
		in.close();
		cout<<"\n\n\t\t\t una tecla para continuar";
		getch();
		menu();
	}
};

void reservarCita(){
	system("cls");
	string cod;
	medico temp1;
	one *ptr;
	cout<<"Ingrese el codigo del medico: ";
	cin>>cod;

	if(cod==temp1.codigom){
		ptr=&temp1;
		ptr->get();
	}
	else{
		cout<<"el codigo ingresado no corresponde a ningun medico";
	}
}

void mostrarCita(){
	system("cls");
	string cod;
	medico temp1;
	one *ptr;
	cout<<"Ingrese el codigo del medico: ";
	cin>>cod;
		
	if(cod==temp1.codigom){
		ptr=&temp1;
		ptr->mostrar();
	}
	else{
		cout<<"el codigo ingresado no corresponde a ningun medico";
	}
}
	

void menu(){
	int opcion;
	system("cls");
	cout<<"\n";
	cout<<"\n";
	cout<<"\t\t M E N U \n";
	cout<<"\n1. para sacar citas con doctor\n";
	cout<<"\n2. para agregar a un doctor\n";
	cout<<"\n3. para agregar a un paciente\n";
	cout<<"\n4. para agregar a un administrador\n";
	cout<<"\n5. para ver informacion de citas por medico\n";/*Usar base de datos*/
	cout<<"\n6. para ver menu de informacion de medicos disponibles\n"; /*Usar base de datos*/
	cout<<"\n7. para cambiar password o crearlo\n";
	cout<<"\n8. para salir\n";
	cout<<"\ningrese su opcion: ";
	cin>>opcion;
	one *ptr;
	medico a2;
	paciente p1;
	administrador ad1;

	if(opcion==1){
		reservarCita();
	}
	else if(opcion==2){
		ptr=&a2;
		ptr->get();
	}
	else if(opcion==3){
		ptr=&p1;
		ptr->get();
	}
	else if(opcion==4){
		ptr=&ad1;
		ptr->get();
	}
	else if(opcion==5){
		mostrarCita();
	}
	else if(opcion==6){
		ptr=&a2;
		ptr->mostrar();
	}
	else if(opcion==7){
		cambiarContrasena();
	}
	else if(opcion==8){
		cout<<"exit"<<endl;
	}

	else{
		cout<<"opcion no valida";
	}
	
}

void contrasena(){
	system("cls");
	char p1[50],p2[50];
	
	ifstream in("password.txt");{
		cin.sync();
		cout<<"\n ingrese la contrasena: ";
		cin.getline(p1,50);
		in.getline(p2,50);
		if(strcmp(p2,p1)==0){
			menu();
		}
		else{
			cout<<"\n password incorrecto intente de nuevo";
			Sleep(999);
			contrasena();
		}
	}
	in.close();
}

void cambiarContrasena(){
		
	char n[50];
		
	system("cls");
	ofstream out("password.txt");{
		cin.sync();
		cout<<"\n ingrese la nueva contrasena: ";
		cin.getline(n,50);
		out<<n;
	}
	out.close();
	cout<<"\n tu clave ha sido guardada";
	getch();
	menu();
}
	
int main(){
	contrasena();
	system("pause");
}





















