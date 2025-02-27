/*
    Book
    Jadrian
*/

#pragma once
#include <string>

class Book
{
private:
    std::string codeNum;
    std::string author;
    std::string title;
    std::string pubCode;
    double price;
    int edition;
public:
    Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr){
                codeNum = cn;
                author = au;
                title = ti;
                edition = ed;
                pubCode = pc;
                price = pr;
            }
    inline std::string getISBN(){
        return codeNum;
    }
    inline std::string getAuthor(){
        return author;
    }
    inline std::string getTitle(){
        return title;
    }
    inline std::string getPubCode(){
        return pubCode;
    }
    inline double getPrice(){
        return price;
    }
    inline int getEdition(){
        return edition;
    }

    inline void changePrice(double NEWprice){
        price = NEWprice;
    }
};

