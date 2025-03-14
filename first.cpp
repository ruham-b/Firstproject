#include <iostream>

int main() {
    //  Q1
    std::cout << "This is a program that analyzes product sales and inventory for a store" << '\n';
    std::cout << "Notice c++ is the used language" << "\n";
    //q2
    std::string productName;
    int  productCategory;
    int initalInventoryQuantity;
    float productPricePerUnit;
    int ItemsSold;
    //q3
    int newInventory;
    float totalProductSales;
    std::string  inventoryStatus;
    //q4
    int sample1(10);//direct initalization
    int sample2;
    sample2 = 15;//assignment after declaration
    int sample3{20}; //list initialization
    //q5
    auto totalcopy = totalProductSales; 
    decltype(initalInventoryQuantity)inventory=50;
    //q6
    #define TAX_Rate__MACRO 0.15
    const double TAX_RATE = 0.15;
    //q7
        std::cout<<"enter a product name:" ;
        std::getline(std::cin, productName);
        std::cout<<"enter inital inventory quantity: " << '\n';
        std::cin>>initalInventoryQuantity;
        std::cout<<"enter  product category :" << '\n';
        std::cin>> productCategory;
        std::cout << "Enter product price per unit: " << '\n';
        std::cin >> productPricePerUnit;
        std::cout<<"enter  Items sold :" << '\n';
        std::cin>>ItemsSold;
    //q8
    newInventory = (initalInventoryQuantity - ItemsSold);
    totalProductSales =(ItemsSold *productPricePerUnit);
    //q9
    if(newInventory < 10){
        inventoryStatus = "Low Inventory";
    }
    else{
        inventoryStatus= "Sufficient Inventory";
    }
    //q10
    std::string message;
     if (productCategory >= 1 && productCategory <= 5) {
        switch (productCategory) {
            case 1: message = "Category 1: Electronics";
            break;
            case 2: message = "Category 2: Groceries";
            break;
            case 3: message = "Category 3: Clothing";
            break;
            case 4: message = "Category 4: Stationery";
            break;
            case 5: message = "Category 5: Miscellaneous";
            break;
        }
    } else {
        message = "Invalid category!";
    }
    std::cout << message << '\n';
    //q11
    std::cout << "      Receipt    " <<'\n';
    std::cout << "Product: " << productName << '\n';
    std::cout << message << '\n';//it shows category
    std::cout << "Price per unit: $" <<productPricePerUnit << '\n';
    std::cout << "Items Sold: " << ItemsSold << "\n";
     for (int i = 1; i <= ItemsSold; i++) {
        std::cout << "Item " << i << ": $"  << productPricePerUnit << "\n";}
        std::cout <<"total :$"<<totalProductSales<<'\n';
    //q12
    std::cout<<TAX_Rate__MACRO<<'\n';
    std::cout<<TAX_RATE<<'\n';
    std::cout<<"******summery******"<<'\n';
    //product detail 
    std::cout<<"productName : "<<productName<<'\n';
    std::cout<<"productCategory :"<<productCategory<<'\n';
    std::cout<<"initalInventoryQuantity ;"<<initalInventoryQuantity<<'\n';
    std::cout<<"productPricePerUnit : "<<productPricePerUnit<<'\n';
    std::cout<<"ItemsSold :"<<ItemsSold<<'\n';
    //*************************
    std::cout<<"newInventory : "<<newInventory<<'\n';
    std::cout<<"totalProductSales : "<<totalProductSales<<'\n';
    std::cout<<"inventoryStatus : "<<inventoryStatus<<'\n';
    std::cout<<" totalcopy : "<<totalcopy<<'\n';
    std::cout<<"inventory: "<<inventory<<'\n';
    
    return 0;
}
