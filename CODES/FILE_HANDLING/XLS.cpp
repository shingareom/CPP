#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    string line, line2, line3, line4, line5, firstname, age, weight, lastname;
    file.open("D:/OMA/FILE_ANDLING/DATA/Bank.csv", ios::in | ios::out | ios::app);
    (!file.is_open()) ? cout << "Error  " << endl : cout << "done " << endl;
    // file << "om_shingare"
    //      << ',';
    // file << "8767561500"
    //      << ',';
    // file << "23234"
    //      << ',' << endl;
    getline(file, firstname, '\n');
    while (file.good())
    {

        getline(file, firstname, ',');
        getline(file, age, ',');
        getline(file, weight, '\n');

        std::cout << "Email: " << firstname << " " << lastname << '\n';
        std::cout << "phone No: " << age << '\n';
        std::cout
            << "Pass: " << weight << '\n';
        std::cout << "-------------------" << '\n';
    }

    // getline(file, line, '\n');
    // cout << line << endl;
    file.close();

    return 0;
}

// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){

//   ifstream ip("D:/OMA/FILE_ANDLING/DATA/Bank.csv", ios::in | ios::out | ios::app);

//   if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n';

//   string firstname;
//   string lastname;
//   string age;
//   string weight;

//   while(ip.good()){

//     getline(ip,firstname,',');
//     getline(ip,age,',');
//     getline(ip,weight,'\n');

//     std::cout << "Email: "<<firstname<< " "<<lastname << '\n';
//     std::cout << "phone No: "<<age << '\n';
//     std::cout << "Pass: "<<weight << '\n';
//     std::cout << "-------------------" << '\n';
//   }

//   ip.close();
// }