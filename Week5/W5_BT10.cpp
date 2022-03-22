#include <iostream>
#include <iomanip>

using namespace std;

struct book
{
    int accession_number;
    string name_of_author;
    string book_title;
    int issued; // 1 for issued, 0 for not
    book(){};
    book(int _an, string _noa, string _bt, int _iss)
    {
        accession_number = _an;
        name_of_author = _noa;
        book_title = _bt;
        issued = _iss;
    };
} list[20] = {
    book(1, "Phan Thuy Ha", "Qua Khoi Doc La Nha", 0),
    book(2, "Phan Thuy Ha", "Dung Ke Ten Toi", 0),
    book(3, "Thomas Harris", "The Silence of the Lambs", 0),
    book(4, "Mario puzo", "The Godfather", 0),
    book(5, "Jeffrey Archer", "Kane and Abel", 0),
    book(6, "Stephen King", "Mr. Mercedes", 0),
};
int nol = 6; // number of list

void print(book a);
void add_book(book list[], int nol);
void print_name_author(book list[], string s);
int number_of_particular_title(book list[], string s);
void print_all_books(book list[]);

main()
{
    int chs, num, num_issued;
    string author, book_title;
    while (chs != 7)
    {
        cout << "\tMENU SELECTION\n\n";
        cout << "1 -Display book information\n";
        cout << "2 -Add a new book\n";
        cout << "3 -Display all the books in the library of a particular author\n";
        cout << "4 -Display the number of books of a particular title\n";
        cout << "5 -Display the total number of books in the library\n";
        cout << "6 -Issue a book\n";
        cout << "7 -Exit\n";
        cin >> chs;
        switch (chs)
        {
        case 1:
            for (int i = 0; i < 30; i++)
                cout << endl;
            cout << "Enter the accession number of the book :";
            cin >> num;
            print(list[--num]);
            cout << endl;
            break;
        case 2:
            for (int i = 0; i < 30; i++)
                cout << endl;
            add_book(list, nol);
            nol++;
            break;
        case 3:
            for (int i = 0; i < 30; i++)
                cout << endl;
            cin.ignore();
            cout << "Name of author you wanna to search: ";
            getline(cin, author);
            print_name_author(list, author);
            break;
        case 4:
            for (int i = 0; i < 30; i++)
                cout << endl;
            cin.ignore();
            cout << "Particular title you wanna to search: ";
            getline(cin, book_title);
            if (number_of_particular_title(list, book_title) == 0)
                cout << "There are no books title:\"" << book_title << "\" in the library\n";
            else if (number_of_particular_title(list, book_title) == 1)
                cout << "There is a book title: \"" << book_title << "\" in the library\n";
            else
                cout << "There are " << number_of_particular_title(list, book_title) << " books title: \"" << book_title << "\" in the library\n";
            break;
        case 5:
            for (int i = 0; i < 30; i++)
                cout << endl;
            cout << "The total number of books in the library are " << nol << " :\n";
            print_all_books(list);
            break;
        case 6:
            for (int i = 0; i < 30; i++)
                cout << endl;
            cout << "Issue a book\n";
            print_all_books(list);
            cin >> num_issued;
            for (int i = num_issued; i < nol; i++)
            {
                list[i] = list[i + 1];
            }
            break;
        case 7:
            return 0;
        default:
            cout << "Wrong choice, try again!!\n";
        }
    }
    return 0;
}

// Display a book information
void print(book a)
{
    cout << "Accession number: " << a.accession_number << endl;
    cout << "Name of author: " << a.name_of_author << endl;
    cout << "Book title: " << a.book_title << endl;
    if (a.issued == 1)
        cout << "Issued\n";
    else
        cout << "Not issued\n";
};

// Add a new book
void add_book(book list[], int nol)
{
    list[nol].accession_number = nol + 1;
    cout << "Accession number: " << list[nol].accession_number << endl;
    cout << "Enter name of author: ";
    cin.ignore();
    getline(cin, list[nol].name_of_author);
    cout << "Enter book title: ";
    getline(cin, list[nol].book_title);
    list[nol].issued = 0;
};

void print_name_author(book list[], string s)
{
    int count = 0;
    for (int i = 0; i < nol; i++)
    {
        if (list[i].name_of_author == s)
        {
            count++;
        }
    }
    if (count == 0)
        cout << "There are no books of " << s << " in the library\n";
    else
        cout << "All the books in the library of " << s << ":\n";
    for (int i = 0; i <= nol; i++)
    {
        if (list[i].name_of_author == s)
        {
            cout << list[i].book_title << endl;
        }
    }
    cout << endl;
}

int number_of_particular_title(book list[], string s)
{
    int count = 0;
    for (int i = 0; i <= nol; i++)
    {
        if (list[i].book_title == s)
        {
            count++;
        }
    }
    return count;
};

void print_all_books(book list[])
{
    for (int i = 0; i < nol; i++)
    {
        cout << setw(3) << left << list[i].accession_number;
        cout << setw(25) << left << list[i].book_title;
        cout << setw(20) << left << list[i].name_of_author << endl;
    }
}