class Memory : public Hardware{
    //atribut
    private:
        int frequency;
        int memorySize;
        bool supportsCuda;

    public:
        //konstruktor
        Memory(){
            this->frequency = 0; 
            this->memorySize = 0;
            this->supportsCuda = "";
        }
    
    //setter & getter frequency
    void setfrequency(int frequency){
        this->frequency = frequency;
    }
    int getfrequency(){
        return this->frequency;
    }

    //setter & getter memorySize
    void setmemorySize(int memorySize){
        this->memorySize = memorySize;
    }
    int getmemorySize(){
        return this->memorySize;
    }
    
    //setter & getter supportsCuda
    void setsupportsCuda(bool supportsCuda){
        this->supportsCuda = supportsCuda;
    }
    bool getsupportsCuda(){
        return this->supportsCuda;
    }

    ~Memory(){
    }
};
