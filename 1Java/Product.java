public class Product{
    //atribut
    private int price;
    private String IdProduct;
     
    //konstruktor 
    public Product(){
    }

    //setter & getter price
    public void setprice(int price){
        this.price = price;
    }
    public int getprice(){
        return this.price;
    }

    //setter & getter IdProduct
    public void setIdProduct(String IdProduct){
        this.IdProduct = IdProduct;
    }
    public String getIdProduct(){
        return this.IdProduct;
    }
}
