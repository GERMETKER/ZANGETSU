#include <iostream>
#include <Windows.h>
#include <vector>
class Table
{
public:
    Table()
    {
        price_ = 10000000;
        material_ = "Wood";
        width_ = 1;
        hight_ = 1;
        lenght_ = 1;
        color_ = "White";
        countOfLegs_ = 4;
        article_ = "E312D0";
        name_ = "Gryzinsky";
    }
    Table(int price, std::string material, double width, double hight, double lenght, std::string color, int countOfLegs, std::string name, std::string article)
    {
        price_ = price;
        material_ = material;
        width_ = width;
        hight_ = hight;
        lenght_ = lenght;
        color_ = color;
        countOfLegs_ = countOfLegs;
        name_ = name;
        article_ = article;
    }
    double GetVolume()
    {
        return lenght_ * hight_ * width_;
    }
    void Print()
    {
        std::cout << "Article:\t" << GetArticle() << "\n";
        std::cout << "Name:\t\t" << GetName() << "\n";
        std::cout << "Price:\t\t" << GetPrice() << "\n";
        std::cout << "Count of legs:\t" << GetCOFL() << "\n";
        std::cout << "Color:\t\t" << GetColor() << "\n";
        std::cout << "Lenght:\t\t" << GetLenght() << "\n";
        std::cout << "Hight:\t\t" << GetHight() << "\n";
        std::cout << "Width:\t\t" << GetWidth() << "\n";
        std::cout << "Material:\t" << GetMaterial() << "\n";
    }
    int GetPrice()const
    {
        return price_;
    }
    void SetPrice(int price)
    {
        price_ = price;      
    }
    std::string GetMaterial()const
    {
        return material_;
    }
    void SetMaterial(std::string material)
    {
        material_ = material;
    }
    double GetWidth()const
    {
        return width_;
    }
    void SetWidth(double width)
    {
        width_ = width;
    }
    double GetHight()const
    {
        return hight_;
    }
    void SetHight(double hight)
    {
        hight_ = hight;
    }
    double GetLenght()const
    {
        return lenght_;
    }
    void SetLenght(double lenght)
    {
        lenght_ = lenght;
    }
    std::string GetColor()const
    {
        return color_;
    }
    void SetColor(std::string color)
    {
        color_ = color;
    }
    int GetCOFL()const
    {
        return countOfLegs_;
    }
    void SetCOFL(int countOfLegs)
    {
        countOfLegs_ = countOfLegs;
    }
    std::string GetName()const
    {
        return name_;
    }
    void SetName(std::string name)
    {
        name_ = name;
    }
    std::string GetArticle()const
    {
        return article_;
    }
    void SetArticle(std::string article)
    {
        article_ = article;
    }
private:
    int price_;
    std::string material_;
    double width_;
    double hight_;
    double lenght_;
    std::string color_;
    int countOfLegs_;
    std::string name_;
    std::string article_;
};


void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Table stul01;
    std::vector<Table> stulya;
    stulya.push_back(stul01);
    Table stul02(1000, "Metal", 1, 1, 1, "Black", 4, "Angliysky", "3F940AA");
    stulya.push_back(stul02);
    std::vector<std::vector<int>> vectors;
    for (auto& el : stulya)
    {
        el.Print();
        std::cout << "\n";
    }



}
