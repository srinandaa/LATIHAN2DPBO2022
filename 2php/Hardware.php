<?php
   
    class Hardware extends Product{
        private $brand = "blank";
        private $model = "blank";

        function __construct(){
        }

        function setbrand($brand){
            $this->brand = $brand;
        }
        function getbrand(){
            return $this->brand;
        }

        function setmodel($model){
            $this->model = $model;
        }
        function getmodel(){
            return $this->model;
        }

        function __destruct(){  
        }
    } 
?>
