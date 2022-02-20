from Product import Product

class Hardware(Product):
    #private members
    __brand = "blank"
    __model = "blank"

    def __init__(self):
        self.__brand = "blank"
        self.__model = "blank"

    #getter & setter
    def setbrand(self, brand):
        self.__brand = brand

    def getbrand(self):
        return self.__brand
    
    def setmodel(self, model):
        self.__model = model

    def getmodel(self):
        return self.__model
