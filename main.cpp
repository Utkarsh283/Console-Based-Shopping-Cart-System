#include<bits/stdc++.h>
#include"datamodel.h"
using namespace std;

vector<product> allProducts = {
    product(1,"apple",26),
    product(3,"mango",16), 
    product(2,"guava",36), 
    product(5,"banana", 56), 
    product(4,"strawberry",29), 
    product(6,"pineapple", 20),
};

product* chooseProduct(){
    string productList;
    cout<<"Available Products "<<endl;

    for(auto product : allProducts){
        productList.append(product.getDisplayName());
    }

    system("CLS");
    cout<<productList<<endl;
    cout<<"----------------------------------------"<<endl;

    string choice;
    cin>>choice;

    for(int i=0 ; i< allProducts.size() ; i++){
        if(allProducts[i].getShortName() == choice){
            return &allProducts[i];
        }
    
    }

    cout<<"Product not found!"<<endl;
    return NULL;
}

bool checkout(cart &Cart){
    if(Cart.isEmpty()){
        return false;
    }

    int total = Cart.getTotal();
    cout<<"Pay in Cash";

    int paid;
    cin>>paid;

    if(paid>=total){
        cout<<"Change "<<paid-total<<endl;
        cout<<"Thank you for shopping!";
        return true;
    }
    else{
        cout<<"Not enough cash!";
        return false;
    }
}

int main()
{
    char action;
    cart Cart;
    while(true){
        cout<<"Select an action - (a)dd item , (v)iew cart , (c)heckout"<<endl;
        cin>>action;

        if(action == 'a'){
            //add to cart(view all product + choose product + add to cart)

            product * Product = chooseProduct();
            if(Product != NULL){
                cout<<"Added to cart "<<Product->getDisplayName()<<endl;
                Cart.addProduct(*Product);
            }

        }
        else if(action == 'v'){
            system("CLS");
            cout<<"----------------------------------------"<<endl;
            cout<<Cart.viewCart();
            cout<<"----------------------------------------"<<endl;
        }
        else if(action == 'c'){
            Cart.viewCart();
            if(checkout(Cart)){
                break;
            }
        }

        
    }
    

    return 0;
}
