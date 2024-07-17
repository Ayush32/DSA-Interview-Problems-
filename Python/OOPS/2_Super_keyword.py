# extend the attribute
class Emp:
    def __init__(self,id,name,age,address):
        self.id = id
        self.name = name
        self.age = age
        self.address = address

class Freelance(Emp): # inherit from Emp class
    def __init__(self, id, name, age, address,email):
        super().__init__(id, name, age, address)
        # we extend the __init__ method by including email attribute in child clasS(Freelance)
        self.ail = email
    
    def emp_info(self):
        print(f"Employee ID : {self.id}")
        print(f"Employee Name : {self.name}")
        print(f"Employee Age : {self.age}")
        print(f"Employee Address : {self.address}")
        print(f"Employee Email : {self.email}")

#  Using multiple Inheritance  
class Animals:
    
    def __init__(self,) -> None:
        self.legs = 4
        self.domestic = True
        self.mammals = True
        self.Tails = True

    def isMammale(self):
        if self.mammals == True:
            print("It is a mammal")
    
    def isDomestic(self):
        if self.domestic == True:
            print("it is Domestic Animal")
            
class Dogs(Animals):
    
    def __init__(self) -> None:
        super().__init__()
    
    def isMammale(self):
        return super().isMammale()

class Horse(Animals):
    def __init__(self) -> None:
        super().__init__()
    
    def hasLegsAndTails(self):
        if self.legs == 4 and self.Tails:
            print("has Legs and Tails")
            


freelance = Freelance(12411,"Ayush",25,"lucknow","721ayush@gmmail.com")

freelance.emp_info()
        

horse = Horse()
horse.hasLegsAndTails()
horse.isDomestic()
horse.isMammale()
