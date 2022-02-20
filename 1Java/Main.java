import java.util.*;

public class main{
    public static void main(String[] args){
        //deklarasi kelas
        Memory data1 = new Memory();
        Memory data2 = new Memory();

        //hardcode inputan
        data1.setprice(6000000);
        data1.setIdProduct("123Z321");
        data1.setbrand("klova");
        data1.setmodel("cute123");
        data1.setfrequency(10000);
        data1.setmemorySize(512);
        data1.setsupportsCuda(false);

        data2.setprice(12000000);
        data2.setIdProduct("101A101");
        data2.setbrand("MilkMocha");
        data2.setmodel("Brown404");
        data2.setfrequency(30000);
        data2.setmemorySize(1000);
        data2.setsupportsCuda(true);

        //output
        System.out.println("===========================================");
        System.out.println("Id           : " + data1.getIdProduct());
        System.out.println("Price        : " + "Rp" + data1.getprice() + ",-");
        System.out.println("Brand        : " + data1.getbrand());
        System.out.println("Model        : " + data1.getmodel());
        System.out.println("Frequency    : " + data1.getfrequency() + " Hz");
        System.out.println("Memory Size  : " + data1.getmemorySize() + " GB");
        System.out.println("Support CUDA : " + data1.getsupportsCuda());
        System.out.println("===========================================");
        System.out.println("Id           : " + data2.getIdProduct());
        System.out.println("Price        : " + "Rp" + data2.getprice() + ",-");
        System.out.println("Brand        : " + data2.getbrand());
        System.out.println("Model        : " + data2.getmodel());
        System.out.println("Frequency    : " + data2.getfrequency() + " Hz");
        System.out.println("Memory Size  : " + data2.getmemorySize() + " GB");
        System.out.println("Support CUDA : " + data2.getsupportsCuda());
        System.out.println("===========================================");
    }
}
