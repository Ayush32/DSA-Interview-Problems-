'''
more than one derived class can inherit from single base class
'''
class Parent:
    def display(self):
        print("This is the parent class.")

class Child1(Parent):
    def show1(self):
        print("This is the first child class.")

class Child2(Parent):
    def show2(self):
        print("This is the second child class.")

obj1 = Child1()
obj2 = Child2()
obj1.display()  # Inherited from Parent
obj1.show1()    # Child1's own method
obj2.display()  # Inherited from Parent
obj2.show2()    # Child2's own method
