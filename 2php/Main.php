<?php
include "Product.php";
include "Hardware.php";
include "Memory.php";

    $data1 = new Memory();
    $data2 = new Memory();

    //hardcode inputan
    $data1->setprice(6000000);
    $data1->setIdProduct("123Z321");
    $data1->setbrand("klova");
    $data1->setmodel("cute123");
    $data1->setfrequency(10000);
    $data1->setmemorySize(512);
    $data1->setsupportsCuda("False");

    $data2->setprice(12000000);
    $data2->setIdProduct("101A101");
    $data2->setbrand("MilkMocha");
    $data2->setmodel("Brown404");
    $data2->setfrequency(30000);
    $data2->setmemorySize(1000);
    $data2->setsupportsCuda("true");

    //output
    echo "==========================================="."<br/>";
    echo "Id           : " . $data1->getIdProduct()."<br/>";
    echo "Price        : " . "Rp" . $data1->getprice() . ",-"."<br/>";
    echo "Brand        : " . $data1->getbrand()."<br/>";
    echo "Model        : " . $data1->getmodel()."<br/>";
    echo "Frequency    : " . $data1->getfrequency() . " Hz"."<br/>";
    echo "Memory Size  : " . $data1->getmemorySize() . " GB"."<br/>";
    echo "Support CUDA : " . $data1->getsupportsCuda()."<br/>";
    echo "==========================================="."<br/>";
    echo "Id           : " . $data2->getIdProduct()."<br/>";
    echo "Price        : " . "Rp" . $data2->getprice() . ",-"."<br/>";
    echo "Brand        : " . $data2->getbrand()."<br/>";
    echo "Model        : " . $data2->getmodel()."<br/>";
    echo "Frequency    : " . $data2->getfrequency() . " Hz"."<br/>";
    echo "Memory Size  : " . $data2->getmemorySize() . " GB"."<br/>";
    echo "Support CUDA : " . $data2->getsupportsCuda()."<br/>";
    echo "==========================================="."<br/>";

?>
