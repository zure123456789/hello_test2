#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std ;
class Book 
{ 
   public :
   
   char name[20]; 
   char author[20] ; 
   char genre[20]; 
   char publishing[20]; 
   
   

};

void printBook(Book book) { 
    cout << "Название : " << book.name << endl; 
    cout << "Автор: " << book.author << endl; 
    cout << "Жанр : " << book.genre<< endl; 
    cout << "Издательство: " << book.publishing << endl; 
    cout << endl; 
} 
void print_one(Book p)
 {
    cout<< p.name <<"\t\t"<< p.author <<"\t\t"<<p.genre; 
    cout<<"\t\t"<< p.publishing<<endl;
 }
 
 void print_all(Book*p,int k)
 {
    cout<<"Имя :"<<"\t\t"<<"Автор:"<<"\t\t"<<"Жанр:";
    cout<<"\t"<<"Издательство:";
    cout<<"\n\n";
    for(int i=0;i<k;i++)
    print_one(p[i]);
 }

 
void printAllBooks(Book books[], int count) { 
    for (int i = 0; i < count; i++) { 
        printBook(books[i]); 
    } 
} 
void searchBooksByName(Book books[], int count, string name) { 
    bool found = false; 
    for (int i = 0; i < count; i++) { 
        if (books[i].name == name) { 
            printBook(books[i]); 
            found = true; 
        } 
    } 
    if (!found) { 
        cout << "Ни одна книга не найдена по названию  " << name<< endl; 
    } 
} 
void searchBooksByAuthor(Book books[], int count, string author) { 
    bool found = false; 
    for (int i = 0; i < count; i++) { 
        if (books[i].author == author) { 
            printBook(books[i]); 
            found = true; 
        } 
    } 
    if (!found) { 
        cout << "Ни одна книга не найдена по автору  " << author << endl; 
    } 
} 

void searchBooksByGenre(Book books[], int count ,string genre){
  bool found = false ; 
  for(int i = 0 ; i < count ; i++){
    if(books[i].genre == genre){
      printBook(books[i]);
      found = true ; 
    }
    if (!found) { 
        cout << "Ни одна книга не найдена по жанру  " << genre << endl; 
    } 
  }
}

void searchBooksByPublishing(Book books[], int count ,string publishing){
  bool found = false ; 
  for(int i = 0 ; i < count ; i++){
    if(books[i].publishing == publishing){
      printBook(books[i]);
      found = true ; 
    }
    if (!found) { 
        cout << "Ни одна книга не найдена по издательству   " << publishing<< endl; 
    } 
  }
}
int main()
{

setlocale(LC_ALL,"Russian");
  cout<<"\n\t\t"<<"***Библиотека ***\n\n";
const int k=10;
  int print_names ; 
  int print_authors ;
  int print_genre; 
  int print_publishing ; 

 
Book books[k];
strcpy(books[0].name,"Том и Джери ");
strcpy(books[0].author,"Лиза");
strcpy(books[0].genre,"Анекдот");
strcpy(books[0].publishing,"Гугл");

strcpy(books[1].name,"Ник");
strcpy(books[1].author,"Петя");
strcpy(books[1].genre,"Трийлер");
strcpy(books[1].publishing,"Гугл");
  
strcpy(books[2].name,"Aлиса в стране чудес");
strcpy(books[2].author,"Лью́ис Кэ́рролл");
strcpy(books[2].genre,"фентези");
strcpy(books[2].publishing ,"Гугл");

strcpy(books[3].name,"Лошади ");
strcpy(books[3].author,"Петя");
strcpy(books[3].genre,"Приключения ");
strcpy(books[3].publishing ,"Журнал");
  
strcpy(books[4].name,"«Властелин колец» ");
strcpy(books[4].author,"Джон Рональд Руэл  ");
strcpy(books[4].genre,"роман ");
strcpy(books[4].publishing,"Гугл ");

strcpy(books[5].name," Гордость и предубеждение");
strcpy(books[5].author,"Джейн Остин");
strcpy(books[5].genre,"Роман");
strcpy(books[5].publishing ,"Гугл ");
cout<<"\n Вы выбрали :\n";
cout<<"\n\t\t"<<"Библиотека \n\n";
print_all(books ,k);
int choice;
bool fQuit=false;
cout<<"\n\t\t"<<"Что нужно сделать ?\n";
cout<<"(1)Выход (2)Сортировать по имени(3)Сортировать по автору  (4) Сортировать по издательству :";
cin>>choice;

 

switch(choice)
{
    default:fQuit=true;
    bool found = false ;
    for (int i = 0 ; i < k ; i++)
      
    case 1 :cout <<" Вы выбрали выход "<<endl; 
    case 2: print_all(books,2);
            print_all(books ,k);break;
    case 3: print_all(books, k);
            print_all(books,k); break;
    case 4: print_all(books, k);
            print_all(books,k); break;
      
    if(fQuit==true)
    break;
  return 0 ; 
 
}
  
}

