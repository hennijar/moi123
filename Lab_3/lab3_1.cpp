#include <iostream>

class Book {

    private:
    std::string title;
    int pages;
    std::string author = "Peter";
    

    protected:
    float price;

    public:
    std::string publisher;

    void displayInfo(){
        std::cout<< "author: " << author;
    }


};

int main(){
    Book MyBook;
    MyBook.displayInfo();
    
}
