'''
one derived class inherit from multiple base class
'''

# base case / superclass / parent class
class Person():
    def person_info(self,name,age):
        print("Inside Person Class")
        print(f"name : {name}, age : {age}")
        
class Company():
    def company_info(self,company_name,location):
        print("Inside Company Class")
        print(f"Company Name : {company_name}, Location : {location}")
    
# derived class
class Employee(Person,Company):
    def employee_info(self,salary,techStack):
        print("Inside Employee Class")
        print(f"Salary : {salary}, skills : {techStack} '")
        
emp = Employee()
emp.person_info("Ayush",25)
emp.company_info("Mercer","Gurugram")
emp.employee_info(450032,"Python, C++, Django")

