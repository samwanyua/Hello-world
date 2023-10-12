#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int num_t;

using text_t = std::string;
using num_t = int;
/*namespace first{
    int x =23423;
}

namespace second {
    int x = 2341213;
}*/
int main() {
    
    // <<std::endl;   or << '\n';  are used to create a new line

    /*
    This
    is 
    a 
    multi-line
    comment
    
    */
   int x; //declaration
   x =100888; //assignment

   int y = 432888;
   int sum = x+y;

   std::cout << x << '\n';
   std::cout << y << '\n';  
   std::cout << sum << '\n'; 

   //Data types
   
   //INTEGERS (whole numbers)
   int age = 31;
   int year = 2334;
   int days = 4;

   std::cout << age << std::endl;
   std::cout << year << std::endl;

   //DOUBLES (Numbers with Decimals)
  double price = 32432.78;
   double temp = 3243.3;
   double gpa = 2349.2394;

   std::cout << gpa << std::endl;

   //char data type (store a single character)
  char currency = '$';
   char grade = 'B';
   char initial = 'G';

   std::cout << grade;

   //Booleans (Either True or False)
   /*bool power = true;
   bool forsale = false;
   bool student = true;

   std::cout << student;*/

   //STRINGS
   std::string name = "Wanyua";
    std::string address = "34 Manhatan New York";
    int age = 323;
    std::cout << address << std::endl;
    std::cout << "Hello " <<name << '\n';
    std::cout << "You are " << age << " Years old!";

    //std::cout << "I like Pizza" << std::endl;
    //std::cout << "I am finally doing c++ man, wueeh" << std::endl;

    //const Keyword
    //const double PI = 3.141159;
    //PI = 23231232;
   double radius = 3212;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm";
    //using namespace first;
    //using namespace std;
    //using std::cout;
    //int x = 342;
    //std::cout << first::x;
    //cout << first::x;
   

   //TYPEDEFS
   //pairlist_t pairlist;
    /*text_t firstname = "Wanyua";
    num_t age  =  34;

    std::cout << firstname << '\n';
    std::cout << age << '\n';*/

//ARITHMETIC OPERAATIONS

    int students = 34;
//ADDITION
    //students= students + 1;
    //students+=1;
    //students++;
//Subtraction
    //students = students - 1;
    //students -=1;
    //students--;
//MULTIPLICATION
    //students = students*2;
    //students *=2;
//DIVISION
    //students = students /2;
    //students/=2;

//ORDER OF OPERATIONS
// parenthesis>> multiplication & division>> addition & subtraction
    students = 6+334-87/2333+ (45435*83);
//int graduands = students%5;

//graduands/=3;

    //std::cout << graduands << '\n';
    std::cout <<students;


    

    return 0;
}
