class Student:
    
    collegeName = "SRMCEM" #class
    
    # Parametrized Constructor
    def __init__(self,firstName,lastName,age):
        self.firstName = firstName # instance variable/attribute
        self.lastName = lastName
        self.age = age
    
    def print(self):  # instance Methods
        
        print(f"I am {self.firstName} {self.lastName} and my age is {self.age}")
        

student = Student("Ayush","Gupta",25)
student.print()        
print(student.__class__.collegeName)