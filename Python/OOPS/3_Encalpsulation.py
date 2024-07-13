class Computer:
    
    def __init__(self):
        self.__maxprice = 900
    
    def sell(self):
        print(f"Selling price : {self.__maxprice}")
        
    # we can access the private attribute inside the class
    def setMaximumPrice(self):
        self.__maxprice = 1200
    
    def priceChange(self):
        print(f"Selling price : {self.__maxprice}")
    
    
        
obj = Computer()
obj.sell()
obj.setMaximumPrice()
obj.priceChange()
# print(obj.__maxprice)
