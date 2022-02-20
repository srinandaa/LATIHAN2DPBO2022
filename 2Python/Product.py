class Product():
    #private members
    __price = 0
    __IdProduct = "blank"

    def __init__(self):
        self.__price = 0
        self.__IdProduct = "blank"

    #getter & setter
    def setprice(self, price):
        self.__price = price

    def getprice(self):
        return self.__price
    
    def setIdProduct(self, IdProduct):
        self.__IdProduct = IdProduct

    def getIdProduct(self):
        return self.__IdProduct
