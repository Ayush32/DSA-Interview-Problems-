# class and objects
# creating a class phone

# class Phone:
#     def make_call(self):
#         print("Making phone call")
#     def play_game(self):
#         print("Playing game")

# P1 = Phone()
# P1.make_call()
# P1.play_game()

# adding parameter in a class

class Phone:
    def set_color(self,color):
        self.color = color
    def set_cost(self,cost):
        self.cost = cost
    def get_color(self):
        return self.color
    def get_cost(self):
        return self.cost
    
P2 = Phone()
P2.set_color('Blue')  
P2.set_cost(13003)
print(P2.get_color())
print(P2.get_cost())   

