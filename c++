#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void Administrador();
void Ventas(); /*prototipos*/
void Altas();
void Bajas();
void Consultas();
void MostarInventario();
void AdministradorDeCuentasDeUsuario();
void Modificaciones();
void CorteDecajaGeneral();
void RegresarAlMenuAnterior();
int total = 5;   //variable globales
int buscar(string BuscarProducto);
string id[100] ={"2","4","1","3","5"};
string producto[100]={"Leche","Pan","Agua","Huevos","Refresco"};
float pc[100]={10,10,10,10,10};
float pv[100]={10,20,10,15,11};
int existencia[100]={23,20,12,20,10};
int nr[100]={5,2,8,5,3};
int st[100]={1,1,1,1,1};
int main()
{
int opcion = 0;


    {
        cout<< "menu\n";
        cout<< "1 Administrador\n";
        cout<< "2 ventas\n";
        cout<< "3 Salir\n";
        cin>> opcion;
        switch (opcion)
        {
            case 1: Administrador();
                break;
            case 2: Ventas();
                break;
            case 3: cout<< "cerrando sistema";
                break;
            default : cout << "opcion invalida";
        }
    }while(opcion != 3);
    return 0;
 }

void Ventas(/* arguments */) {
  /* code */
}
/* Menu de administradir */
void Administrador()
{
  {
    int password;
       password = 1234;

  string username;
  username = "admin";
  string userinput;

  do
{
        cout << "Enter username:";
  	    cin >> userinput;

     if (userinput == username);
   {
  	     cout <<"\n";
    	   cout << "Enter password:";
  	     cin >> password;

    }
}
    	while (userinput == username);

       if (password == 1234)
          cout << "Accesso concedido ...";
          if (password != 1234)
              cout << "Acceso Incorrecto.....Invalid Username/Password:";

    }

    int opcion = 0; //variable local
    do
    {
        cout<< "Estas en el modulo Administrador\n";
        cout<< "1 Alta\n";
        cout << "2  Baja" << '\n';
        cout << "3  Consultas" << '\n';
        cout << "4  Modificaciones"<< '\n';
        cout << "5  Mostrar inventario" << '\n';
        cout << "6  Administrador de cuentas" << '\n';
        cout << "7  Regresar al menu principal" << '\n';
        cout << "8  Salir" << '\n';
        cin >> opcion;
        switch (opcion)
        {
                case 1: Altas();
                    break;
                case 2: Bajas();
                    break;
                case 3: Consultas();
                    break;
                case 4: Modificaciones();
                        break;
                case 5: MostarInventario();
                        break;
                case 6: AdministradorDeCuentasDeUsuario();
                        break;
                case 7: CorteDecajaGeneral();
                         break;
                case 8: RegresarAlMenuAnterior();
                        break;
                default : cout << "opcion invalida";
        }
    }while(opcion != 8);
}
void Altas(/* arguments */)
{
  string name;
      int i= total; //variable local
      while (true)
      {

          cout << "Ingrese el ID  Producto : ";
          cin>> id[i];
          if (id[i] == "*")
              break;
                    cout << "ID agregado " << id[i] << endl;

          cout << "Ingrese el Producto : ";
          cin>>producto[i];
                    cout << "Producto agregado " << producto[i]<< endl;

          cout << "Ingrese el PC: ";
          cin>>pc[i];
                    cout << "PC ingresado " << pc[i] << endl;

          cout << "Ingrese el PV : ";
          cin>>pv[i];
                    cout << "Pv ingresado " << pv[i] << endl;

          cout << "Ingrese las Existencias : ";
          cin>>existencia[i];

          cout << "Existencias ingresadas " << existencia[i] << endl;

          cout << "Ingrese el NR : ";
          cin>>nr[i];
                  cout << "NR ingresado " << nr[1] << endl;

          cout << "Ingrese el ST : ";
          cin>>st[i];
          cout << "ST ingresado " << st[i] << endl;
          i++;

      }
      total =i;
  }

void Bajas(/* arguments */) {
  /* code */
}
void Consultas(/* arguments */)
{
  int pos; //variable local
      string BuscarProducto;
      while (true) {
          int i = 0;
          cout << "Producto";
          cin>>BuscarProducto;
          if (BuscarProducto=="*")
              break;
          pos=buscar(BuscarProducto);
          if (pos==-1)
              cout << "No existe" << endl;
          else
              cout<<"Precio de compra: "<<pc[pos];

       }
}
  int buscar(string BuscarProducto) {
  int i = 0;
      while (i < total && producto[i] != BuscarProducto)
                i++;
       if(i==total)
          return -1;
       else
          return i;
}
/* Menu de Modificaciones de cuentas y productos. */
void Modificaciones(/* arguments */) {
  /* code */
}

/* Menu de constual de inventario */
void MostarInventario( )
{
         int opcion = 0; //variable local


         {
           std::cout << "Presione 1 si desea ver el menu por ID" << '\n';
         std::cout << "/Presione 2 si desea ver el menu por producto" << '\n';
         std::cin >> opcion;
        switch (opcion){
        case 1:
         int h;
         cout<<setw(10)<<"ID"<<setw(20)<<"Producto"<<setw(10)<<"PC"<<setw(10)<<"PV"<<setw(12)<<"Existencias"<<setw(10)<<"NR"<<setw(10)<<"ST"<<endl;
         for (h = 0; h < total; h++)
          if (st[h]==1)
            cout<<setw(10)<<id[h]<<setw(20)<< producto[h] <<setw(10)<<pc[h]<<setw(10)<<pv[h]<<setw(12)<<existencia[h]<<setw(10)<<nr[h]<<setw(10)<<st[h]<<endl;
             break;
        case 2:
     int j;
     cout<<setw(10)<<"Producto"<<setw(20)<<"ID"<<setw(10)<<"PC"<<setw(10)<<"PV"<<setw(12)<<"Existencias"<<setw(10)<<"NR"<<setw(10)<<"ST"<<endl;
    for (j = 0; j < total; j++)
      if (st[j]==1)
        cout<<setw(10)<<producto[j]<<setw(20)<<id[j] <<setw(10)<<pc[j]<<setw(10)<<pv[j]<<setw(12)<<existencia[j]<<setw(10)<<nr[j]<<setw(10)<<st[j]<<endl;
         break;
       }
     }

}
void AdministradorDeCuentasDeUsuario(/* arguments */) {
  /* code */
}
/* Menu de corte de caja general*/
void CorteDecajaGeneral(/* arguments */) {
  /* code */
}
void RegresarAlMenuAnterior(/* arguments */) {
  /* code */
}
