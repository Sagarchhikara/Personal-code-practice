#include <iostream>
using namespace std;
// class counter
// {
// private:
//     static int count;

// public:
//     counter()
//     {
//         count++;
//     }
//     static void displaycount()
//     {
//         cout << "The number of objects created: " << count << endl;
//     }
// };
// int counter::count = 0;
// int main()
// {
//     counter c1;
//     counter c2;
//     counter c3;
//     counter::displaycount();
//     return 0;
// }
// class book
// {
//     string title;
//     string author;
//     int pages;

// public:
//     book(string t, string a, int p) : title(t), author(a), pages(p) {}
//     void display() const
//     {
//         cout << "Book title: " << title << endl;
//         cout << "Author: " << author << endl;
//         cout << "Pages: " << pages << endl;
//     }
// };
// int main()
// {
//     const book mybook("The alchemist", "Paulo coehlo", 208);
//     mybook.display();
//     return 0;
// }
// write two classes box and printer make printer a friend class of box so it can acess and print private volume of the box
class printer;
class box
{
    int length, width, height;

public:
    box(int l, int w, int h) : length(l), width(w), height(h) {}
    friend class printer;
};
class printer
{
public:
    void printvolume(const box &b)
    {
        int volume = b.length * b.width * b.height;
        cout << "Voulume of the box: " << volume << endl;
    }
};
int main()
{
    box mybox(3, 4, 5);
    printer p;
    p.printvolume(mybox);
    return 0;
}