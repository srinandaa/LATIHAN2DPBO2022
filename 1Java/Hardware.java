public class Hardware extends Product{
    //atribut
    private String brand;
    private String model;
     
    //konstruktor 
    public Hardware(){
    }

    //setter & getter brand
    public void setbrand(String brand){
        this.brand = brand;
    }
    public String getbrand(){
        return this.brand;
    }

    //setter & getter model
    public void setmodel(String model){
        this.model = model;
    }
    public String getmodel(){
        return this.model;
    }
}
