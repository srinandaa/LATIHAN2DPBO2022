class Product{
    //atribut
    private:
        int price;
        string IdProduct;

     //konstruktor 
    public: 
        Product(){
            this->price = 0;
            this->IdProduct = "";
        }

    
    //setter & getter price
    void setprice(int price){
        this->price = price;
    }
    int getprice(){
        return this->price;
    }

    //setter & getter IdProduct  
    void setIdProduct(string IdProduct){
        this->IdProduct = IdProduct;
    }
    string getIdProduct(){
        return this->IdProduct;
    }

    ~Product(){
    }
};
