from Hardware import Hardware

class Memory(Hardware):
    #private members
    __frequency = 0
    __memorySize = 0
    __supportsCuda = False

    def __init__(self):
        self.__frequency = 0
        self.__memorySize = 0
        self.__supportsCuda = False

    #getter & setter
    def setfrequency(self, frequency):
        self.__frequency = frequency

    def getfrequency(self):
        return self.__frequency
    
    def setmemorySize(self, memorySize):
        self.__memorySize = memorySize

    def getmemorySize(self):
        return self.__memorySize

    def setsupportsCuda(self, supportsCuda):
        self.__supportsCuda = supportsCuda

    def getsupportsCuda(self):
        return self.__supportsCuda
