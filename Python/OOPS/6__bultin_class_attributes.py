'''__dict__ - dictionary containign the class' namespaces
   __doc__ - class documentation string or none
   __name__ - class name
   __module__ - module name in which the class is defined, This attribute 
   __bases__ 
'''

class Student:
    'Class student with some instance attribute and class attribute'
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
print(student.__doc__)
print(Student.__name__)
