#include <iostream>
#include <limits>
#include <string>
#include <cstdlib>

int idSearch;
int language;
bool winOpen(1);
std::string user;

int error(int errorID, bool quit)
{
  if (errorID == 1)
  {
    std::cout << "Error 01 : Not found !\n";
  }
  else if (errorID == 2)
  {
    std::cout << "Error 02 : Syntax error !\n";
  }
  else
  {

  }
  return errorID;
}

void french()
{
  std::cout << "Entrez l'ID du SCP : ";
  std::cin >> idSearch;
  std::cout << "\n";

  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore();
    error(2, false);
    std::cin >> idSearch;
  }

  switch (idSearch)
  {
    case 1:
      std::cout << "ID : SCP-001\n";
      std::cout << "Name : [Supprimer]\n";
      std::cout << "Object Class : Keter\n";
      break;
    case 2:
      std::cout << "ID : SCP-002\n";
      std::cout << "Name : le Salon\n";
      std::cout << "Object Class : Euclide\n";
      break;
    case 3:
      std::cout << "ID : SCP-003\n";
      std::cout << "Name : Carte mère biologique\n";
      std::cout << "Object Class : Euclide\n";
      break;
    case 4:
      std::cout << "ID : SCP-004\n";
      std::cout << "Name :  Les 12 Clés rouillées et la Porte\n";
      std::cout << "Object Class : Euclide\n";
      break;
    case 5:
      std::cout << "ID : SCP-005\n";
      std::cout << "Name : Passe-partout\n";
      std::cout << "Object Class : Sûr\n";
      break;
    case 6:
      std::cout << "ID : SCP-006\n";
      std::cout << "Name : Fontaine de Jouvence";
      std::cout << "Object Class : Sûr\n";
      break;
    case 7:
      std::cout << "ID : SCP-007\n";
      std::cout << "Name : Planète abdominale\n";
      std::cout << "Object Class : Euclide\n";
      break;
    case 8:
      std::cout << "ID : SCP-008\n";
      std::cout << "Name : Peste Zombie\n";
      std::cout << "Object Class : Euclide\n";
      break;
    case 9:
      std::cout << "ID : SCP-009\n";
      std::cout << "Name : Glace rouge\n";
      std::cout << "Object Class : Euclide\n";
      break;
    case 10:
      std::cout << "ID : SCP-010\n";
      std::cout << "Name : Colliers de Contrôle\n";
      std::cout << "Object Class : Sûr\n";
      break;
    case 35:
      std::cout << "ID : SCP-035\n";
      std::cout << "Name : Masque possessif\n";
      std::cout << "Object Class : Keter\n";
      break;
    case 48:
      std::cout << "ID : SCP-048\n";
      std::cout << "Name : Le Numéro SCP maudit\n";
      std::cout << "Object Class : [Aucun]\n";
      break;
    case 49:
      std::cout << "ID : SCP-049\n";
      std::cout << "Name : Le Docteur de Peste\n";
      std::cout << "Object Class : Euclide\n";
      break;
    case 53:
      std::cout << "ID : SCP-053\n";
      std::cout << "Name : Petite Fille\n";
      std::cout << "Object Class : Euclide\n";
      break;
    case 55:
      std::cout << "ID : SCP-055\n";
      std::cout << "Name : [Inconnu]\n";
      std::cout << "Object Class : Keter\n";
      break;
    default:
      error(1, 0);
  }
  std::cout << "\n";
}

void english()
{
  std::cout << "Enter SCP id : ";
  std::cin >> idSearch;
  std::cout << "\n";

  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore();
    error(2, false);
    std::cin >> idSearch;
  }

  switch (idSearch)
  {
    case 0:
      std::cout << "IĨD : %SĈP~000\n";
      std::cout << "N*#e : N*LL\n";
      std::cout << "O/j#c# Cla#s : ERROR\n";
      std::cout << "[DATA DELETED]\n";
      break;
    case 1:
      std::cout << "ID : SCP-001\n";
      std::cout << "Name : [Deleted]\n";
      std::cout << "Object Class : Keter\n";
      break;
    case 2:
      std::cout << "ID : SCP-002\n";
      std::cout << "Name : the Living Room\n";
      std::cout << "Object Class : Euclid\n";
      break;
    case 3:
      std::cout << "ID : SCP-003\n";
      std::cout << "Name : Biological Motherboard\n";
      std::cout << "Object Class : Euclid\n";
      break;
    case 4:
      std::cout << "ID : SCP-004\n";
      std::cout << "Name : The 12 Rusty Keys and the Door\n";
      std::cout << "Object Class : Euclid\n";
      break;
    case 5:
      std::cout << "ID : SCP-005\n";
      std::cout << "Name : Skeleton Key\n";
      std::cout << "Object Class : Safe\n";
      break;
    case 6:
      std::cout << "ID : SCP-006\n";
      std::cout << "Name : Fountain of Youth\n";
      std::cout << "Object Class : Safe\n";
      break;
    case 7:
      std::cout << "ID : SCP-007\n";
      std::cout << "Name : Abdominal Planet\n";
      std::cout << "Object Class : Euclid\n";
      break;
    case 8:
      std::cout << "ID : SCP-008\n";
      std::cout << "Name : Zombie Plague\n";
      std::cout << "Object Class : Euclid\n";
      break;
    case 9:
      std::cout << "ID : SCP-009\n";
      std::cout << "Name : Red Ice\n";
      std::cout << "Object Class : Euclid\n";
      break;
    case 10:
      std::cout << "ID : SCP-010\n";
      std::cout << "Name : Collars of Control\n";
      std::cout << "Object Class : Safe\n";
      break;
    case 11:
      std::cout << "ID : SCP-011\n";
      std::cout << "Name : Sentient Civil War Memorial Statue\n";
      std::cout << "Object Class : Safe\n";
      break;
    case 12:
      std::cout << "ID : SCP-012\n";
      std::cout << "Name : A Bad Composition\n";
      std::cout << "Object Class : Euclid\n";
      break;
    case 13:
      std::cout << "ID : SCP-013\n";
      std::cout << "Name : Blue Lady Cigarettes\n";
      std::cout << "Object Class : Safe\n";
      break;
    case 14:
      std::cout << "ID : SCP-014\n";
      std::cout << "Name : The Concrete Man\n";
      std::cout << "Object Class : Safe\n";
      break;
    case 15:
      std::cout << "ID : SCP-015\n";
      std::cout << "Name : Pipe Nightmare\n";
      std::cout << "Object Class : Euclid\n";
      break;
    case 35:
      std::cout << "ID : SCP-035\n";
      std::cout << "Name : Possessive Mask\n";
      std::cout << "Object Class : Keter\n";
      break;
    case 48:
      std::cout << "ID : SCP-048\n";
      std::cout << "Name : The Cursed SCP Number\n";
      std::cout << "Object Class : [None]\n";
      break;
    case 49:
      std::cout << "ID : SCP-049\n";
      std::cout << "Name : Plague Doctor\n";
      std::cout << "Object Class : Euclid\n";
      break;
    case 53:
      std::cout << "ID : SCP-053\n";
      std::cout << "Name : Young Girl\n";
      std::cout << "Object Class : Euclid\n";
      break;
    case 55:
      std::cout << "ID : SCP-055\n";
      std::cout << "Name : [Unknown]\n";
      std::cout << "Object Class : Keter\n";
      break;
    default:
      error(1, 0);
  }
  std::cout << "\n";
}

void username(int rand)
{
  switch (rand)
  {
    case 1:
      user = "Dr.John";
      break;
    case 2:
      user = "Dr.Krueger";
      break;
    case 3:
      user = "Dr.Novak";
      break;
    case 4:
      user = "Dr.Golden";
      break;
    case 5:
      user = "Dr.Drake";
      break;
    case 6:
      user = "Dr.Zero";
      break;
    case 7:
      user = "Dr.Downs";
      break;
    case 8:
      user = "Dr.Farley";
      break;
    case 9:
      user = "Dr.Mccarty";
      break;
  }
}

void load()
{
  int random = rand() % 9 + 1;
  username(random);

  std::cout << "SCP_Files.exe\n\n";

  std::cout << "User : " << user << "\n";

  std::cout << "Password : ********\n\n";

  std::cout << "Welcome " << user << " !\n\n";

}

int main() {
  load();

  std::cout << "1 : English (21 SCP)\n";
  std::cout << "2 : Francais (14 SCP)\n";
  std::cin >> language;
  std::cout << "\n";

  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore();
    error(1, false);
    std::cin >> language;
  }
  
  switch (language)
  {
    case 1:
      while (winOpen)
      {
        english();
      }
      break;
    case 2:
      while (winOpen)
      {
        french();
      }
      break;
    default:
      error(2, 0);
      break;
  }
}