class LiskovPrinciple:

    class MenuItem:
        
        def __init__(self,price,name,description):
            self.price = price
            self.name = name
            self.description = description

        def getPrice(self):
            return float(self.price - self.getDiscount())
        
        def getDiscount(self):
            return 0
    
    class BeverageItem(MenuItem):

        def __init__(self,price,name,description):
            super().__init__(price,name,description)
        
        def getPrice(self):
            return self.price - self.getDiscount()
        
        def getDiscount(self):
            discountPercent = 10
            return discountPercent * .01 * self.price
        
    
        
obj = LiskovPrinciple().MenuItem(100,"aaaa","aaa")
obj1 = LiskovPrinciple().BeverageItem(60,"Coke","Cold Beverages")
print("MenuItem : ", obj.getPrice())
print("Beverage Item : ",obj1.getPrice())
# print(obj)
