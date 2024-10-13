# base case / superclass / parent class
class Grandparent:
    def display_grandparent(self):
        print("This is the grandparent class.")

class Parent(Grandparent):
    def display_parent(self):
        print("This is the parent class.")

class Child(Parent):
    def display_child(self):
        print("This is the child class.")

obj = Child()
obj.display_grandparent()  # Inherited from Grandparent
obj.display_parent()       # Inherited from Parent
obj.display_child()        # Child's own method
