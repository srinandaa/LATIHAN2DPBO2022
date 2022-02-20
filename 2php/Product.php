<?php

class Product{
    private $price = 0;
    private $IdProduct = "blank";

    function __construct(){
    }

    function setprice($price){
        $this->price = $price;
    }
    function getprice(){
        return $this->price;
    }

    function setIdProduct($IdProduct){
        $this->IdProduct = $IdProduct;
    }
    function getIdProduct(){
        return $this->IdProduct;
    }

    function __destruct(){
    }
} 
?>
