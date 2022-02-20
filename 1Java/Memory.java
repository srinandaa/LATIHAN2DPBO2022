public class Memory extends Hardware{
    //atribut
    private int frequency;
    private int memorySize;
    private boolean supportsCuda;
     
    //konstruktor kosong
    public Memory(){
    }

    //setter & getter frequency
    public void setfrequency(int frequency){
        this.frequency = frequency;
    }
    public int getfrequency(){
        return this.frequency;
    }

    //setter & getter memorySize
    public void setmemorySize(int memorySize){
        this.memorySize = memorySize;
    }
    public int getmemorySize(){
        return this.memorySize;
    }

    //setter & getter supportsCuda
    public void setsupportsCuda(boolean supportsCuda){
        this.supportsCuda = supportsCuda;
    }
    public boolean getsupportsCuda(){
        return this.supportsCuda;
    }
}
