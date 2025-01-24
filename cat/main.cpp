#include <iostream>
#include <fstream>

using namespace std;
class user
{   public:
   string  username;
   string  email;
   int  password;
};

void save(user newuser)
{
    ofstream out("DataBase.txt",ios::app);
    if(out.fail())
    cout<<"can't open file!\n";
    else{

    out << newuser.email << " ";

    out << newuser.password << " ";

    out << newuser.username << "\n";


    }

   out.close();

}
void Register()
{

    user newuser;

    cout << "Enter your email :\n";
    cin >> newuser.email;

    cout << "Enter your password :\n";
    cin >> newuser.password;

    cout << "Enter your username :\n";
    cin >> newuser.username;

    save(newuser);
    cout << "you register successfully \n";


}

 bool sereach(int p ,string e)
 {   string reademail,notimportant;int readpass;
     ifstream in("DataBase.txt");
     if(in.fail())
        cout << "can't open file!\n";
     else
     {

           do
        {

         in >> reademail;
         if(reademail == e)
         {
             in >> readpass;
            if(readpass == p)
            {
                in.close();
                return true;
            }


         }
      getline(in,notimportant);
     }while (!in.eof());


     }
     in.close();
     return false;
 }

void login()
{
int pass;string eml;

    cout << "Enter your email :\n";
    cin >> eml;

    cout << "Enter your password :\n";
    cin >> pass;


  if(sereach(pass , eml))
    cout << "log in  successfully \n";
    else
        cout << "try again \n";
}
int main()
{
 while(1)
 {

    int choice;
    printf("1) Register\n");
    printf("2) Log in  \n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1 :
     Register();
    break;
    case 2 :
        login();
    break;
    default:
        cout<< "invalid choice!\n";
    }

 }
    return 0;
}
