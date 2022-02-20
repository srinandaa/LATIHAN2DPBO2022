class Hardware : public Product{

    //atribut
    private:
        string brand;
        string model;
    
    public:
        //konstruktor 
        Hardware(){
            this->brand = "";
            this->model = "";
        }

    
    //setter & getter brand
    void setbrand(string brand){
        this->brand = brand;
    }
    string getbrand(){
        return this->brand;
    }

    //setter & getter model
    void setmodel(string model){
        this->model = model;
    }
    string getmodel(){
        return this->model;
    }
   
     ~Hardware(){
    }
};
