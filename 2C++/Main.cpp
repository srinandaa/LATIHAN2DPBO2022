#include <string>
#include <iostream>
using namespace std;
#include "Product.cpp"
#include "Hardware.cpp"
#include "Memory.cpp"

int main(){
    //hardcode input
    Memory data1, data2;
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
    cout << "===========================================" << endl;
    cout << "Id           : " << data1.getIdProduct() << endl;
    cout << "Price        : " << data1.getprice() << ",-" << endl;
    cout << "Brand        : " << data1.getbrand() << endl;
    cout << "Model        : " << data1.getmodel() << endl;
    cout << "Frequency    : " << data1.getfrequency() << " Hz" << endl;
    cout << "Memory Size  : " << data1.getmemorySize() << " GB" << endl;
    cout << "Support CUDA : " << data1.getsupportsCuda() << endl;
    cout << "===========================================" << endl;
    cout << "Id           : " << data2.getIdProduct() << endl;
    cout << "Price        : " << data2.getprice() << ",-" << endl;
    cout << "Brand        : " << data2.getbrand() << endl;
    cout << "Model        : " << data2.getmodel() << endl;
    cout << "Frequency    : " << data2.getfrequency() << " Hz" << endl;
    cout << "Memory Size  : " << data2.getmemorySize() << " GB" << endl;
    cout << "Support CUDA : " << data2.getsupportsCuda() << endl;
    cout << "===========================================" << endl;

    return 0;
}
