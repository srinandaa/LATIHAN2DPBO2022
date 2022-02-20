<?php
    class Memory extends Hardware{
        //atribut
        private $frequency = 0;
        private $memorySize = 0;
        private $supportsCuda = "blank";

        function __construct(){
        }
        
        //setter & getter
        function setfrequency($frequency){
            $this->frequency = $frequency;
        }
        function getfrequency(){
            return $this->frequency;
        }

        function setmemorySize($memorySize){
            $this->memorySize = $memorySize;
        }
        function getmemorySize(){
            return $this->memorySize;
        }

        function setsupportsCuda($supportsCuda){
            $this->supportsCuda = $supportsCuda;
        }
        function getsupportsCuda(){
            return $this->supportsCuda;
        }

        function __destruct(){
        }
    } 
?>
