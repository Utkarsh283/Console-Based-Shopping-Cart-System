#include<bits/stdc++.h>
using namespace std;

class item;
class cart;

class product{
    int id , price;
    string name;

public:
    product(){

    }
    product(int u_id , string name , int price){
        id = u_id;
        this->name = name;
        this->price = price;
    }    

    string getDisplayName(){
        return name + ": Rs "+ to_string(price) + "\n";
    }

    string getShortName(){
        return name.substr(0,1);
    }

    

    friend class item;
    friend class cart;

};

class item{
     product Product;
    int quantity;

public:

    item(){
        
    }
    item(product p ,int q):Product(p) , quantity(q){};


    int getItemPrice(){
        return quantity * Product.price;
    }

    string getItemInfo(){
         return to_string(quantity) + " x " + Product.name + " = Rs. " + to_string(quantity * Product.price) + "\n";
    }

    friend class cart;


};

class cart{

    unordered_map<int,item>  items;
public:

    void addProduct(product Product){
        if(items.count(Product.id) == 0){
            item newItem(Product,1);
            items[Product.id] = newItem;
        }
        else{
            items[Product.id].quantity += 1;
        }
    }

    int getTotal(){
        int total = 0;
        for(auto itemPair : items){
            auto item = itemPair.second;
            total += item.getItemPrice(); 
        }
        return total;
    }


    string viewCart(){
        if(items.empty()){
            return "Cart is empty ";
        }

        string itemizedList;
        int cart_total = getTotal();

        for(auto itemPair : items){
            auto item = itemPair.second;
            itemizedList.append(item.getItemInfo());
        }
       
       return itemizedList + "\n Total Amount : Rs. " + to_string(cart_total) + '\n';

    }

    bool isEmpty(){
        return items.empty();
    }
};

